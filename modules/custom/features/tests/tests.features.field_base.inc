<?php
/**
 * @file
 * tests.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tests_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_activity_index'.
  $field_bases['field_activity_index'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_activity_index',
    'indexes' => array(
      'energy' => array(
        0 => 'radioactivity_energy',
      ),
    ),
    'locked' => 1,
    'module' => 'radioactivity',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'radioactivity',
  );

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

  // Exported field_base: 'field_slideshow_image'.
  $field_bases['field_slideshow_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_slideshow_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 1,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
