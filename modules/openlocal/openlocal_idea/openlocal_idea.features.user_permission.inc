<?php
/**
 * @file
 * openlocal_idea.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_idea_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node ol_idea defaults.
  $permissions['administer panelizer node ol_idea defaults'] = array(
    'name' => 'administer panelizer node ol_idea defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: create ol_idea content.
  $permissions['create ol_idea content'] = array(
    'name' => 'create ol_idea content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any ol_idea content.
  $permissions['delete any ol_idea content'] = array(
    'name' => 'delete any ol_idea content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own ol_idea content.
  $permissions['delete own ol_idea content'] = array(
    'name' => 'delete own ol_idea content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any ol_idea content.
  $permissions['edit any ol_idea content'] = array(
    'name' => 'edit any ol_idea content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own ol_idea content.
  $permissions['edit own ol_idea content'] = array(
    'name' => 'edit own ol_idea content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
