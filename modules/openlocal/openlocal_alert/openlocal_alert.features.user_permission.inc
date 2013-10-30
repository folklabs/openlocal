<?php
/**
 * @file
 * openlocal_alert.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_alert_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node ol_alert breadcrumbs.
  $permissions['administer panelizer node ol_alert breadcrumbs'] = array(
    'name' => 'administer panelizer node ol_alert breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_alert content.
  $permissions['administer panelizer node ol_alert content'] = array(
    'name' => 'administer panelizer node ol_alert content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_alert context.
  $permissions['administer panelizer node ol_alert context'] = array(
    'name' => 'administer panelizer node ol_alert context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_alert defaults.
  $permissions['administer panelizer node ol_alert defaults'] = array(
    'name' => 'administer panelizer node ol_alert defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_alert layout.
  $permissions['administer panelizer node ol_alert layout'] = array(
    'name' => 'administer panelizer node ol_alert layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_alert overview.
  $permissions['administer panelizer node ol_alert overview'] = array(
    'name' => 'administer panelizer node ol_alert overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_alert settings.
  $permissions['administer panelizer node ol_alert settings'] = array(
    'name' => 'administer panelizer node ol_alert settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: create ol_alert content.
  $permissions['create ol_alert content'] = array(
    'name' => 'create ol_alert content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any ol_alert content.
  $permissions['delete any ol_alert content'] = array(
    'name' => 'delete any ol_alert content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own ol_alert content.
  $permissions['delete own ol_alert content'] = array(
    'name' => 'delete own ol_alert content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any ol_alert content.
  $permissions['edit any ol_alert content'] = array(
    'name' => 'edit any ol_alert content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own ol_alert content.
  $permissions['edit own ol_alert content'] = array(
    'name' => 'edit own ol_alert content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
