<?php
/**
 * @file
 * futurium_futures.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function futurium_futures_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_futures:futures.
  $menu_links['main-menu_futures:futures'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'futures',
    'router_path' => 'futures',
    'link_title' => 'Futures',
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
      'alter' => TRUE,
      'identifier' => 'main-menu_futures:futures',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-group-tabs_futures:menutoken/56a0d5dea516a.
  $menu_links['menu-group-tabs_futures:menutoken/56a0d5dea516a'] = array(
    'menu_name' => 'menu-group-tabs',
    'link_path' => 'menutoken/56a0d5dea516a',
    'router_path' => 'menutoken/%',
    'link_title' => 'Futures',
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
      'menu_token_link_path' => 'node/[node:nid]/futures',
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
      'identifier' => 'menu-group-tabs_futures:menutoken/56a0d5dea516a',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-user-tabs_futures:menutoken/56a0af768a069.
  $menu_links['menu-user-tabs_futures:menutoken/56a0af768a069'] = array(
    'menu_name' => 'menu-user-tabs',
    'link_path' => 'menutoken/56a0af768a069',
    'router_path' => 'menutoken/%',
    'link_title' => 'Futures',
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
      'menu_token_link_path' => 'user/[user:uid]/futures',
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
      'identifier' => 'menu-user-tabs_futures:menutoken/56a0af768a069',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Futures');

  return $menu_links;
}
