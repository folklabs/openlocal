<?php
/**
 * @file
 * openlocal_event.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_event_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node ol_event content'.
  $permissions['administer panelizer node ol_event content'] = array(
    'name' => 'administer panelizer node ol_event content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_event context'.
  $permissions['administer panelizer node ol_event context'] = array(
    'name' => 'administer panelizer node ol_event context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_event defaults'.
  $permissions['administer panelizer node ol_event defaults'] = array(
    'name' => 'administer panelizer node ol_event defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_event layout'.
  $permissions['administer panelizer node ol_event layout'] = array(
    'name' => 'administer panelizer node ol_event layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_event overview'.
  $permissions['administer panelizer node ol_event overview'] = array(
    'name' => 'administer panelizer node ol_event overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_event settings'.
  $permissions['administer panelizer node ol_event settings'] = array(
    'name' => 'administer panelizer node ol_event settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term ol_events defaults'.
  $permissions['administer panelizer taxonomy_term ol_events defaults'] = array(
    'name' => 'administer panelizer taxonomy_term ol_events defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create ol_event content'.
  $permissions['create ol_event content'] = array(
    'name' => 'create ol_event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ol_event content'.
  $permissions['delete any ol_event content'] = array(
    'name' => 'delete any ol_event content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ol_event content'.
  $permissions['delete own ol_event content'] = array(
    'name' => 'delete own ol_event content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ol_event content'.
  $permissions['edit any ol_event content'] = array(
    'name' => 'edit any ol_event content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ol_event content'.
  $permissions['edit own ol_event content'] = array(
    'name' => 'edit own ol_event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view date repeats'.
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
    ),
    'module' => 'date_repeat_field',
  );

  return $permissions;
}
