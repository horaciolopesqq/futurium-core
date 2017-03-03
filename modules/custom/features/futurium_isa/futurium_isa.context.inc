<?php
/**
 * @file
 * futurium_isa.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function futurium_isa_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site-wide';
  $context->description = 'A site-wide context';
  $context->tag = 'ISA';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'collapsible_right',
          'weight' => '-10',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'collapsible_right',
          'weight' => '-10',
        ),
        'views-ideas-footer' => array(
          'module' => 'views',
          'delta' => 'ideas-footer',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'views-events-footer' => array(
          'module' => 'views',
          'delta' => 'events-footer',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'boxes-footer_social_links' => array(
          'module' => 'boxes',
          'delta' => 'footer_social_links',
          'region' => 'footer',
          'weight' => '-7',
        ),
        'lang_dropdown-language' => array(
          'delta' => 'language',
          'module' => 'lang_dropdown',
          'region' => 'collapsible_top_center',
          'weight' => '-45',
        ),
        'search-form' => array(
          'delta' => 'form',
          'module' => 'search',
          'region' => 'collapsible_top_left',
          'weight' => '-44',
        ),
        'futurium_isa_extras-collapsible_toggle' => array(
          'module' => 'futurium_isa_extras',
          'delta' => 'collapsible_toggle',
          'region' => 'collapsible_top_right',
          'weight' => '-43',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('A site-wide context');
  t('ISA');
  $export['site-wide'] = $context;

  return $export;
}
