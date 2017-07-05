<?php
/**
 * @file
 * futurium_ideas.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function futurium_ideas_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ideas|node_header';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ideas';
  $ds_fieldsetting->view_mode = 'node_header';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'date',
        ),
      ),
    ),
    'field_ideas' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'intro',
        ),
      ),
    ),
  );
  $export['node|ideas|node_header'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ideas|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ideas';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'node_link' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'more-link',
        ),
      ),
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'date',
        ),
      ),
    ),
    'field_ideas' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'intro',
        ),
      ),
    ),
  );
  $export['node|ideas|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function futurium_ideas_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ideas|node_header';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ideas';
  $ds_layout->view_mode = 'node_header';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'author',
        2 => 'group_date_vote_comment',
        3 => 'field_ideas',
        4 => 'flag_like',
        5 => 'group_buttons',
        6 => 'post_date',
        7 => 'like',
        8 => 'comment_count',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'author' => 'ds_content',
      'group_date_vote_comment' => 'ds_content',
      'field_ideas' => 'ds_content',
      'flag_like' => 'ds_content',
      'group_buttons' => 'ds_content',
      'post_date' => 'ds_content',
      'like' => 'ds_content',
      'comment_count' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ideas|node_header'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ideas|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ideas';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'author',
        2 => 'group_date_vote_comment',
        3 => 'field_ideas',
        4 => 'group_buttons',
        5 => 'node_link',
        6 => 'post_date',
        7 => 'like',
        8 => 'comment_count',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'author' => 'ds_content',
      'group_date_vote_comment' => 'ds_content',
      'field_ideas' => 'ds_content',
      'group_buttons' => 'ds_content',
      'node_link' => 'ds_content',
      'post_date' => 'ds_content',
      'like' => 'ds_content',
      'comment_count' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ideas|teaser'] = $ds_layout;

  return $export;
}
