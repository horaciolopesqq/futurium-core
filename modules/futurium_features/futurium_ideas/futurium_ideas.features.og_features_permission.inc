<?php
/**
 * @file
 * futurium_ideas.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function futurium_ideas_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:futurium_group:create ideas content'
  $permissions['node:futurium_group:create ideas content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:delete any ideas content'
  $permissions['node:futurium_group:delete any ideas content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:futurium_group:delete own ideas content'
  $permissions['node:futurium_group:delete own ideas content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:update any ideas content'
  $permissions['node:futurium_group:update any ideas content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:update own ideas content'
  $permissions['node:futurium_group:update own ideas content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  return $permissions;
}
