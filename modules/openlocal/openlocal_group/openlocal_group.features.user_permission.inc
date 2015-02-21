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

  // Exported permission: 'administer panelizer node ol_group breadcrumbs'.
  $permissions['administer panelizer node ol_group breadcrumbs'] = array(
    'name' => 'administer panelizer node ol_group breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_group content'.
  $permissions['administer panelizer node ol_group content'] = array(
    'name' => 'administer panelizer node ol_group content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_group context'.
  $permissions['administer panelizer node ol_group context'] = array(
    'name' => 'administer panelizer node ol_group context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_group defaults'.
  $permissions['administer panelizer node ol_group defaults'] = array(
    'name' => 'administer panelizer node ol_group defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_group layout'.
  $permissions['administer panelizer node ol_group layout'] = array(
    'name' => 'administer panelizer node ol_group layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_group overview'.
  $permissions['administer panelizer node ol_group overview'] = array(
    'name' => 'administer panelizer node ol_group overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_group settings'.
  $permissions['administer panelizer node ol_group settings'] = array(
    'name' => 'administer panelizer node ol_group settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_group_post breadcrumbs'.
  $permissions['administer panelizer node ol_group_post breadcrumbs'] = array(
    'name' => 'administer panelizer node ol_group_post breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_group_post content'.
  $permissions['administer panelizer node ol_group_post content'] = array(
    'name' => 'administer panelizer node ol_group_post content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_group_post context'.
  $permissions['administer panelizer node ol_group_post context'] = array(
    'name' => 'administer panelizer node ol_group_post context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_group_post defaults'.
  $permissions['administer panelizer node ol_group_post defaults'] = array(
    'name' => 'administer panelizer node ol_group_post defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_group_post layout'.
  $permissions['administer panelizer node ol_group_post layout'] = array(
    'name' => 'administer panelizer node ol_group_post layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_group_post overview'.
  $permissions['administer panelizer node ol_group_post overview'] = array(
    'name' => 'administer panelizer node ol_group_post overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_group_post settings'.
  $permissions['administer panelizer node ol_group_post settings'] = array(
    'name' => 'administer panelizer node ol_group_post settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

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
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
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
    'roles' => array(
      'editor' => 'editor',
    ),
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
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in ol_issue_type'.
  $permissions['delete terms in ol_issue_type'] = array(
    'name' => 'delete terms in ol_issue_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
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
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ol_group content'.
  $permissions['edit own ol_group content'] = array(
    'name' => 'edit own ol_group content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ol_group_post content'.
  $permissions['edit own ol_group_post content'] = array(
    'name' => 'edit own ol_group_post content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in ol_issue_type'.
  $permissions['edit terms in ol_issue_type'] = array(
    'name' => 'edit terms in ol_issue_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
