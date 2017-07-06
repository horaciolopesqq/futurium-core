<?php
/**
 * @file
 * futurium_evidence.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function futurium_evidence_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_library:library.
  $menu_links['main-menu:library'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'library',
    'router_path' => 'library',
    'link_title' => 'Library',
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );

  // Exported menu link: menu-user-tabs_evidence:menutoken/56a0afaba577b.
  $menu_links['menu-user-tabs_evidence:menutoken/56a0afaba577b'] = array(
    'menu_name' => 'menu-user-tabs',
    'link_path' => 'menutoken/56a0afaba577b',
    'router_path' => 'menutoken/%',
    'link_title' => 'Evidence',
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
      'menu_token_link_path' => 'user/[user:uid]/evidence',
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
      'identifier' => 'menu-user-tabs_evidence:menutoken/56a0afaba577b',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Evidence');
  t('Library');

  return $menu_links;
}
