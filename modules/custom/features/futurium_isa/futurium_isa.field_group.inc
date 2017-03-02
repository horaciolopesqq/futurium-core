<?php
/**
 * @file
 * futurium_isa.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function futurium_isa_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account|user|user|form';
  $field_group->group_name = 'group_account';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Account',
    'weight' => '0',
    'children' => array(
      0 => 'field_firstname',
      1 => 'field_lastname',
      2 => 'account',
      4 => 'field_picture',
      3 => 'picture',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-account field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_account|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin|user|user|form';
  $field_group->group_name = 'group_admin';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin',
    'weight' => '3',
    'children' => array(
      0 => 'og_user_node',
      1 => 'field_activity_index',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-admin field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_admin|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buttons|node|event|node_header';
  $field_group->group_name = 'group_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'node_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group-buttons',
    'weight' => '4',
    'children' => array(
      0 => 'flag_attending',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group-buttons',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-buttons field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_buttons|node|event|node_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buttons|node|event|teaser';
  $field_group->group_name = 'group_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group-buttons',
    'weight' => '4',
    'children' => array(
      0 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group-buttons',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-buttons field-group-fieldset',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_buttons|node|event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buttons|node|ideas|node_header';
  $field_group->group_name = 'group_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ideas';
  $field_group->mode = 'node_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group-buttons',
    'weight' => '4',
    'children' => array(
      0 => 'flag_like',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group-buttons',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-buttons field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_buttons|node|ideas|node_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buttons|node|ideas|teaser';
  $field_group->group_name = 'group_buttons';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ideas';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group-buttons',
    'weight' => '4',
    'children' => array(
      0 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group-buttons',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-buttons field-group-fieldset',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_buttons|node|ideas|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_vote_comment|node|event|node_header';
  $field_group->group_name = 'group_date_vote_comment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'node_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper-date-vote-comment',
    'weight' => '2',
    'children' => array(
      0 => 'addressfield_city',
      1 => 'attending',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'wrapper-date-vote-comment',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'wrapper-date-vote-comment',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_date_vote_comment|node|event|node_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_vote_comment|node|event|teaser';
  $field_group->group_name = 'group_date_vote_comment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper-date-vote-comment',
    'weight' => '2',
    'children' => array(
      0 => 'addressfield_city',
      1 => 'attending',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'wrapper-date-vote-comment',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'wrapper-date-vote-comment field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_date_vote_comment|node|event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_vote_comment|node|ideas|node_header';
  $field_group->group_name = 'group_date_vote_comment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ideas';
  $field_group->mode = 'node_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper-date-vote-comment',
    'weight' => '2',
    'children' => array(
      0 => 'like',
      1 => 'comment_count',
      2 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'wrapper-date-vote-comment',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'wrapper-date-vote-comment',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_date_vote_comment|node|ideas|node_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_vote_comment|node|ideas|teaser';
  $field_group->group_name = 'group_date_vote_comment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ideas';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper-date-vote-comment',
    'weight' => '2',
    'children' => array(
      0 => 'like',
      1 => 'comment_count',
      2 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'wrapper-date-vote-comment',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'wrapper-date-vote-comment field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_date_vote_comment|node|ideas|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_content|node|page|form';
  $field_group->group_name = 'group_page_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => 0,
    'children' => array(
      0 => 'title_field',
      1 => 'title',
      2 => 'body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-page-content field-group-tab',
        'required_fields' => TRUE,
      ),
    ),
  );
  $field_groups['group_page_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_metadata|node|page|form';
  $field_group->group_name = 'group_page_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => 10,
    'children' => array(
      0 => 'field_tags',
      1 => 'language',
      2 => 'og_group_ref',
      3 => 'group_content_access',
      4 => 'scheduler_settings',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-page-metadata field-group-tab',
        'required_fields' => TRUE,
      ),
    ),
  );
  $field_groups['group_page_metadata|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|user|user|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_age',
      1 => 'field_biography',
      2 => 'field_birthday',
      3 => 'field_education',
      4 => 'field_gender',
      5 => 'field_location',
      6 => 'field_profession',
      7 => 'field_social_links',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_info|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_settings|user|user|form';
  $field_group->group_name = 'group_settings';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '2',
    'children' => array(
      0 => 'timezone',
      1 => 'contact',
      2 => 'locale',
      3 => 'wysiwyg',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-settings field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_settings|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shortcut_buttons|user|user|user_header';
  $field_group->group_name = 'group_shortcut_buttons';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'user_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Shortcuts',
    'weight' => '3',
    'children' => array(
      0 => 'follow',
      1 => 'edit',
      2 => 'logout',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Shortcuts',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-shortcut-buttons field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_shortcut_buttons|user|user|user_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_fields|user|user|user_header';
  $field_group->group_name = 'group_user_fields';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'user_header';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fields',
    'weight' => '4',
    'children' => array(
      0 => 'field_age',
      1 => 'field_education',
      2 => 'field_gender',
      3 => 'field_profession',
      4 => 'user_city',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Fields',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-user-fields field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_user_fields|user|user|user_header'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_author_date|comment|comment_node_event|default';
  $field_group->group_name = 'group_wrapper_author_date';
  $field_group->entity_type = 'comment';
  $field_group->bundle = 'comment_node_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper-author-date',
    'weight' => '0',
    'children' => array(
      0 => 'post_date',
      1 => 'author',
      2 => 'ds_user_picture',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'wrapper-author-date',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'wrapper-author-date field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_author_date|comment|comment_node_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_author_date|comment|comment_node_ideas|default';
  $field_group->group_name = 'group_wrapper_author_date';
  $field_group->entity_type = 'comment';
  $field_group->bundle = 'comment_node_ideas';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper-author-date',
    'weight' => '0',
    'children' => array(
      0 => 'post_date',
      1 => 'author',
      2 => 'ds_user_picture',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'wrapper-author-date',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'wrapper-author-date field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_author_date|comment|comment_node_ideas|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Account');
  t('Admin');
  t('Content');
  t('Fields');
  t('Metadata');
  t('Personal Information');
  t('Settings');
  t('Shortcuts');
  t('group-buttons');
  t('wrapper-author-date');
  t('wrapper-date-vote-comment');

  return $field_groups;
}
