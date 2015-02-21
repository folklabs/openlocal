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

  // Exported permission: 'administer panelizer node ol_gallery breadcrumbs'.
  $permissions['administer panelizer node ol_gallery breadcrumbs'] = array(
    'name' => 'administer panelizer node ol_gallery breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_gallery content'.
  $permissions['administer panelizer node ol_gallery content'] = array(
    'name' => 'administer panelizer node ol_gallery content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_gallery context'.
  $permissions['administer panelizer node ol_gallery context'] = array(
    'name' => 'administer panelizer node ol_gallery context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_gallery defaults'.
  $permissions['administer panelizer node ol_gallery defaults'] = array(
    'name' => 'administer panelizer node ol_gallery defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_gallery layout'.
  $permissions['administer panelizer node ol_gallery layout'] = array(
    'name' => 'administer panelizer node ol_gallery layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_gallery overview'.
  $permissions['administer panelizer node ol_gallery overview'] = array(
    'name' => 'administer panelizer node ol_gallery overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_gallery settings'.
  $permissions['administer panelizer node ol_gallery settings'] = array(
    'name' => 'administer panelizer node ol_gallery settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_photo_album breadcrumbs'.
  $permissions['administer panelizer node ol_photo_album breadcrumbs'] = array(
    'name' => 'administer panelizer node ol_photo_album breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_photo_album content'.
  $permissions['administer panelizer node ol_photo_album content'] = array(
    'name' => 'administer panelizer node ol_photo_album content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_photo_album context'.
  $permissions['administer panelizer node ol_photo_album context'] = array(
    'name' => 'administer panelizer node ol_photo_album context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_photo_album defaults'.
  $permissions['administer panelizer node ol_photo_album defaults'] = array(
    'name' => 'administer panelizer node ol_photo_album defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_photo_album layout'.
  $permissions['administer panelizer node ol_photo_album layout'] = array(
    'name' => 'administer panelizer node ol_photo_album layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_photo_album overview'.
  $permissions['administer panelizer node ol_photo_album overview'] = array(
    'name' => 'administer panelizer node ol_photo_album overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_photo_album settings'.
  $permissions['administer panelizer node ol_photo_album settings'] = array(
    'name' => 'administer panelizer node ol_photo_album settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create ol_gallery content'.
  $permissions['create ol_gallery content'] = array(
    'name' => 'create ol_gallery content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ol_photo_album content'.
  $permissions['create ol_photo_album content'] = array(
    'name' => 'create ol_photo_album content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ol_gallery content'.
  $permissions['delete any ol_gallery content'] = array(
    'name' => 'delete any ol_gallery content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ol_photo_album content'.
  $permissions['delete any ol_photo_album content'] = array(
    'name' => 'delete any ol_photo_album content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ol_gallery content'.
  $permissions['delete own ol_gallery content'] = array(
    'name' => 'delete own ol_gallery content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ol_photo_album content'.
  $permissions['delete own ol_photo_album content'] = array(
    'name' => 'delete own ol_photo_album content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ol_gallery content'.
  $permissions['edit any ol_gallery content'] = array(
    'name' => 'edit any ol_gallery content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ol_photo_album content'.
  $permissions['edit any ol_photo_album content'] = array(
    'name' => 'edit any ol_photo_album content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ol_gallery content'.
  $permissions['edit own ol_gallery content'] = array(
    'name' => 'edit own ol_gallery content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ol_photo_album content'.
  $permissions['edit own ol_photo_album content'] = array(
    'name' => 'edit own ol_photo_album content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
