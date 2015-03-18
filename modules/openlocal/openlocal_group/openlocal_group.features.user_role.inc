<?php
/**
 * @file
 * openlocal_group.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function openlocal_group_user_default_roles() {
  $roles = array();

  // Exported role: group manager.
  $roles['group manager'] = array(
    'name' => 'group manager',
    'weight' => 83,
  );

  return $roles;
}
