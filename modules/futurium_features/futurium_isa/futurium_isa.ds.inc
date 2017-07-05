<?php
/**
 * @file
 * futurium_isa.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function futurium_isa_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|user_header';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'user_header';
  $ds_fieldsetting->settings = array(
    'name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'wrapper' => 'h1',
      ),
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_user_picture_normal',
    ),
    'field_biography' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'intro',
        ),
      ),
    ),
  );
  $export['user|user|user_header'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function futurium_isa_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|user_header';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'user_header';
  $ds_layout->layout = 'ds_3col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'ds_user_picture',
      ),
      'middle' => array(
        1 => 'follow',
        2 => 'name',
        3 => 'edit',
        4 => 'field_biography',
        5 => 'group_shortcut_buttons',
        6 => 'logout',
      ),
      'right' => array(
        7 => 'group_user_fields',
        8 => 'field_social_links',
        9 => 'field_profession',
        10 => 'field_education',
        11 => 'user_city',
        12 => 'field_gender',
        13 => 'field_age',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'left',
      'follow' => 'middle',
      'name' => 'middle',
      'edit' => 'middle',
      'field_biography' => 'middle',
      'group_shortcut_buttons' => 'middle',
      'logout' => 'middle',
      'group_user_fields' => 'right',
      'field_social_links' => 'right',
      'field_profession' => 'right',
      'field_education' => 'right',
      'user_city' => 'right',
      'field_gender' => 'right',
      'field_age' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 1,
  );
  $export['user|user|user_header'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function futurium_isa_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'node_header';
  $ds_view_mode->label = 'Node Header';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['node_header'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'user_header';
  $ds_view_mode->label = 'User Header';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['user_header'] = $ds_view_mode;

  return $export;
}
