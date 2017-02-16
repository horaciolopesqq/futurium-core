<?php
/**
 * @file
 * futurium_links.theme.inc
 */

/**
 * Implements hook_theme().
 */
function futurium_links_theme($existing, $type, $theme, $path) {
  return array(
    'futurium_links_list' => array(
      'variables' => array(
        'entity_type' => NULL,
        'entity_id' => NULL,
        'relation_type' => array(),
      ),
      'template' => 'futurium-links-list',
      'path' => drupal_get_path('module', 'futurium_links') . '/templates',
      'preprocess functions' => array(
        'template_preprocess',
        '_futurium_links_preprocess_list',
      ),
    ),
  );
}

/**
 * Helper to show list of relations.
 */
function _futurium_links_get_related_items($entity_id, $relation_type, $settings = NULL) {
  $items = NULL;
  $relation = _relation_type_load($relation_type);

  // Get related node ids.
  $q = db_select('field_data_endpoints', 'ep_a');
  $q->join('field_data_endpoints', 'ep_b', 'ep_a.entity_id = ep_b.entity_id');
  $q->addField('ep_a', 'entity_id', 'rid');
  $q->addField('ep_b', 'endpoints_entity_id', 'related_item_id');
  $q
    ->condition('ep_a.bundle', $relation_type)
    ->condition('ep_a.endpoints_entity_id', $entity_id)
    ->condition('ep_b.endpoints_entity_id', $entity_id, '!=');

  ($settings['reverse'] && $relation->directional)
    ? $q->condition('ep_a.endpoints_r_index', 1)
    : $q->condition('ep_a.endpoints_r_index', 0);

  $results = $q->execute()->fetchAll();
  foreach ($results as $row) {
    $items[$row->rid] = $row->related_item_id;
  }
  return $items;
}

/**
 * Preprocess function.
 */
function _futurium_links_preprocess_list(&$vars) {
  $entity_id     = $vars['entity_id'];
  $relation_name = $vars['relation_type'];
  $settings      = $vars['settings'];

  $relation = _relation_type_load($relation_name);

  $vars['title'] = $relation->label;
  $vars['list'] = NULL;
  $vars['pager'] = NULL;
  $rows = NULL;

  $vars['theme_hook_suggestions'][] = 'futurium_links_list__' . $relation_name;
  $vars['classes_array'][] = $settings['relation_class'];

  if ($relation->directional) {
    if ($settings['reverse']) {
      $vars['title'] = $relation->reverse_label;
      $vars['theme_hook_suggestions'][] = 'futurium_links_list__' . $relation_name . '__reverse';
      $vars['classes_array'][] = 'reverse';
    }
  }

  // Build the list.
  $items = _futurium_links_get_related_items($entity_id, $relation_name, $settings);
  if ($items) {
    $delta = 0;
    foreach ($items as $rid => $id) {
      $related_entity = node_load($id);
      if (node_access('view', $related_entity)) {
        if (user_access('delete relations')) {
          $link = l(t("!title", array('!title' => $settings['delete_link_text'])),
            "relation/{$rid}/delete",
            array(
              'attributes' => array(
                'class' => array('unlink'),
                'title' => t("Delete this relation"),
              ),
              'query' => array(
                'destination' => drupal_get_path_alias(current_path()),
              ),
              'html' => TRUE,
            )
          );
          $related_entity->delete_relation_link = $link;
        }
        $to_render = node_view($related_entity, $settings['view_mode']);
        $rows[$delta] = drupal_render($to_render);
        $delta++;
      }
    }

    if ($rows) {
      $vars['list'] = array(
        '#theme' => 'item_list',
        '#items' => $rows,
        '#attributes' => array(
          'class' => array(
            'list-teaser',
          ),
        ),
      );

      // Build the pager.
      if ($per_page = $settings['items_per_page']) {
        $current_page = pager_default_initialize(count($rows), $per_page);
        $chunks = array_chunk($rows, $per_page, TRUE);
        $rows = $chunks[$current_page];
        $pager_type = $settings['pager_type'];
      }
      else {
        $pager_type = 'none';
      }

      switch ($pager_type) {
        case 'mini':
          $vars['pager'] = array(
            '#theme' => 'views_mini_pager',
            '#pager_id' => $relation->relation_type,
            '#limit' => $per_page,
            '#quantity' => count($rows),
          );
          break;

        case 'full':
          $vars['pager'] = array(
            '#theme' => 'pager',
            '#pager_id' => $relation->relation_type,
            '#limit' => $per_page,
            '#quantity' => count($rows),
          );
          break;

        default:
      }
    }
  }
}
