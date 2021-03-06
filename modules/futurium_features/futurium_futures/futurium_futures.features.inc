<?php
/**
 * @file
 * futurium_futures.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function futurium_futures_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function futurium_futures_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function futurium_futures_node_info() {
  $items = array(
    'future' => array(
      'name' => t('Futures'),
      'base' => 'node_content',
      'description' => t('A future is a policy outcome, with a practical or aspirational nature, like a new school bus route, or 0% unemployment in your town.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
