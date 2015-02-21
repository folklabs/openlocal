<?php
/**
 * @file
 * openlocal_business.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function openlocal_business_user_default_roles() {
  $roles = array();

  // Exported role: trader.
  $roles['trader'] = array(
    'name' => 'trader',
    'weight' => 76,
  );

  return $roles;
}
