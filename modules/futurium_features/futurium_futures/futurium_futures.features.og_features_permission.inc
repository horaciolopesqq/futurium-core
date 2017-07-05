<?php
/**
 * @file
 * futurium_futures.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function futurium_futures_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:futurium_group:create future content'
  $permissions['node:futurium_group:create future content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:delete any future content'
  $permissions['node:futurium_group:delete any future content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:futurium_group:delete own future content'
  $permissions['node:futurium_group:delete own future content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:update any future content'
  $permissions['node:futurium_group:update any future content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:update own future content'
  $permissions['node:futurium_group:update own future content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  return $permissions;
}
