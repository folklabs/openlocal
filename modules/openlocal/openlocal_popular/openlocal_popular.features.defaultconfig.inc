<?php
/**
 * @file
 * openlocal_popular.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function openlocal_popular_defaultconfig_features() {
  return array(
    'openlocal_popular' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function openlocal_popular_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer radioactivity'.
  $permissions['administer radioactivity'] = array(
    'name' => 'administer radioactivity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'radioactivity',
  );

  // Exported permission: 'edit radioactivity'.
  $permissions['edit radioactivity'] = array(
    'name' => 'edit radioactivity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'radioactivity',
  );

  return $permissions;
}
