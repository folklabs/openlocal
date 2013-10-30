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

  // Exported permission: administer panelizer node openlocal_news_article breadcrumbs.
  $permissions['administer panelizer node openlocal_news_article breadcrumbs'] = array(
    'name' => 'administer panelizer node openlocal_news_article breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node openlocal_news_article content.
  $permissions['administer panelizer node openlocal_news_article content'] = array(
    'name' => 'administer panelizer node openlocal_news_article content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node openlocal_news_article context.
  $permissions['administer panelizer node openlocal_news_article context'] = array(
    'name' => 'administer panelizer node openlocal_news_article context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node openlocal_news_article defaults.
  $permissions['administer panelizer node openlocal_news_article defaults'] = array(
    'name' => 'administer panelizer node openlocal_news_article defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node openlocal_news_article layout.
  $permissions['administer panelizer node openlocal_news_article layout'] = array(
    'name' => 'administer panelizer node openlocal_news_article layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node openlocal_news_article overview.
  $permissions['administer panelizer node openlocal_news_article overview'] = array(
    'name' => 'administer panelizer node openlocal_news_article overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node openlocal_news_article settings.
  $permissions['administer panelizer node openlocal_news_article settings'] = array(
    'name' => 'administer panelizer node openlocal_news_article settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: create openlocal_news_article content.
  $permissions['create openlocal_news_article content'] = array(
    'name' => 'create openlocal_news_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any openlocal_news_article content.
  $permissions['delete any openlocal_news_article content'] = array(
    'name' => 'delete any openlocal_news_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own openlocal_news_article content.
  $permissions['delete own openlocal_news_article content'] = array(
    'name' => 'delete own openlocal_news_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any openlocal_news_article content.
  $permissions['edit any openlocal_news_article content'] = array(
    'name' => 'edit any openlocal_news_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own openlocal_news_article content.
  $permissions['edit own openlocal_news_article content'] = array(
    'name' => 'edit own openlocal_news_article content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
