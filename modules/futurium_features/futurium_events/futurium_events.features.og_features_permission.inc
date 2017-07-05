<?php
/**
 * @file
 * futurium_events.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function futurium_events_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:futurium_group:create event content'
  $permissions['node:futurium_group:create event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:delete any event content'
  $permissions['node:futurium_group:delete any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:futurium_group:delete own event content'
  $permissions['node:futurium_group:delete own event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:update any event content'
  $permissions['node:futurium_group:update any event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:update own event content'
  $permissions['node:futurium_group:update own event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  return $permissions;
}
