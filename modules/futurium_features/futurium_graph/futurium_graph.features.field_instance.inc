<?php
/**
 * @file
 * futurium_graphs.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function futurium_graph_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-event-field_relation_graph'.
  $field_instances['node-event-field_relation_graph'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'node_header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relation_graph',
    'label' => 'Relation graph',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'relation_type' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 99,
    ),
  );

  // Exported field_instance: 'node-evidence-field_relation_graph'.
  $field_instances['node-evidence-field_relation_graph'] = array(
    'bundle' => 'evidence',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'node_header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_relation_graph',
    'label' => 'Relation graph',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'relation_type' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-future-field_relation_graph'.
  $field_instances['node-future-field_relation_graph'] = array(
    'bundle' => 'future',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'node_header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_relation_graph',
    'label' => 'Relation graph',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'relation_type' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 99,
    ),
  );

  // Exported field_instance: 'node-ideas-field_relation_graph'.
  $field_instances['node-ideas-field_relation_graph'] = array(
    'bundle' => 'ideas',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'node_header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_relation_graph',
    'label' => 'Relation graph',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'relation_type' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'relation_dummy_field',
      'settings' => array(),
      'type' => 'relation_default',
      'weight' => 99,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Relation graph');

  return $field_instances;
}
