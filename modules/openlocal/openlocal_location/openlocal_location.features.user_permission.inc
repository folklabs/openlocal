<?php
/**
 * @file
 * openlocal_location.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_location_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node ol_location breadcrumbs'.
  $permissions['administer panelizer node ol_location breadcrumbs'] = array(
    'name' => 'administer panelizer node ol_location breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_location content'.
  $permissions['administer panelizer node ol_location content'] = array(
    'name' => 'administer panelizer node ol_location content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_location context'.
  $permissions['administer panelizer node ol_location context'] = array(
    'name' => 'administer panelizer node ol_location context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_location defaults'.
  $permissions['administer panelizer node ol_location defaults'] = array(
    'name' => 'administer panelizer node ol_location defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_location layout'.
  $permissions['administer panelizer node ol_location layout'] = array(
    'name' => 'administer panelizer node ol_location layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_location overview'.
  $permissions['administer panelizer node ol_location overview'] = array(
    'name' => 'administer panelizer node ol_location overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_location settings'.
  $permissions['administer panelizer node ol_location settings'] = array(
    'name' => 'administer panelizer node ol_location settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term ol_location_properties defaults'.
  $permissions['administer panelizer taxonomy_term ol_location_properties defaults'] = array(
    'name' => 'administer panelizer taxonomy_term ol_location_properties defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create ol_location content'.
  $permissions['create ol_location content'] = array(
    'name' => 'create ol_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any ol_location content'.
  $permissions['delete any ol_location content'] = array(
    'name' => 'delete any ol_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ol_location content'.
  $permissions['delete own ol_location content'] = array(
    'name' => 'delete own ol_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in ol_location_properties'.
  $permissions['delete terms in ol_location_properties'] = array(
    'name' => 'delete terms in ol_location_properties',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any ol_location content'.
  $permissions['edit any ol_location content'] = array(
    'name' => 'edit any ol_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own ol_location content'.
  $permissions['edit own ol_location content'] = array(
    'name' => 'edit own ol_location content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in ol_location_properties'.
  $permissions['edit terms in ol_location_properties'] = array(
    'name' => 'edit terms in ol_location_properties',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
