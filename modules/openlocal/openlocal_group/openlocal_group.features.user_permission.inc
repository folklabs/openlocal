<?php
/**
 * @file
 * openlocal_group.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_group_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ol_group content'.
  $permissions['create ol_group content'] = array(
    'name' => 'create ol_group content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ol_group_post content'.
  $permissions['create ol_group_post content'] = array(
    'name' => 'create ol_group_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any ol_group content'.
  $permissions['delete any ol_group content'] = array(
    'name' => 'delete any ol_group content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ol_group_post content'.
  $permissions['delete any ol_group_post content'] = array(
    'name' => 'delete any ol_group_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ol_group content'.
  $permissions['delete own ol_group content'] = array(
    'name' => 'delete own ol_group content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ol_group_post content'.
  $permissions['delete own ol_group_post content'] = array(
    'name' => 'delete own ol_group_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any ol_group content'.
  $permissions['edit any ol_group content'] = array(
    'name' => 'edit any ol_group content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ol_group_post content'.
  $permissions['edit any ol_group_post content'] = array(
    'name' => 'edit any ol_group_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own ol_group content'.
  $permissions['edit own ol_group content'] = array(
    'name' => 'edit own ol_group content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ol_group_post content'.
  $permissions['edit own ol_group_post content'] = array(
    'name' => 'edit own ol_group_post content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
