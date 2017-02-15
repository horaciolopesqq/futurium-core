<?php
/**
 * @file
 * futurium_messages.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function futurium_messages_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['messages_html'] = (object) array(
    'format' => 'messages_html',
    'name' => 'Messages HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_tokens' => array(
        'status' => 0,
        'weight' => 0,
      ),
      'filter_url' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
