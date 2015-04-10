<?php
/**
 * @file
 * openlocal_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'save draft'.
  $permissions['save draft'] = array(
    'name' => 'save draft',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'site manager' => 'site manager',
    ),
    'module' => 'save_draft',
  );

  return $permissions;
}
