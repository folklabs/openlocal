<?php
/**
 * @file
 * openlocal_business.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_business_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node ol_business breadcrumbs.
  $permissions['administer panelizer node ol_business breadcrumbs'] = array(
    'name' => 'administer panelizer node ol_business breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_business content.
  $permissions['administer panelizer node ol_business content'] = array(
    'name' => 'administer panelizer node ol_business content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_business context.
  $permissions['administer panelizer node ol_business context'] = array(
    'name' => 'administer panelizer node ol_business context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_business defaults.
  $permissions['administer panelizer node ol_business defaults'] = array(
    'name' => 'administer panelizer node ol_business defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_business layout.
  $permissions['administer panelizer node ol_business layout'] = array(
    'name' => 'administer panelizer node ol_business layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_business overview.
  $permissions['administer panelizer node ol_business overview'] = array(
    'name' => 'administer panelizer node ol_business overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_business settings.
  $permissions['administer panelizer node ol_business settings'] = array(
    'name' => 'administer panelizer node ol_business settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  return $permissions;
}
