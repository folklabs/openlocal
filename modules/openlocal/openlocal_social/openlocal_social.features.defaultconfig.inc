<?php
/**
 * @file
 * openlocal_social.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function openlocal_social_defaultconfig_features() {
  return array(
    'openlocal_social' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function openlocal_social_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access forward'.
  $permissions['access forward'] = array(
    'name' => 'access forward',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'forward',
  );

  return $permissions;
}
