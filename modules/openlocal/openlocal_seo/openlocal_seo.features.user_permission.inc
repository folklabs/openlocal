<?php
/**
 * @file
 * openlocal_seo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_seo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  return $permissions;
}
