<?php
/**
 * @file
 * openlocal_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node ol_gallery breadcrumbs.
  $permissions['administer panelizer node ol_gallery breadcrumbs'] = array(
    'name' => 'administer panelizer node ol_gallery breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_gallery content.
  $permissions['administer panelizer node ol_gallery content'] = array(
    'name' => 'administer panelizer node ol_gallery content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_gallery context.
  $permissions['administer panelizer node ol_gallery context'] = array(
    'name' => 'administer panelizer node ol_gallery context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_gallery defaults.
  $permissions['administer panelizer node ol_gallery defaults'] = array(
    'name' => 'administer panelizer node ol_gallery defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_gallery layout.
  $permissions['administer panelizer node ol_gallery layout'] = array(
    'name' => 'administer panelizer node ol_gallery layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_gallery overview.
  $permissions['administer panelizer node ol_gallery overview'] = array(
    'name' => 'administer panelizer node ol_gallery overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_gallery settings.
  $permissions['administer panelizer node ol_gallery settings'] = array(
    'name' => 'administer panelizer node ol_gallery settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: create ol_gallery content.
  $permissions['create ol_gallery content'] = array(
    'name' => 'create ol_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any ol_gallery content.
  $permissions['delete any ol_gallery content'] = array(
    'name' => 'delete any ol_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own ol_gallery content.
  $permissions['delete own ol_gallery content'] = array(
    'name' => 'delete own ol_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any ol_gallery content.
  $permissions['edit any ol_gallery content'] = array(
    'name' => 'edit any ol_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own ol_gallery content.
  $permissions['edit own ol_gallery content'] = array(
    'name' => 'edit own ol_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
