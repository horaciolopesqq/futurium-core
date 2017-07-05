<?php
/**
 * @file
 * futurium_groups.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function futurium_groups_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'og',
  );

  // Exported permission: 'create futurium_group content'.
  $permissions['create futurium_group content'] = array(
    'name' => 'create futurium_group content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any futurium_group content'.
  $permissions['delete any futurium_group content'] = array(
    'name' => 'delete any futurium_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own futurium_group content'.
  $permissions['delete own futurium_group content'] = array(
    'name' => 'delete own futurium_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any futurium_group content'.
  $permissions['edit any futurium_group content'] = array(
    'name' => 'edit any futurium_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own futurium_group content'.
  $permissions['edit own futurium_group content'] = array(
    'name' => 'edit own futurium_group content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
