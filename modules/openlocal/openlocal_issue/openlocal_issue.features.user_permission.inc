<?php
/**
 * @file
 * openlocal_issue.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_issue_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ol_issue content'.
  $permissions['create ol_issue content'] = array(
    'name' => 'create ol_issue content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ol_issue content'.
  $permissions['delete any ol_issue content'] = array(
    'name' => 'delete any ol_issue content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ol_issue content'.
  $permissions['delete own ol_issue content'] = array(
    'name' => 'delete own ol_issue content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ol_issue content'.
  $permissions['edit any ol_issue content'] = array(
    'name' => 'edit any ol_issue content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ol_issue content'.
  $permissions['edit own ol_issue content'] = array(
    'name' => 'edit own ol_issue content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
