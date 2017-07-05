<?php
/**
 * @file
 * futurium_ideas.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function futurium_ideas_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ideas content'.
  $permissions['create ideas content'] = array(
    'name' => 'create ideas content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ideas content'.
  $permissions['delete any ideas content'] = array(
    'name' => 'delete any ideas content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ideas content'.
  $permissions['delete own ideas content'] = array(
    'name' => 'delete own ideas content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ideas content'.
  $permissions['edit any ideas content'] = array(
    'name' => 'edit any ideas content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ideas content'.
  $permissions['edit own ideas content'] = array(
    'name' => 'edit own ideas content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
