<?php
/**
 * @file
 * futurium_isa.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function futurium_isa_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_52afa37e-4eb5-4d02-bc65-07f0d11e68ee';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1l' => NULL,
      'row1c' => NULL,
      'row1r' => NULL,
      'row2l' => NULL,
      'row2c' => NULL,
      'row2r' => NULL,
      'row3l' => NULL,
      'row3c' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4c' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5c' => NULL,
      'row5r' => NULL,
    ),
    'style' => 'bootstrap_region',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e5c8b57b-54de-42f1-915e-20adff354536';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_edit__panel_context_52afa37e-4eb5-4d02-bc65-07f0d11e68ee';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3a87e70a-53e4-4585-880f-e5ca11ad8a1e';
  $pane->panel = 'row1l';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3a87e70a-53e4-4585-880f-e5ca11ad8a1e';
  $display->content['new-3a87e70a-53e4-4585-880f-e5ca11ad8a1e'] = $pane;
  $display->panels['row1l'][0] = 'new-3a87e70a-53e4-4585-880f-e5ca11ad8a1e';
  $pane = new stdClass();
  $pane->pid = 'new-86523247-cd7f-459b-bc85-ce0059d4b9f3';
  $pane->panel = 'row2l';
  $pane->type = 'form';
  $pane->subtype = 'form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86523247-cd7f-459b-bc85-ce0059d4b9f3';
  $display->content['new-86523247-cd7f-459b-bc85-ce0059d4b9f3'] = $pane;
  $display->panels['row2l'][0] = 'new-86523247-cd7f-459b-bc85-ce0059d4b9f3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_52afa37e-4eb5-4d02-bc65-07f0d11e68ee'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_87bf91fd-f1b6-4de8-a0ca-9e1c21214920';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '1',
          'sm' => '1',
          'md' => '1',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1l' => NULL,
      'row1c' => NULL,
      'row1r' => NULL,
      'row2l' => NULL,
      'row2c' => NULL,
      'row2r' => NULL,
      'row3l' => NULL,
      'row3c' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4c' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5c' => NULL,
      'row5r' => NULL,
    ),
    'style' => 'bootstrap_region',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e51d0f22-be5b-498b-8aaa-1500c9143cf6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_87bf91fd-f1b6-4de8-a0ca-9e1c21214920';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e2a17b2f-8883-4d62-987f-80808f5a286f';
  $pane->panel = 'row1l';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e2a17b2f-8883-4d62-987f-80808f5a286f';
  $display->content['new-e2a17b2f-8883-4d62-987f-80808f5a286f'] = $pane;
  $display->panels['row1l'][0] = 'new-e2a17b2f-8883-4d62-987f-80808f5a286f';
  $pane = new stdClass();
  $pane->pid = 'new-9f192841-096f-45b9-be0d-654fb7a83fed';
  $pane->panel = 'row2l';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 1,
    'no_extras' => 1,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9f192841-096f-45b9-be0d-654fb7a83fed';
  $display->content['new-9f192841-096f-45b9-be0d-654fb7a83fed'] = $pane;
  $display->panels['row2l'][0] = 'new-9f192841-096f-45b9-be0d-654fb7a83fed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_87bf91fd-f1b6-4de8-a0ca-9e1c21214920'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_645c8220-980b-4c7b-b066-e549b2bfe76f';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1l' => NULL,
      'row1r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
      'row3l' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cbe273ed-bc73-488a-8026-38b1f0135929';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_645c8220-980b-4c7b-b066-e549b2bfe76f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a5182cfb-9cbc-4fa7-a619-88f9fac89be9';
  $pane->panel = 'row1l';
  $pane->type = 'term_name';
  $pane->subtype = 'term_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a5182cfb-9cbc-4fa7-a619-88f9fac89be9';
  $display->content['new-a5182cfb-9cbc-4fa7-a619-88f9fac89be9'] = $pane;
  $display->panels['row1l'][0] = 'new-a5182cfb-9cbc-4fa7-a619-88f9fac89be9';
  $pane = new stdClass();
  $pane->pid = 'new-3ca355a0-4bb7-40d4-8d57-7c24f600fa23';
  $pane->panel = 'row2l';
  $pane->type = 'views';
  $pane->subtype = 'futurium_taxonomy_term';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_term_1.tid',
      1 => 'argument_term_1.tid',
    ),
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3ca355a0-4bb7-40d4-8d57-7c24f600fa23';
  $display->content['new-3ca355a0-4bb7-40d4-8d57-7c24f600fa23'] = $pane;
  $display->panels['row2l'][0] = 'new-3ca355a0-4bb7-40d4-8d57-7c24f600fa23';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_645c8220-980b-4c7b-b066-e549b2bfe76f'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_edit__panel_context_673c691d-27fe-45fb-8eaf-f2905dfccbc1';
  $handler->task = 'user_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User Edit',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1l' => NULL,
      'row1r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
      'row3l' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
    'style' => 'bootstrap_region',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e0f1775b-5ece-4587-b7dc-ec84c538b1bb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'user_edit__panel_context_673c691d-27fe-45fb-8eaf-f2905dfccbc1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-84405638-47c2-4501-9c10-84578c5896cd';
  $pane->panel = 'row1l';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '84405638-47c2-4501-9c10-84578c5896cd';
  $display->content['new-84405638-47c2-4501-9c10-84578c5896cd'] = $pane;
  $display->panels['row1l'][0] = 'new-84405638-47c2-4501-9c10-84578c5896cd';
  $pane = new stdClass();
  $pane->pid = 'new-7b8ff226-543d-4f00-be3a-9784b27cc203';
  $pane->panel = 'row2l';
  $pane->type = 'form';
  $pane->subtype = 'form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_user_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7b8ff226-543d-4f00-be3a-9784b27cc203';
  $display->content['new-7b8ff226-543d-4f00-be3a-9784b27cc203'] = $pane;
  $display->panels['row2l'][0] = 'new-7b8ff226-543d-4f00-be3a-9784b27cc203';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-84405638-47c2-4501-9c10-84578c5896cd';
  $handler->conf['display'] = $display;
  $export['user_edit__panel_context_673c691d-27fe-45fb-8eaf-f2905dfccbc1'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_login__panel_context_05a069a3-2629-4c59-bc0a-b163f883436d';
  $handler->task = 'user_login';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1l' => NULL,
      'row1r' => NULL,
      'row2l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '6',
          'lg' => '6',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row2r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '6',
          'lg' => '6',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row3l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '6',
          'lg' => '6',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row3r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '6',
          'lg' => '6',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
    'row2l' => array(
      'style' => 'bootstrap_region',
    ),
    'row2r' => array(
      'style' => 'bootstrap_region',
    ),
    'style' => 'bootstrap_region',
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3r' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Login';
  $display->uuid = '40f92992-80b9-426b-b2d3-632b65a86d23';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'user_login__panel_context_05a069a3-2629-4c59-bc0a-b163f883436d';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fcdd7b42-94fc-418c-863b-cc798d0ce1d3';
  $pane->panel = 'row1l';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Title',
    'title' => '',
    'body' => '<h1>Login</h1>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fcdd7b42-94fc-418c-863b-cc798d0ce1d3';
  $display->content['new-fcdd7b42-94fc-418c-863b-cc798d0ce1d3'] = $pane;
  $display->panels['row1l'][0] = 'new-fcdd7b42-94fc-418c-863b-cc798d0ce1d3';
  $pane = new stdClass();
  $pane->pid = 'new-7aeb8bbd-2bd5-4509-a572-a0fd4ce6e5fc';
  $pane->panel = 'row3l';
  $pane->type = 'user_login_form';
  $pane->subtype = 'user_login_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title_heading' => 'h2',
    'form_build_id' => 'form-R_kL2689ddnYqOBfR7ZpFYLk0yx3ViuISOtFOWJjXSk',
    'form_token' => 'clrqkEnVlknnEcdRZIJFCSJLbB1s_gWn6UGaHCt-ikc',
    'form_id' => 'ctools_user_login_form_content_type_edit_form',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7aeb8bbd-2bd5-4509-a572-a0fd4ce6e5fc';
  $display->content['new-7aeb8bbd-2bd5-4509-a572-a0fd4ce6e5fc'] = $pane;
  $display->panels['row3l'][0] = 'new-7aeb8bbd-2bd5-4509-a572-a0fd4ce6e5fc';
  $pane = new stdClass();
  $pane->pid = 'new-379acceb-6206-4335-9369-5197ef973b05';
  $pane->panel = 'row3r';
  $pane->type = 'block';
  $pane->subtype = 'futurium_isa_extras-contextualized_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '379acceb-6206-4335-9369-5197ef973b05';
  $display->content['new-379acceb-6206-4335-9369-5197ef973b05'] = $pane;
  $display->panels['row3r'][0] = 'new-379acceb-6206-4335-9369-5197ef973b05';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_login__panel_context_05a069a3-2629-4c59-bc0a-b163f883436d'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_password__panel_context_412be436-f62a-4e34-9ffe-b0efddb0802e';
  $handler->task = 'user_password';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1l' => NULL,
      'row1r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
      'row3l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '6',
          'lg' => '6',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row3r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '6',
          'lg' => '6',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3r' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '70c66586-9768-4e16-a4b8-c65f3c148ecc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'user_password__panel_context_412be436-f62a-4e34-9ffe-b0efddb0802e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-08f7a75d-2457-4fe6-92d8-7ecbd7b7694b';
  $pane->panel = 'row1l';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Title',
    'title' => '',
    'body' => '<h1>Request new password</h1>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '08f7a75d-2457-4fe6-92d8-7ecbd7b7694b';
  $display->content['new-08f7a75d-2457-4fe6-92d8-7ecbd7b7694b'] = $pane;
  $display->panels['row1l'][0] = 'new-08f7a75d-2457-4fe6-92d8-7ecbd7b7694b';
  $pane = new stdClass();
  $pane->pid = 'new-c2e93591-8d1a-4915-af70-8ed777c2a035';
  $pane->panel = 'row3l';
  $pane->type = 'user_password_form';
  $pane->subtype = 'user_password_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'form_build_id' => 'form-rhWOsv3xu26HX9xyodCv2rrQh8L40uq_i66lueXoKp4',
    'form_token' => 'EblrB6ERMb0Bl0IWbTdNKipyfC69VZ2tDqUjS4gD72k',
    'form_id' => 'ctools_user_password_form_content_type_edit_form',
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c2e93591-8d1a-4915-af70-8ed777c2a035';
  $display->content['new-c2e93591-8d1a-4915-af70-8ed777c2a035'] = $pane;
  $display->panels['row3l'][0] = 'new-c2e93591-8d1a-4915-af70-8ed777c2a035';
  $pane = new stdClass();
  $pane->pid = 'new-b4b96144-cb06-4d15-8f3c-baf818373e68';
  $pane->panel = 'row3r';
  $pane->type = 'block';
  $pane->subtype = 'futurium_isa_extras-contextualized_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b4b96144-cb06-4d15-8f3c-baf818373e68';
  $display->content['new-b4b96144-cb06-4d15-8f3c-baf818373e68'] = $pane;
  $display->panels['row3r'][0] = 'new-b4b96144-cb06-4d15-8f3c-baf818373e68';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-08f7a75d-2457-4fe6-92d8-7ecbd7b7694b';
  $handler->conf['display'] = $display;
  $export['user_password__panel_context_412be436-f62a-4e34-9ffe-b0efddb0802e'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_register__panel_context_c75f68e8-de39-475d-a58a-09e9a90e3fac';
  $handler->task = 'user_register';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1l' => NULL,
      'row1r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
      'row3l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row3r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
      'row3c' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1c' => NULL,
      'row2c' => NULL,
      'row4c' => NULL,
      'row5c' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3c' => array(
      'style' => 'bootstrap_region',
    ),
    'row3r' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c5a569d1-13b4-444a-ab8c-2b93fca307a0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'user_register__panel_context_c75f68e8-de39-475d-a58a-09e9a90e3fac';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0b0801b7-e1ce-40b7-80cb-3184b2402230';
  $pane->panel = 'row1l';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Title',
    'title' => '',
    'body' => '<h1>Create new account</h1>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0b0801b7-e1ce-40b7-80cb-3184b2402230';
  $display->content['new-0b0801b7-e1ce-40b7-80cb-3184b2402230'] = $pane;
  $display->panels['row1l'][0] = 'new-0b0801b7-e1ce-40b7-80cb-3184b2402230';
  $pane = new stdClass();
  $pane->pid = 'new-557f9a7c-593c-468d-8573-df5c7e61af2a';
  $pane->panel = 'row3c';
  $pane->type = 'user_register_form';
  $pane->subtype = 'user_register_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_heading' => 'h2',
    'form_build_id' => 'form-DSiFfIaHnQVktasmMwt46_42KD5GJ6znw8wjw9Lxh9M',
    'form_token' => 'Xjr4aSjjFBNDpxvoKCgKQQBzsy9BhG2kGuZDmWUzqcQ',
    'form_id' => 'ctools_user_register_form_content_type_edit_form',
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '557f9a7c-593c-468d-8573-df5c7e61af2a';
  $display->content['new-557f9a7c-593c-468d-8573-df5c7e61af2a'] = $pane;
  $display->panels['row3c'][0] = 'new-557f9a7c-593c-468d-8573-df5c7e61af2a';
  $pane = new stdClass();
  $pane->pid = 'new-13a06684-6d90-4185-b5e0-7a7aeaa7b49a';
  $pane->panel = 'row3l';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Why Futurium',
    'title' => 'Why should you use Futurium?',
    'body' => '<ul>
      <li>Reason 1</li>
      <li>Reason 2</li>
      <li>Reason 3</li>
      <li>Reason 4</li>
    </ul>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '13a06684-6d90-4185-b5e0-7a7aeaa7b49a';
  $display->content['new-13a06684-6d90-4185-b5e0-7a7aeaa7b49a'] = $pane;
  $display->panels['row3l'][0] = 'new-13a06684-6d90-4185-b5e0-7a7aeaa7b49a';
  $pane = new stdClass();
  $pane->pid = 'new-ec179e30-2871-44e1-8358-98f09f7ea530';
  $pane->panel = 'row3r';
  $pane->type = 'block';
  $pane->subtype = 'futurium_isa_extras-contextualized_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ec179e30-2871-44e1-8358-98f09f7ea530';
  $display->content['new-ec179e30-2871-44e1-8358-98f09f7ea530'] = $pane;
  $display->panels['row3r'][0] = 'new-ec179e30-2871-44e1-8358-98f09f7ea530';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0b0801b7-e1ce-40b7-80cb-3184b2402230';
  $handler->conf['display'] = $display;
  $export['user_register__panel_context_c75f68e8-de39-475d-a58a-09e9a90e3fac'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_6967673a-0888-4c18-a3f1-3e10c148e311';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Profile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1l' => array(
        'css_id' => '',
        'css_class' => 'nopadding',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1c' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '7',
          'sm' => '7',
          'md' => '7',
          'lg' => '7',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '3',
          'sm' => '3',
          'md' => '3',
          'lg' => '3',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row2c' => NULL,
      'row2r' => NULL,
      'row3l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '8',
          'lg' => '8',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row3c' => NULL,
      'row3r' => array(
        'css_id' => '',
        'css_class' => 'sidebar-right',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row4l' => NULL,
      'row4c' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5c' => NULL,
      'row5r' => NULL,
      'row2l' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
    'row1c' => array(
      'style' => 'bootstrap_region',
    ),
    'row1r' => array(
      'style' => 'bootstrap_region',
    ),
    'row2l' => array(
      'style' => '-1',
    ),
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3r' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%user:name';
  $display->uuid = '69e2cbf7-423b-4507-86a4-70ad4d326738';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'user_view__panel_context_6967673a-0888-4c18-a3f1-3e10c148e311';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-601f3342-db0a-4a44-9a7e-3c40902d9108';
  $pane->panel = 'row1l';
  $pane->type = 'entity_view';
  $pane->subtype = 'user';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'user_header',
    'context' => 'argument_entity_id:user_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '601f3342-db0a-4a44-9a7e-3c40902d9108';
  $display->content['new-601f3342-db0a-4a44-9a7e-3c40902d9108'] = $pane;
  $display->panels['row1l'][0] = 'new-601f3342-db0a-4a44-9a7e-3c40902d9108';
  $pane = new stdClass();
  $pane->pid = 'new-23f5896c-3fd4-4782-8fea-8f2c299ccf8a';
  $pane->panel = 'row2l';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-user-tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '23f5896c-3fd4-4782-8fea-8f2c299ccf8a';
  $display->content['new-23f5896c-3fd4-4782-8fea-8f2c299ccf8a'] = $pane;
  $display->panels['row2l'][0] = 'new-23f5896c-3fd4-4782-8fea-8f2c299ccf8a';
  $pane = new stdClass();
  $pane->pid = 'new-3c88606b-b793-42e0-b4ac-052f533b864f';
  $pane->panel = 'row3l';
  $pane->type = 'views';
  $pane->subtype = 'messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '6',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'context' => array(
      0 => 'argument_entity_id:user_1.uid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3c88606b-b793-42e0-b4ac-052f533b864f';
  $display->content['new-3c88606b-b793-42e0-b4ac-052f533b864f'] = $pane;
  $display->panels['row3l'][0] = 'new-3c88606b-b793-42e0-b4ac-052f533b864f';
  $pane = new stdClass();
  $pane->pid = 'new-aa497721-cd20-4f52-8345-18abbaa09094';
  $pane->panel = 'row3r';
  $pane->type = 'block';
  $pane->subtype = 'pcp-pcp_profile_percent_complete';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Complete your profile.',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'aa497721-cd20-4f52-8345-18abbaa09094';
  $display->content['new-aa497721-cd20-4f52-8345-18abbaa09094'] = $pane;
  $display->panels['row3r'][0] = 'new-aa497721-cd20-4f52-8345-18abbaa09094';
  $pane = new stdClass();
  $pane->pid = 'new-80610619-f609-4514-9541-3269fa489566';
  $pane->panel = 'row3r';
  $pane->type = 'block';
  $pane->subtype = 'futurium_isa_extras-contextualized_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'Links',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '80610619-f609-4514-9541-3269fa489566';
  $display->content['new-80610619-f609-4514-9541-3269fa489566'] = $pane;
  $display->panels['row3r'][1] = 'new-80610619-f609-4514-9541-3269fa489566';
  $pane = new stdClass();
  $pane->pid = 'new-d084d40b-0ebe-414c-babb-a5c7e3cbf1db';
  $pane->panel = 'row3r';
  $pane->type = 'views';
  $pane->subtype = 'people';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:user_1.uid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd084d40b-0ebe-414c-babb-a5c7e3cbf1db';
  $display->content['new-d084d40b-0ebe-414c-babb-a5c7e3cbf1db'] = $pane;
  $display->panels['row3r'][2] = 'new-d084d40b-0ebe-414c-babb-a5c7e3cbf1db';
  $pane = new stdClass();
  $pane->pid = 'new-da65b58b-38bc-4408-9345-bc4f1b4eda43';
  $pane->panel = 'row3r';
  $pane->type = 'views';
  $pane->subtype = 'user_groups';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '6',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:user_1.uid',
    ),
    'override_title' => 1,
    'override_title_text' => 'Groups',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'da65b58b-38bc-4408-9345-bc4f1b4eda43';
  $display->content['new-da65b58b-38bc-4408-9345-bc4f1b4eda43'] = $pane;
  $display->panels['row3r'][3] = 'new-da65b58b-38bc-4408-9345-bc4f1b4eda43';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_6967673a-0888-4c18-a3f1-3e10c148e311'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'users__panel_context_a37b291d-1fd5-44e2-8a91-0f7ec6b47463';
  $handler->task = 'users';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1l' => NULL,
      'row1r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
      'row3l' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Login';
  $display->uuid = '08ed6418-93ee-44e5-817c-2217ae61ca2f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'users__panel_context_a37b291d-1fd5-44e2-8a91-0f7ec6b47463';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['users__panel_context_a37b291d-1fd5-44e2-8a91-0f7ec6b47463'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function futurium_isa_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about';
  $page->task = 'page';
  $page->admin_title = 'About';
  $page->admin_description = '';
  $page->path = 'about';
  $page->access = array(
    'type' => 'none',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about__panel';
  $handler->task = 'page';
  $handler->subtask = 'about';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'row1l' => NULL,
      'row1r' => NULL,
      'row2l' => NULL,
      'row2r' => NULL,
      'row3l' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
    'style' => 'bootstrap_region',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e53db3c8-d04e-492b-b834-b554f52153d0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_about__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-90dcdcea-3b50-4e80-912a-fabe71b27d80';
  $pane->panel = 'row1l';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Page Title',
    'title' => '',
    'body' => '<h1>About Futurium</h1>

  Futurium is the online platform developed by the European Commission to facilitate citizen engagement in policy conversations. It combines the informal character of social networks with the support of evidence data to engage stakeholders in shaping the futures and the policy ideas that matter to them. ',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '90dcdcea-3b50-4e80-912a-fabe71b27d80';
  $display->content['new-90dcdcea-3b50-4e80-912a-fabe71b27d80'] = $pane;
  $display->panels['row1l'][0] = 'new-90dcdcea-3b50-4e80-912a-fabe71b27d80';
  $pane = new stdClass();
  $pane->pid = 'new-631be3c3-320c-4e40-8e60-0fa3a496b522';
  $pane->panel = 'row2l';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Content',
    'title' => '',
    'body' => '<h2>Engagement in policy making</h2><p>The Futurium aims to respond to the growing demand for civic participation in policy matters. Its structured approach to content co-creation and synthesis allows streamlining otherwise complex and expensive processes.&nbsp; Stakeholders use the platform to co-create visions (for instance the future of their city), anticipate possible challenges and opportunities, upload evidence (e.g. references to studies, statistics, etc.) to support their opinions, and propose ideas to their governments.&nbsp;</p><p>The online engagement process can be naturally combined with in-person conversations or brainstorming events. The content generated during the in-person events follows the same Futurium content\'s structure (visions, policies,…) and can therefore be easily integrated into the online platform.</p><p>This facilitates the creation of a viral process to attract more and more stakeholders into the online platform.</p><p>&nbsp;</p><h2 class="StyleHeading214ptAfter6pt">Policy making as a collective intelligence process<o:p></o:p></h2><p>The Futurium is based on the metaphor of "collective brain" (or collective intelligence) according to which stakeholders and policy makers form a social network to co-create policies on the basis of:</p><p>1.&nbsp;&nbsp; &nbsp;The aspirations of the social network, i.e. how participants imagine the future of their town, country, organisation, etc.<br>2.&nbsp;&nbsp; &nbsp;The evidence, stemming from the observation of the real world and elicited through data (e.g. trends, statistics,...).<br>3.&nbsp;&nbsp; &nbsp;The boundary constraints posed by the legal framework, i.e. policies have to comply with the rules and law.<br>4.&nbsp;&nbsp; &nbsp;Other factors reflecting the interest of the stakeholders reflecting their emotional reaction to a particular topic.&nbsp;</p><p>Once adopted and executed, the policies are expected to produce impacts on the real world (on people, economy, environment, etc.), that can in turn be monitored and reflected back into the policy making cycle, thus closing the loop.</p><p>&nbsp;</p><h2 class="StyleHeading214ptAfter6pt">A simple data model<o:p></o:p></h2><p>To facilitate the collaborative process between policymakers and stakeholders, the Futurium frames the co-creation process into small pieces of content corresponding to common policy concepts (visions, challenges, opportunities, policies, impacts,…).</p><p>This is where the platform differs from popular social media: it adds a thin layer of "semantic" structure to the content that can be posted in order to make the conversations clearer and more manageable.</p><p>Thanks to this framed approach, it becomes much easier to draw summaries, provide feedback the stakeholders and make policy making more open and participatory.</p><p>The platform\'s members can co-create (wiki) and vote four different types of content:</p><ul><li><u>Future</u>: a vision of what the world might look like at any given point in time, and the challenges and opportunities associated with it. A member can vote the desirability (similar to the popular "I Like") and likelihood of a future (the probability that it will materialise.</li><li><u>Policy</u>: an action designed to realise a chosen future. A policy may produce an impact and may be more or less plausible (e.g. depending on costs or legal constraints). Both concepts can be voted by the platform\'s members.</li><li><u>Evidence</u>: A reference to a data source used to provide evidence to futures and policy ideas (e.g. a bibliographic link, statistical data,…).</li><li><u>Events</u>: bringing together stakeholders to discuss futures and policy ideas.</li></ul><p>Futurium offers standard tools available in most of the social network (blogs, surveys, etc.), the possibility to manage thematic groups as well as to structure the conversation into a configurable workflow.</p><p>Futurium provides also links to social media and the possibility to integrate data from various sources under the form of \'evidence\'.</p><p>The content can be structured into themes or topics so as to facilitate navigation and search. The use of tags provides full flexibility to organise content.</p><p>The platform\'s owners can select the themes and shape the content in the way they want (e.g. urban mobility, health services, education, etc.).</p><p>The platform offers both stakeholders and policy makers the possibility analyse the content co-created by the members, including the possibility to draw semi-automatic summaries of the content (organised by themes, groups or other variables).</p><p>&nbsp;</p><h2 class="StyleHeading214ptAfter6pt">Community management<o:p></o:p></h2><p>In order to facilitate the engagement and co-creation process, the platform offers a dashboard of tools to community managers, i.e. users with the special role of ensuring a good "housekeeping" of the platform (curating content, resolving potential controversies, removing offensive comments, inviting new users to join, sending messages to group of users, etc.).&nbsp;</p><p>&nbsp;</p><h2 class="StyleHeading214ptAfter6pt">An evolving platform<o:p></o:p></h2><p>The Futurium is an open source project under the ISA (Interoperable Solutions for public Administration) programme.</p><p>It is work in progress. Everyone can contribute to its further improvement or use it freely.&nbsp;&nbsp;</p><p>&nbsp;</p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '631be3c3-320c-4e40-8e60-0fa3a496b522';
  $display->content['new-631be3c3-320c-4e40-8e60-0fa3a496b522'] = $pane;
  $display->panels['row2l'][0] = 'new-631be3c3-320c-4e40-8e60-0fa3a496b522';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_tower';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row1c' => NULL,
      'row1r' => NULL,
      'row2l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '6',
          'lg' => '6',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '3',
          'lg' => '3',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row2c' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '3',
          'lg' => '3',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '6',
          'lg' => '6',
        ),
      ),
      'row2r' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '3',
          'lg' => '3',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'row3l' => NULL,
      'row3c' => NULL,
      'row3r' => NULL,
      'row4l' => NULL,
      'row4c' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5c' => NULL,
      'row5r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row2l' => array(
      'style' => 'bootstrap_region',
    ),
    'row2c' => array(
      'style' => 'bootstrap_region',
    ),
    'row2r' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd0c6c36f-9d6c-443b-9a28-22cf73129995';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7f2447a0-9a1e-4d5c-b20f-43f0f8da7f78';
  $pane->panel = 'row1l';
  $pane->type = 'views';
  $pane->subtype = 'carousel';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7f2447a0-9a1e-4d5c-b20f-43f0f8da7f78';
  $display->content['new-7f2447a0-9a1e-4d5c-b20f-43f0f8da7f78'] = $pane;
  $display->panels['row1l'][0] = 'new-7f2447a0-9a1e-4d5c-b20f-43f0f8da7f78';
  $pane = new stdClass();
  $pane->pid = 'new-67a14805-8e21-485e-aaeb-464180c75f9f';
  $pane->panel = 'row2c';
  $pane->type = 'views';
  $pane->subtype = 'futures';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '67a14805-8e21-485e-aaeb-464180c75f9f';
  $display->content['new-67a14805-8e21-485e-aaeb-464180c75f9f'] = $pane;
  $display->panels['row2c'][0] = 'new-67a14805-8e21-485e-aaeb-464180c75f9f';
  $pane = new stdClass();
  $pane->pid = 'new-eb571c94-187d-4641-be18-43bfd228cb1f';
  $pane->panel = 'row2c';
  $pane->type = 'views';
  $pane->subtype = 'ideas';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '6',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'eb571c94-187d-4641-be18-43bfd228cb1f';
  $display->content['new-eb571c94-187d-4641-be18-43bfd228cb1f'] = $pane;
  $display->panels['row2c'][1] = 'new-eb571c94-187d-4641-be18-43bfd228cb1f';
  $pane = new stdClass();
  $pane->pid = 'new-b7f8fe00-3b1f-443b-b634-c432fd0b6319';
  $pane->panel = 'row2l';
  $pane->type = 'views';
  $pane->subtype = 'homepage';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'view_access',
        'settings' => array(
          'view_instance' => 'homepage:block',
          'view_arguments' => '',
          'label' => 'Homepage - block',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b7f8fe00-3b1f-443b-b634-c432fd0b6319';
  $display->content['new-b7f8fe00-3b1f-443b-b634-c432fd0b6319'] = $pane;
  $display->panels['row2l'][0] = 'new-b7f8fe00-3b1f-443b-b634-c432fd0b6319';
  $pane = new stdClass();
  $pane->pid = 'new-29826a92-d14d-411f-9186-894f62ca82d7';
  $pane->panel = 'row2l';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'view_access',
        'settings' => array(
          'view_instance' => 'homepage:block',
          'view_arguments' => '',
          'label' => 'Homepage - block',
        ),
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'No content.',
    'title' => 'Welcome',
    'body' => '<p>Welcome to your website.</p>',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '29826a92-d14d-411f-9186-894f62ca82d7';
  $display->content['new-29826a92-d14d-411f-9186-894f62ca82d7'] = $pane;
  $display->panels['row2l'][1] = 'new-29826a92-d14d-411f-9186-894f62ca82d7';
  $pane = new stdClass();
  $pane->pid = 'new-96ca7897-3f24-4cd3-84dd-68ad31538432';
  $pane->panel = 'row2r';
  $pane->type = 'views';
  $pane->subtype = 'people';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '4',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '96ca7897-3f24-4cd3-84dd-68ad31538432';
  $display->content['new-96ca7897-3f24-4cd3-84dd-68ad31538432'] = $pane;
  $display->panels['row2r'][0] = 'new-96ca7897-3f24-4cd3-84dd-68ad31538432';
  $pane = new stdClass();
  $pane->pid = 'new-30fa2790-e50d-490d-a6cc-daf31a315b84';
  $pane->panel = 'row2r';
  $pane->type = 'views';
  $pane->subtype = 'events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'override_title' => 1,
    'override_title_text' => 'Events',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '30fa2790-e50d-490d-a6cc-daf31a315b84';
  $display->content['new-30fa2790-e50d-490d-a6cc-daf31a315b84'] = $pane;
  $display->panels['row2r'][1] = 'new-30fa2790-e50d-490d-a6cc-daf31a315b84';
  $pane = new stdClass();
  $pane->pid = 'new-23afba6b-bbb3-4126-9bd8-003e4b5952ce';
  $pane->panel = 'row2r';
  $pane->type = 'views';
  $pane->subtype = 'messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '23afba6b-bbb3-4126-9bd8-003e4b5952ce';
  $display->content['new-23afba6b-bbb3-4126-9bd8-003e4b5952ce'] = $pane;
  $display->panels['row2r'][2] = 'new-23afba6b-bbb3-4126-9bd8-003e4b5952ce';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
