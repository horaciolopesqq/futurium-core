<?php
/**
 * @file
 * futurium_links.blocks.inc
 */

/**
 * Implements hook_block_info().
 */
function futurium_links_block_info() {
  foreach (relation_get_types() as $relation) {
    $type = $relation->relation_type;
    $relation = _relation_type_load($type);

    $blocks['fl__create__' . $type] = array(
      'info' => t('Create relation - @type', array('@type' => $relation->list_title)),
      'cache' => DRUPAL_NO_CACHE,
      'properties' => array(
        'type' => 'create',
        'relation_type' => $type,
        'direction' => 'normal',
      ),
    );

    $blocks['fl__list__' . $type] = array(
      'info' => t('List relation - @type', array('@type' => $relation->list_title)),
      'cache' => DRUPAL_NO_CACHE,
      'properties' => array(
        'type' => 'list',
        'relation_type' => $type,
        'direction' => 'normal',
      ),
    );
  }

  return $blocks;
}

/**
 * Implements hook_block_configure().
 */
function futurium_links_block_configure($delta = '') {
  $form = array();

  $settings = futurium_links_block_default_settings($delta);

  $entity_info = entity_get_info('node');
  $vm_options = array();
  foreach ($entity_info['view modes'] as $k => $view_mode) {
    $vm_options[$k] = $view_mode['label'];
  }

  $delta_parts = explode('__', $delta);
  if ($delta_parts[0] == 'fl') {
    switch ($delta_parts[1]) {
      case 'create':

        $form['preview_view_mode'] = array(
          '#type' => 'select',
          '#title' => t('Preview view mode'),
          '#default_value' => $settings['preview_view_mode'],
          '#options' => $vm_options,
          '#description' => t('The view mode to use for the preview.'),
          '#required' => TRUE,
        );

        $form['show_add_links'] = array(
          '#type' => 'checkbox',
          '#title' => t('Create content links'),
          '#default_value' => $settings['show_add_links'],
          '#description' => t('Check to show links to create content on the widget.'),
        );

        break;

      case 'list':

        $form['view_mode'] = array(
          '#type' => 'select',
          '#title' => t('View mode'),
          '#default_value' => $settings['view_mode'],
          '#options' => $vm_options,
          '#description' => t('The view mode to use for the relation list.'),
          '#required' => TRUE,
        );

        $form['list_type'] = array(
          '#type' => 'hidden',
          '#value' => 'item-list',
        );

        $form['pager_type'] = array(
          '#type' => 'select',
          '#title' => t('Pager type'),
          '#default_value' => $settings['pager_type'],
          '#options' => array(
            '_none' => t("Show all results"),
            'mini' => t('Mini pager'),
            'full' => t('Full pager'),
          ),
          '#required' => TRUE,
        );

        $form['items_per_page'] = array(
          '#type' => 'textfield',
          '#title' => t('Items per page'),
          '#description' => t('Enter 0 to show all items.'),
          '#default_value' => $settings['items_per_page'],
          '#size' => 2,
          '#maxlength' => 2,
          '#states' => array(
            'visible' => array(
              ':input[name*="pager_type"]' => array('!value' => '_none'),
            ),
            'required' => array(
              ':input[name*="pager_type"]' => array('!value' => '_none'),
            ),
          ),
        );

        $form['delete_link_text'] = array(
          '#type' => 'textfield',
          '#title' => t('Delete link text'),
          '#default_value' => $settings['delete_link_text'],
          '#size' => 255,
          '#maxlength' => 255,
        );

        break;
    }
  }
  return $form;
}

/**
 * Implements hook_block_save().
 */
function futurium_links_block_save($delta = '', $settings = array()) {
  if (isset($settings['pager_type']) && $settings['pager_type'] == '_none') {
    $settings['items_per_page'] = 0;
  }
  variable_set($delta . '_settings', $settings);
}

/**
 * Implements hook_block_view().
 */
function futurium_links_block_view($delta = '', $edit = NULL) {
  $block = array();
  $node = menu_get_object();

  if (isset($node)) {

    $settings = futurium_links_block_default_settings($delta);
    $delta_parts = explode('__', $delta);
    if ($delta_parts[0] == 'fl') {
      $type = $delta_parts[2];
      $relation = _relation_type_load($type);
      switch ($delta_parts[1]) {
        case 'create':
          if (user_access('use futurium links')) {
            $settings['reverse'] = FALSE;
            $settings['relation_class'] = drupal_html_class($type);
            $settings['relation_type'] = $type;

            // Add the normal form.
            $form = drupal_get_form('futurium_links_create_link_form', $node, $settings);
            $block['content']['#markup'] = drupal_render($form);

            // Add the reverse direction form, if relation is directional.
            if ($relation->directional) {
              $settings['reverse'] = TRUE;
              $settings['relation_class'] = drupal_html_class($type) . '_reverse';

              $form = drupal_get_form('futurium_links_create_link_form', $node, $settings);
              $block['content']['#markup'] .= drupal_render($form);
            }
          }
          break;

        case 'list':
          $relation = _relation_type_load($type);
          $settings['label'] = $relation->list_label;
          $settings['reverse'] = FALSE;
          $settings['relation_class'] = drupal_html_class($type);
          $settings['relation_type'] = $type;

          $list_markup = theme('futurium_links_list', array(
            'entity_type' => 'node',
            'entity_id' => $node->nid,
            'relation_type' => $type,
            'settings' => $settings,
          ));

          // Add the normal list.
          $block['content'] = array(
            '#type' => 'markup',
            '#markup' => $list_markup,
          );

          // Add the reverse direction list, if relation is directional.
          if ($relation->directional) {
            $settings['label'] = $relation->reverse_list_label;
            $settings['reverse'] = TRUE;
            $settings['relation_class'] = drupal_html_class($type) . '_reverse';
            $list_markup = theme('futurium_links_list', array(
              'entity_type' => 'node',
              'entity_id' => $node->nid,
              'relation_type' => $type,
              'settings' => $settings,
            ));
            $block['content']['#markup'] .= $list_markup;
          }

          break;
      }
    }
  }
  return $block;
}

/**
 * Default block settings.
 */
function futurium_links_block_default_settings($delta = '') {
  $options = variable_get("{$delta}_settings", array());
  $default_options  = array();

  $delta_parts = explode('__', $delta);
  if ($delta_parts[0] == 'fl') {
    switch ($delta_parts[1]) {
      case 'create':
        $default_options  = array(
          'preview_view_mode' => 'teaser',
          'show_add_links' => '0',
        );
        break;

      case 'list':
        $default_options  = array(
          'view_mode' => 'teaser',
          'pager_type' => 'mini',
          'items_per_page' => '0',
          'delete_link_text' => t("Delete"),
        );
    }
  }

  return array_merge($default_options, $options);
}
