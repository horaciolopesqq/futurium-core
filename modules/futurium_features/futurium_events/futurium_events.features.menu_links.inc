<?php
/**
 * @file
 * futurium_events.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function futurium_events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-group-tabs_events:menutoken/58a5b9b1bed6e.
  $menu_links['menu-group-tabs_events:menutoken/58a5b9b1bed6e'] = array(
    'menu_name' => 'menu-group-tabs',
    'link_path' => 'menutoken/58a5b9b1bed6e',
    'router_path' => 'menutoken/%',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'menu_token_link_path' => 'node/[node:nid]/events',
      'menu_token_data' => array(
        'node' => array(
          'type' => 'node',
          'plugin' => 'node_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-group-tabs_events:menutoken/58a5b9b1bed6e',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-user-tabs_events:menutoken/56a0afd911c8f.
  $menu_links['menu-user-tabs_events:menutoken/56a0afd911c8f'] = array(
    'menu_name' => 'menu-user-tabs',
    'link_path' => 'menutoken/56a0afd911c8f',
    'router_path' => 'menutoken/%',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'menu_token_link_path' => 'user/[user:uid]/events',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-user-tabs_events:menutoken/56a0afd911c8f',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');

  return $menu_links;
}
