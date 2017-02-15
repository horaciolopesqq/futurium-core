<?php
/**
 * @file
 * futurium_isa.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function futurium_isa_filter_default_formats() {
  $formats = array();

  // Exported format: Basic HTML.
  $formats['basic_html'] = (object) array(
    'format' => 'basic_html',
    'name' => 'Basic HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -8,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = (object) array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = (object) array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'opengraph_filter' => array(
        'settings' => array(
          'opengraph_filter_num' => 1,
          'opengraph_filter_strip' => 1,
        ),
        'status' => 1,
        'weight' => 1,
      ),
      'filter_tokens' => array(
        'status' => 1,
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

  // Exported format: NoWysiwig.
  $formats['simple_wysiwig'] = (object) array(
    'format' => 'simple_wysiwig',
    'name' => 'Simple Wysiwig',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'opengraph_filter' => array(
        'settings' => array(
          'opengraph_filter_num' => 1,
          'opengraph_filter_strip' => 1,
        ),
        'weight' => 1,
        'status' => 1,
      ),
      'media_filter' => array(
        'status' => 1,
        'weight' => 2,
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Simple Text.
  $formats['simple_text'] = (object) array(
    'format' => 'simple_text',
    'name' => 'Simple Text',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'opengraph_filter' => array(
        'settings' => array(
          'opengraph_filter_num' => 1,
          'opengraph_filter_strip' => 1,
        ),
        'weight' => 1,
        'status' => 1,
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
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
