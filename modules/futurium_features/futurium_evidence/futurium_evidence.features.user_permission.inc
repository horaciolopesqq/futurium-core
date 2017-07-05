<?php
/**
 * @file
 * futurium_evidence.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function futurium_evidence_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create evidence content'.
  $permissions['create evidence content'] = array(
    'name' => 'create evidence content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any evidence content'.
  $permissions['delete any evidence content'] = array(
    'name' => 'delete any evidence content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own evidence content'.
  $permissions['delete own evidence content'] = array(
    'name' => 'delete own evidence content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any evidence content'.
  $permissions['edit any evidence content'] = array(
    'name' => 'edit any evidence content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own evidence content'.
  $permissions['edit own evidence content'] = array(
    'name' => 'edit own evidence content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
