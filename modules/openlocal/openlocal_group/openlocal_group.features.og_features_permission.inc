<?php
/**
 * @file
 * openlocal_group.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function openlocal_group_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:ol_group:add user'
  $permissions['node:ol_group:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:ol_group:administer group'
  $permissions['node:ol_group:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:ol_group:approve and deny subscription'
  $permissions['node:ol_group:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:ol_group:create ol_event content'
  $permissions['node:ol_group:create ol_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ol_group:create ol_gallery content'
  $permissions['node:ol_group:create ol_gallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ol_group:create ol_group_post content'
  $permissions['node:ol_group:create ol_group_post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ol_group:delete any ol_event content'
  $permissions['node:ol_group:delete any ol_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ol_group:delete any ol_gallery content'
  $permissions['node:ol_group:delete any ol_gallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ol_group:delete any ol_group_post content'
  $permissions['node:ol_group:delete any ol_group_post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ol_group:delete own ol_event content'
  $permissions['node:ol_group:delete own ol_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ol_group:delete own ol_gallery content'
  $permissions['node:ol_group:delete own ol_gallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ol_group:delete own ol_group_post content'
  $permissions['node:ol_group:delete own ol_group_post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ol_group:manage members'
  $permissions['node:ol_group:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:ol_group:manage permissions'
  $permissions['node:ol_group:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:ol_group:manage roles'
  $permissions['node:ol_group:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:ol_group:subscribe'
  $permissions['node:ol_group:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:ol_group:subscribe without approval'
  $permissions['node:ol_group:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ol_group:unsubscribe'
  $permissions['node:ol_group:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:ol_group:update any ol_event content'
  $permissions['node:ol_group:update any ol_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ol_group:update any ol_gallery content'
  $permissions['node:ol_group:update any ol_gallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ol_group:update any ol_group_post content'
  $permissions['node:ol_group:update any ol_group_post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ol_group:update group'
  $permissions['node:ol_group:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:ol_group:update own ol_event content'
  $permissions['node:ol_group:update own ol_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ol_group:update own ol_gallery content'
  $permissions['node:ol_group:update own ol_gallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:ol_group:update own ol_group_post content'
  $permissions['node:ol_group:update own ol_group_post content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
