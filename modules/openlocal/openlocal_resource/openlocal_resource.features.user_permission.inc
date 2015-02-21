<?php
/**
 * @file
 * openlocal_resource.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_resource_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node ol_resource defaults'.
  $permissions['administer panelizer node ol_resource defaults'] = array(
    'name' => 'administer panelizer node ol_resource defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term ol_resources defaults'.
  $permissions['administer panelizer taxonomy_term ol_resources defaults'] = array(
    'name' => 'administer panelizer taxonomy_term ol_resources defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create ol_resource content'.
  $permissions['create ol_resource content'] = array(
    'name' => 'create ol_resource content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ol_resource content'.
  $permissions['delete any ol_resource content'] = array(
    'name' => 'delete any ol_resource content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ol_resource content'.
  $permissions['delete own ol_resource content'] = array(
    'name' => 'delete own ol_resource content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in ol_places'.
  $permissions['delete terms in ol_places'] = array(
    'name' => 'delete terms in ol_places',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any ol_resource content'.
  $permissions['edit any ol_resource content'] = array(
    'name' => 'edit any ol_resource content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ol_resource content'.
  $permissions['edit own ol_resource content'] = array(
    'name' => 'edit own ol_resource content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in ol_places'.
  $permissions['edit terms in ol_places'] = array(
    'name' => 'edit terms in ol_places',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
