<?php
/**
 * @file
 * openlocal_reward_scheme.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function openlocal_reward_scheme_defaultconfig_features() {
  return array(
    'openlocal_reward_scheme' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function openlocal_reward_scheme_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ol_reward_scheme content'.
  $permissions['create ol_reward_scheme content'] = array(
    'name' => 'create ol_reward_scheme content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ol_reward_scheme content'.
  $permissions['delete any ol_reward_scheme content'] = array(
    'name' => 'delete any ol_reward_scheme content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ol_reward_scheme content'.
  $permissions['delete own ol_reward_scheme content'] = array(
    'name' => 'delete own ol_reward_scheme content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ol_reward_scheme content'.
  $permissions['edit any ol_reward_scheme content'] = array(
    'name' => 'edit any ol_reward_scheme content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ol_reward_scheme content'.
  $permissions['edit own ol_reward_scheme content'] = array(
    'name' => 'edit own ol_reward_scheme content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
