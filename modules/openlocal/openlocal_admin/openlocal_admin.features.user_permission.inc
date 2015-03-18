<?php
/**
 * @file
 * openlocal_admin.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_admin_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'flag ol_report_abuse'.
  $permissions['flag ol_report_abuse'] = array(
    'name' => 'flag ol_report_abuse',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag ol_report_abuse'.
  $permissions['unflag ol_report_abuse'] = array(
    'name' => 'unflag ol_report_abuse',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
