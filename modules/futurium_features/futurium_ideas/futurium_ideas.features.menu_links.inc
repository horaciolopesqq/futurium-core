<?php
/**
 * @file
 * futurium_ideas.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function futurium_ideas_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-group-tabs_ideas:menutoken/56a0d5fe018cc.
  $menu_links['menu-group-tabs_ideas:menutoken/56a0d5fe018cc'] = array(
    'menu_name' => 'menu-group-tabs',
    'link_path' => 'menutoken/56a0d5fe018cc',
    'router_path' => 'menutoken/%',
    'link_title' => 'Ideas',
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
      'menu_token_link_path' => 'node/[node:nid]/ideas',
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
      'identifier' => 'menu-group-tabs_ideas:menutoken/56a0d5fe018cc',
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
  // Exported menu link: menu-user-tabs_ideas:menutoken/56a0af8fd08b5.
  $menu_links['menu-user-tabs_ideas:menutoken/56a0af8fd08b5'] = array(
    'menu_name' => 'menu-user-tabs',
    'link_path' => 'menutoken/56a0af8fd08b5',
    'router_path' => 'menutoken/%',
    'link_title' => 'Ideas',
    'options' => array(
      'menu_token_link_path' => 'user/[user:uid]/ideas',
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
      'menu_token_link_uuid' => 'menutoken/56a0af8fd08b5',
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
      'identifier' => 'menu-user-tabs_ideas:menutoken/56a0af8fd08b5',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Ideas');

  return $menu_links;
}
