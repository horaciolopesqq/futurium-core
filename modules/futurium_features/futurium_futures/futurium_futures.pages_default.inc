<?php
/**
 * @file
 * futurium_futures.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function futurium_futures_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'futures';
  $page->task = 'page';
  $page->admin_title = 'Futures';
  $page->admin_description = '';
  $page->path = 'futures';
  $page->access = array(
    'type' => 'none',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Futures',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_futures__panel';
  $handler->task = 'page';
  $handler->subtask = 'futures';
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
    'row1l' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f8978758-5432-4cbe-9a3d-6feb56892361';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_futures__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-effa04b7-1c87-4f3d-bd6d-2fc3331cd13c';
  $pane->panel = 'row1l';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Intro Text',
    'title' => '',
    'body' => '<h1>Share your vision of what the world might look like</h1><div class="intro">Click on the button to create a future that you desire. A future is a policy outcome, with a practical or aspirational nature, like a new school bus route, or 0% unemployment in your town.</div>',
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
  $pane->uuid = 'effa04b7-1c87-4f3d-bd6d-2fc3331cd13c';
  $display->content['new-effa04b7-1c87-4f3d-bd6d-2fc3331cd13c'] = $pane;
  $display->panels['row1l'][0] = 'new-effa04b7-1c87-4f3d-bd6d-2fc3331cd13c';
  $pane = new stdClass();
  $pane->pid = 'new-ebe8fa1b-53a6-4faf-98b9-0e2bacdf2c91';
  $pane->panel = 'row1l';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'admin_title' => 'Add Future CTA',
    'title' => '',
    'body' => '<a class="btn btn-special btn-add-content" href="node/add/future">Add a Future</a>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ebe8fa1b-53a6-4faf-98b9-0e2bacdf2c91';
  $display->content['new-ebe8fa1b-53a6-4faf-98b9-0e2bacdf2c91'] = $pane;
  $display->panels['row1l'][1] = 'new-ebe8fa1b-53a6-4faf-98b9-0e2bacdf2c91';
  $pane = new stdClass();
  $pane->pid = 'new-b78760ba-db75-4636-b9cf-2448e9ec0507';
  $pane->panel = 'row2l';
  $pane->type = 'views';
  $pane->subtype = 'futures';
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
    'display' => 'all_futures',
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
  $pane->uuid = 'b78760ba-db75-4636-b9cf-2448e9ec0507';
  $display->content['new-b78760ba-db75-4636-b9cf-2448e9ec0507'] = $pane;
  $display->panels['row2l'][0] = 'new-b78760ba-db75-4636-b9cf-2448e9ec0507';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-effa04b7-1c87-4f3d-bd6d-2fc3331cd13c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['futures'] = $page;

  return $pages;

}
