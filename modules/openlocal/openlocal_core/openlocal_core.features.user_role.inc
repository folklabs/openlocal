<?php
/**
 * @file
 * openlocal_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function openlocal_core_user_default_roles() {
  $roles = array();

  // Exported role: site manager.
  $roles['site manager'] = array(
    'name' => 'site manager',
    'weight' => 84,
  );

  return $roles;
}
