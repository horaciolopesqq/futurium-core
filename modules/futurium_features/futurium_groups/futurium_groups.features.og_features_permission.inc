<?php
/**
 * @file
 * futurium_groups.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function futurium_groups_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:futurium_group:add user'
  $permissions['node:futurium_group:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:futurium_group:administer group'
  $permissions['node:futurium_group:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:futurium_group:approve and deny subscription'
  $permissions['node:futurium_group:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:futurium_group:manage members'
  $permissions['node:futurium_group:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:futurium_group:manage permissions'
  $permissions['node:futurium_group:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:futurium_group:manage roles'
  $permissions['node:futurium_group:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:futurium_group:subscribe'
  $permissions['node:futurium_group:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:futurium_group:subscribe without approval'
  $permissions['node:futurium_group:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:futurium_group:unsubscribe'
  $permissions['node:futurium_group:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:futurium_group:update group'
  $permissions['node:futurium_group:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  return $permissions;
}
