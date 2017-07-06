<?php
/**
 * @file
 * futurium_graphs.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function futurium_graph_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_relation_graph'.
  $field_bases['field_relation_graph'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_relation_graph',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'relation_dummy_field',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'relation',
  );

  return $field_bases;
}
