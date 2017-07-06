<?php
/**
 * @file
 * Hooks provided by the Futurium Linker module.
 */

/**
 * hook_relation_label_autocomplete_alter()
 *
 * Allows altering the label in the autocomplete field results.
 */
function hook_relation_label_autocomplete_alter(&$label) {
  // Alter the text shown on the label here.
}

/**
 * hook_relation_content_type_autocomplete_alter().
 *
 * Allows altering the content type name in the autocomplete field results.
 */
function hook_relation_content_type_autocomplete_alter(&$content_type) {
  // You can alter the content type information here.
}

/**
 * hook_futurium_linker_query_alter()
 *
 * Allows altering the query used on the autocomplete text field.
 *
 * @param  Object &$query [description]
 *
 */
function hook_futurium_linker_query_alter(&$query) {
  // Alter the query object.
}

/**
 * hook_futurium_linker_possible_relations()
 *
 * Allows overriding the relations that are possible from an origin node.
 *
 * @param  Object $origin_node         The origin node object
 * @param  Array  &$possible_relations An array with the possible relation objects.
 *
 */
function hook_futurium_linker_possible_relations(&$origin_node, &$possible_relations) {
  // Filter the possible relations here.
}
