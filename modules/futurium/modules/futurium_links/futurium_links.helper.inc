<?php
/**
 * @file
 * futurium_links.helper.inc
 */

/**
 * Helper to get relations with custom properties.
 *
 * Relation module doesn't expose any hook, so we do.
 */
function _relation_type_load($relation_type) {
  $relation = relation_type_load($relation_type);
  if (!isset($relation->list_title)) {
    $relation->list_title = $relation->label;
    $relation->description = $relation->label;
    $relation->list_label = $relation->label;

    if ($relation->directional) {
      $relation->reverse_description = $relation->reverse_label;
      $relation->reverse_list_label = $relation->reverse_label;
    }
  }
  drupal_alter('relation_type', $relation);
  return $relation;
}

/**
 * Helper function to create the relation.
 */
function _futurium_links_link_nodes($nid1, $nid2, $relation_type = NULL, $reverse = FALSE, $type = 'insert') {
  $relation = _relation_type_load($relation_type);
  if ($nid1 == $nid2) {
    return array(
      'message' => t('Creating relation failed. Cannot link entity with itself.'),
      'type' => 'error',
      'fade' => TRUE,
    );
  }
  $origin_nid = $nid1;
  $target_nid = $nid2;

  $o_n = node_load($origin_nid);
  $t_n = node_load($target_nid);

  $endpoints = array(
    array('entity_type' => 'node', 'entity_id' => $o_n->nid),
    array('entity_type' => 'node', 'entity_id' => $t_n->nid),
  );

  $vars = array(
    '@origin_node' => $o_n->title,
    '@origin_type' => $o_n->type,
    '@target_node' => $t_n->title,
    '@target_type' => $t_n->type,
    '@relation_label' => $relation->label,
  );
  if ($reverse) {
    $vars['@relation_label'] = $relation->reverse_label;
    $endpoints = array_reverse($endpoints);
  }

  $desc = t('"@origin_node" @relation_label "@target_node"', $vars);

  $relation = _relation_type_load($relation_type);
  $results = relation_relation_exists($endpoints, $relation_type, TRUE);
  if (empty($results)) {
    $new_relation = relation_create($relation_type, $endpoints);
    $rid = relation_save($new_relation);

    if ($rid) {
      $message = t('Relation created!<br>@desc', array('@desc' => $desc));
      $message_type = 'status';
      $fade = TRUE;
    }
    else {
      $message = t('Creating relationship failed.');
      $message_type = 'error';
      $fade = FALSE;
    }
  }
  else {
    $message = t('Relationship already exists!<br>@desc', array('@desc' => $desc));
    $message_type = 'warning';
    $fade = TRUE;
  }

  if ($type == 'insert') {
    drupal_set_message($message, $message_type);
  }
  else {
    return array(
      'message' => $message,
      'type' => $message_type,
      'fade' => $fade,
    );
  }
}

/**
 * Helper function to extract selected node from autocomplete field.
 */
function _futurium_links_parse_result($value) {
  $result = preg_match('/\[([0-9]+)\]/', $value, $matches);
  if ($result > 0) {
    $result = $matches[0];
    $result = str_replace('[', '', $result);
    $result = str_replace(']', '', $result);
    return $result;
  }
  return FALSE;
}

/**
 * Callback for autocomplete box.
 */
function _futurium_links_node_autocomplete($show_links, $relation_name, $direction, $origin, $string) {
  $matches = array();

  $reverse = ($direction == 'normal')
    ? FALSE
    : TRUE;

  $bundles = _futurium_links_possible_bundles($origin, $relation_name, $reverse);

  if ($string && !empty($bundles)) {

    $bundles = str_replace('node:', '', $bundles);
    $query = db_select('node', 'n');
    $query->fields('n', array('title', 'nid', 'type'));

    $query
      ->condition('n.title', '%' . db_like($string) . '%', 'LIKE')
      ->condition('n.type', $bundles, 'IN')
      ->condition('n.status', 1);

    $query->distinct();
    $query->groupBy('n.nid');
    $query->range(0, 15);

    drupal_alter('fl_autocomplete_query', $query);

    $result = $query->execute();

    while ($row = $result->fetchAssoc()) {
      $key = $row['title'] . " [" . $row['nid'] . "]";
      $matches[$key] = array(
        'label' => $row['title'],
        'class' => "autocomplete existing " . $row['type'],
      );
    }
  }

  drupal_alter('fl_autocomplete_matches', $matches);

  if ($show_links == 'show') {
    $matches += _futurium_links_create_links($origin, $relation_name, $reverse);
  }
  drupal_json_output($matches);
}

/**
 * Returns content types that can be related to a node.
 */
function _futurium_links_possible_bundles($nid, $relation_type, $reverse = FALSE) {
  $node = node_load($nid);
  $relation = _relation_type_load($relation_type);

  $bundles = array();
  $source_bundles = $relation->source_bundles;
  $target_bundles = $relation->target_bundles;

  $current_bundle = 'node:' . $node->type;
  if ($relation->directional == FALSE) {
    if (in_array($current_bundle, $source_bundles, TRUE)) {
      $bundles = $relation->source_bundles;
      return $bundles;
    }
  }

  if ($reverse) {
    if (in_array($current_bundle, $target_bundles, TRUE)) {
      $bundles = $source_bundles;
    }
  }
  else {
    if (in_array($current_bundle, $source_bundles, TRUE)) {
      $bundles = $target_bundles;
    }
  }
  return $bundles;
}

/**
 * Return links to create content that can be related to a node.
 *
 * To add to autocomplete matches.
 */
function _futurium_links_create_links($nid, $relation_name, $reverse) {
  // Get normal links.
  $content_types[$relation_name] = _futurium_links_possible_bundles($nid, $relation_name, $reverse);

  $links = array();
  foreach ($content_types as $relation_type => $possible_content_types) {
    foreach ($possible_content_types as $value) {
      $value = str_replace('node:', '', $value);
      $value = str_replace("_", "-", $value);
      $relation = _relation_type_load($relation_type);

      $content_type = node_type_get_name($value);
      $path = 'node/add/' . $content_type;
      $path .= '?related_to=' . $nid . '&relation_type=' . $relation_type;

      $relation_label = $relation->label;
      if ($reverse) {
        $relation_label = $relation->reverse_label;
      }

      $label_args = array(
        "@content_type" => $content_type,
        "@relation_label" => $relation_label,
      );
      drupal_alter('fl_autocomplete_label', $label_args);

      $label = t("@relation_label - Create new @content_type", $label_args);
      $links[$path] = array('label' => $label, 'class' => "autocomplete new $value");
    }
  }

  return $links;
}
