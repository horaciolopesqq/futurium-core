<?php
/**
 * @file
 * futurium_futures.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function futurium_futures_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create future content'.
  $permissions['create future content'] = array(
    'name' => 'create future content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any future content'.
  $permissions['delete any future content'] = array(
    'name' => 'delete any future content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own future content'.
  $permissions['delete own future content'] = array(
    'name' => 'delete own future content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any future content'.
  $permissions['edit any future content'] = array(
    'name' => 'edit any future content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own future content'.
  $permissions['edit own future content'] = array(
    'name' => 'edit own future content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
