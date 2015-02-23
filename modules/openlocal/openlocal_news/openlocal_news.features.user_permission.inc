<?php
/**
 * @file
 * openlocal_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer comments on own ol_news_article'.
  $permissions['administer comments on own ol_news_article'] = array(
    'name' => 'administer comments on own ol_news_article',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commentaccess',
  );

  // Exported permission: 'administer panelizer node ol_news_article breadcrumbs'.
  $permissions['administer panelizer node ol_news_article breadcrumbs'] = array(
    'name' => 'administer panelizer node ol_news_article breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_news_article content'.
  $permissions['administer panelizer node ol_news_article content'] = array(
    'name' => 'administer panelizer node ol_news_article content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_news_article context'.
  $permissions['administer panelizer node ol_news_article context'] = array(
    'name' => 'administer panelizer node ol_news_article context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_news_article defaults'.
  $permissions['administer panelizer node ol_news_article defaults'] = array(
    'name' => 'administer panelizer node ol_news_article defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_news_article layout'.
  $permissions['administer panelizer node ol_news_article layout'] = array(
    'name' => 'administer panelizer node ol_news_article layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_news_article overview'.
  $permissions['administer panelizer node ol_news_article overview'] = array(
    'name' => 'administer panelizer node ol_news_article overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_news_article settings'.
  $permissions['administer panelizer node ol_news_article settings'] = array(
    'name' => 'administer panelizer node ol_news_article settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'approve comments on own ol_news_article'.
  $permissions['approve comments on own ol_news_article'] = array(
    'name' => 'approve comments on own ol_news_article',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commentaccess',
  );

  // Exported permission: 'create ol_news_article content'.
  $permissions['create ol_news_article content'] = array(
    'name' => 'create ol_news_article content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ol_news_article content'.
  $permissions['delete any ol_news_article content'] = array(
    'name' => 'delete any ol_news_article content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete comments on own ol_news_article'.
  $permissions['delete comments on own ol_news_article'] = array(
    'name' => 'delete comments on own ol_news_article',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commentaccess',
  );

  // Exported permission: 'delete own ol_news_article content'.
  $permissions['delete own ol_news_article content'] = array(
    'name' => 'delete own ol_news_article content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ol_news_article content'.
  $permissions['edit any ol_news_article content'] = array(
    'name' => 'edit any ol_news_article content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ol_news_article content'.
  $permissions['edit own ol_news_article content'] = array(
    'name' => 'edit own ol_news_article content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
