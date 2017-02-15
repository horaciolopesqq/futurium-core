<?php
/**
 * @file
 * futurium_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function futurium_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration fieldset'] = array(
    'name' => 'access administration fieldset',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'futurium_core',
  );

  return $permissions;
}
