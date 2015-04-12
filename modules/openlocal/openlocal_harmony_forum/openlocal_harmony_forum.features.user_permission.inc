<?php
/**
 * @file
 * openlocal_harmony_forum.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_harmony_forum_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'show format selection for harmony_post'.
  $permissions['show format selection for harmony_post'] = array(
    'name' => 'show format selection for harmony_post',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for harmony_thread'.
  $permissions['show format selection for harmony_thread'] = array(
    'name' => 'show format selection for harmony_thread',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  return $permissions;
}
