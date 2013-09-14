<?php
/**
 * @file
 * openlocal_campaign.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_campaign_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ol_campaign content'.
  $permissions['create ol_campaign content'] = array(
    'name' => 'create ol_campaign content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any ol_campaign content'.
  $permissions['delete any ol_campaign content'] = array(
    'name' => 'delete any ol_campaign content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ol_campaign content'.
  $permissions['delete own ol_campaign content'] = array(
    'name' => 'delete own ol_campaign content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any ol_campaign content'.
  $permissions['edit any ol_campaign content'] = array(
    'name' => 'edit any ol_campaign content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own ol_campaign content'.
  $permissions['edit own ol_campaign content'] = array(
    'name' => 'edit own ol_campaign content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
