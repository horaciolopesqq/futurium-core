<?php
/**
 * @file
 * futurium_ideas.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function futurium_ideas_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_e16f8265-fa36-4899-bcd3-795a9bcd2f39';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Idea',
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
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ideas' => 'ideas',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
      'row1r' => array(
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
      'row2l' => array(
        'css_id' => '',
        'css_class' => 'panel-content',
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
      'row2r' => array(
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
      'row3l' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '8',
          'sm' => '8',
          'md' => '8',
          'lg' => '8',
        ),
        'offset' => array(
          'xs' => '2',
          'sm' => '2',
          'md' => '2',
          'lg' => '2',
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
      'row3r' => NULL,
      'row4l' => NULL,
      'row4r' => NULL,
      'row5l' => NULL,
      'row5r' => NULL,
    ),
    'style' => 'bootstrap_region',
    'row2r' => array(
      'style' => 'bootstrap_region',
    ),
    'row2l' => array(
      'style' => 'bootstrap_region',
    ),
    'row3l' => array(
      'style' => 'bootstrap_region',
    ),
    'row1r' => array(
      'style' => 'bootstrap_region',
    ),
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7abc777f-cef6-43cf-ad18-be534f15b087';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_e16f8265-fa36-4899-bcd3-795a9bcd2f39';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3b2b83dd-adfb-481e-b79c-9e4c7bf269cf';
  $pane->panel = 'row1l';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 1,
    'build_mode' => 'node_header',
    'context' => 'argument_entity_id:node_1',
    'override_title_heading' => 'h1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3b2b83dd-adfb-481e-b79c-9e4c7bf269cf';
  $display->content['new-3b2b83dd-adfb-481e-b79c-9e4c7bf269cf'] = $pane;
  $display->panels['row1l'][0] = 'new-3b2b83dd-adfb-481e-b79c-9e4c7bf269cf';
  $pane = new stdClass();
  $pane->pid = 'new-bd52807f-f997-4a4f-ba89-ec4ee86a018b';
  $pane->panel = 'row1r';
  $pane->type = 'rate_widget';
  $pane->subtype = 'rate_widget';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => '1',
    'widget_name' => '3',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Impact',
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
  $pane->uuid = 'bd52807f-f997-4a4f-ba89-ec4ee86a018b';
  $display->content['new-bd52807f-f997-4a4f-ba89-ec4ee86a018b'] = $pane;
  $display->panels['row1r'][0] = 'new-bd52807f-f997-4a4f-ba89-ec4ee86a018b';
  $pane = new stdClass();
  $pane->pid = 'new-dd7c53fc-a2b9-40bf-ac1a-4617db1871cf';
  $pane->panel = 'row1r';
  $pane->type = 'rate_widget';
  $pane->subtype = 'rate_widget';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => '1',
    'widget_name' => '2',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Feasibility',
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
  $pane->uuid = 'dd7c53fc-a2b9-40bf-ac1a-4617db1871cf';
  $display->content['new-dd7c53fc-a2b9-40bf-ac1a-4617db1871cf'] = $pane;
  $display->panels['row1r'][1] = 'new-dd7c53fc-a2b9-40bf-ac1a-4617db1871cf';
  $pane = new stdClass();
  $pane->pid = 'new-8dc41bbb-7faa-4476-843e-5f977a854684';
  $pane->panel = 'row1r';
  $pane->type = 'block';
  $pane->subtype = 'futurium_isa_extras-node_social_share';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8dc41bbb-7faa-4476-843e-5f977a854684';
  $display->content['new-8dc41bbb-7faa-4476-843e-5f977a854684'] = $pane;
  $display->panels['row1r'][2] = 'new-8dc41bbb-7faa-4476-843e-5f977a854684';
  $pane = new stdClass();
  $pane->pid = 'new-314906e9-78f5-46eb-a69c-54aeb6fb63c4';
  $pane->panel = 'row2l';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_impact_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Impact',
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
  $pane->uuid = '314906e9-78f5-46eb-a69c-54aeb6fb63c4';
  $display->content['new-314906e9-78f5-46eb-a69c-54aeb6fb63c4'] = $pane;
  $display->panels['row2l'][0] = 'new-314906e9-78f5-46eb-a69c-54aeb6fb63c4';
  $pane = new stdClass();
  $pane->pid = 'new-83f666bc-4e94-425d-90bd-3e893ee439dc';
  $pane->panel = 'row2l';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_feasibility_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Feasibility',
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
  $pane->uuid = '83f666bc-4e94-425d-90bd-3e893ee439dc';
  $display->content['new-83f666bc-4e94-425d-90bd-3e893ee439dc'] = $pane;
  $display->panels['row2l'][1] = 'new-83f666bc-4e94-425d-90bd-3e893ee439dc';
  $pane = new stdClass();
  $pane->pid = 'new-d8a33c89-d231-461c-a7a6-dc1a5eb3a858';
  $pane->panel = 'row2l';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Tags:',
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
  $pane->uuid = 'd8a33c89-d231-461c-a7a6-dc1a5eb3a858';
  $display->content['new-d8a33c89-d231-461c-a7a6-dc1a5eb3a858'] = $pane;
  $display->panels['row2l'][2] = 'new-d8a33c89-d231-461c-a7a6-dc1a5eb3a858';
  $pane = new stdClass();
  $pane->pid = 'new-99396859-4ddf-41d8-a8ef-d0472fa507ea';
  $pane->panel = 'row2l';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '0',
    'comments_per_page' => '10',
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '99396859-4ddf-41d8-a8ef-d0472fa507ea';
  $display->content['new-99396859-4ddf-41d8-a8ef-d0472fa507ea'] = $pane;
  $display->panels['row2l'][3] = 'new-99396859-4ddf-41d8-a8ef-d0472fa507ea';
  $pane = new stdClass();
  $pane->pid = 'new-187e3f2c-a257-4459-953b-ed3da549df42';
  $pane->panel = 'row2l';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 1,
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '187e3f2c-a257-4459-953b-ed3da549df42';
  $display->content['new-187e3f2c-a257-4459-953b-ed3da549df42'] = $pane;
  $display->panels['row2l'][4] = 'new-187e3f2c-a257-4459-953b-ed3da549df42';
  $pane = new stdClass();
  $pane->pid = 'new-aeabe19c-d13c-4013-951e-31484323427f';
  $pane->panel = 'row2r';
  $pane->type = 'block';
  $pane->subtype = 'futurium_linker-relation_link_add';
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
  $pane->uuid = 'aeabe19c-d13c-4013-951e-31484323427f';
  $display->content['new-aeabe19c-d13c-4013-951e-31484323427f'] = $pane;
  $display->panels['row2r'][0] = 'new-aeabe19c-d13c-4013-951e-31484323427f';
  $pane = new stdClass();
  $pane->pid = 'new-a7d56f8e-75bb-4eb2-a691-9a42f8f59e1e';
  $pane->panel = 'row2r';
  $pane->type = 'views';
  $pane->subtype = 'node_relations';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '3',
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
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => 'Implemented on',
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
  $pane->uuid = 'a7d56f8e-75bb-4eb2-a691-9a42f8f59e1e';
  $display->content['new-a7d56f8e-75bb-4eb2-a691-9a42f8f59e1e'] = $pane;
  $display->panels['row2r'][1] = 'new-a7d56f8e-75bb-4eb2-a691-9a42f8f59e1e';
  $pane = new stdClass();
  $pane->pid = 'new-43f7212b-8d83-4f08-b2ec-ef45916a24d8';
  $pane->panel = 'row2r';
  $pane->type = 'views';
  $pane->subtype = 'node_relations';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'support',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => 'Supported by',
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
  $pane->uuid = '43f7212b-8d83-4f08-b2ec-ef45916a24d8';
  $display->content['new-43f7212b-8d83-4f08-b2ec-ef45916a24d8'] = $pane;
  $display->panels['row2r'][2] = 'new-43f7212b-8d83-4f08-b2ec-ef45916a24d8';
  $pane = new stdClass();
  $pane->pid = 'new-160d24eb-9228-4cdf-9359-25d0e2442d7c';
  $pane->panel = 'row2r';
  $pane->type = 'views';
  $pane->subtype = 'node_relations';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
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
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => 'To be discussed at',
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
  $pane->uuid = '160d24eb-9228-4cdf-9359-25d0e2442d7c';
  $display->content['new-160d24eb-9228-4cdf-9359-25d0e2442d7c'] = $pane;
  $display->panels['row2r'][3] = 'new-160d24eb-9228-4cdf-9359-25d0e2442d7c';
  $pane = new stdClass();
  $pane->pid = 'new-3da66e67-0749-4370-89e6-7b06d9f06fef';
  $pane->panel = 'row2r';
  $pane->type = 'views';
  $pane->subtype = 'revisions';
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
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => 'Contributors',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '3da66e67-0749-4370-89e6-7b06d9f06fef';
  $display->content['new-3da66e67-0749-4370-89e6-7b06d9f06fef'] = $pane;
  $display->panels['row2r'][4] = 'new-3da66e67-0749-4370-89e6-7b06d9f06fef';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_e16f8265-fa36-4899-bcd3-795a9bcd2f39'] = $handler;

  return $export;
}
