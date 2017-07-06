<?php
/**
 * @file
 * futurium_stats.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function futurium_stats_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "radioactivity" && $api == "radioactivity_decay_profile") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function futurium_stats_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
