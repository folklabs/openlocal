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

  // Exported permission: 'administer panelizer node ol_business breadcrumbs'.
  $permissions['administer panelizer node ol_business breadcrumbs'] = array(
    'name' => 'administer panelizer node ol_business breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_business content'.
  $permissions['administer panelizer node ol_business content'] = array(
    'name' => 'administer panelizer node ol_business content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_business context'.
  $permissions['administer panelizer node ol_business context'] = array(
    'name' => 'administer panelizer node ol_business context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_business defaults'.
  $permissions['administer panelizer node ol_business defaults'] = array(
    'name' => 'administer panelizer node ol_business defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_business layout'.
  $permissions['administer panelizer node ol_business layout'] = array(
    'name' => 'administer panelizer node ol_business layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_business overview'.
  $permissions['administer panelizer node ol_business overview'] = array(
    'name' => 'administer panelizer node ol_business overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_business settings'.
  $permissions['administer panelizer node ol_business settings'] = array(
    'name' => 'administer panelizer node ol_business settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_reward_scheme breadcrumbs'.
  $permissions['administer panelizer node ol_reward_scheme breadcrumbs'] = array(
    'name' => 'administer panelizer node ol_reward_scheme breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_reward_scheme content'.
  $permissions['administer panelizer node ol_reward_scheme content'] = array(
    'name' => 'administer panelizer node ol_reward_scheme content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_reward_scheme context'.
  $permissions['administer panelizer node ol_reward_scheme context'] = array(
    'name' => 'administer panelizer node ol_reward_scheme context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_reward_scheme defaults'.
  $permissions['administer panelizer node ol_reward_scheme defaults'] = array(
    'name' => 'administer panelizer node ol_reward_scheme defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_reward_scheme layout'.
  $permissions['administer panelizer node ol_reward_scheme layout'] = array(
    'name' => 'administer panelizer node ol_reward_scheme layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_reward_scheme overview'.
  $permissions['administer panelizer node ol_reward_scheme overview'] = array(
    'name' => 'administer panelizer node ol_reward_scheme overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_reward_scheme settings'.
  $permissions['administer panelizer node ol_reward_scheme settings'] = array(
    'name' => 'administer panelizer node ol_reward_scheme settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create ol_business content'.
  $permissions['create ol_business content'] = array(
    'name' => 'create ol_business content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ol_reward_scheme content'.
  $permissions['create ol_reward_scheme content'] = array(
    'name' => 'create ol_reward_scheme content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ol_business content'.
  $permissions['delete any ol_business content'] = array(
    'name' => 'delete any ol_business content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ol_reward_scheme content'.
  $permissions['delete any ol_reward_scheme content'] = array(
    'name' => 'delete any ol_reward_scheme content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ol_business content'.
  $permissions['delete own ol_business content'] = array(
    'name' => 'delete own ol_business content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ol_reward_scheme content'.
  $permissions['delete own ol_reward_scheme content'] = array(
    'name' => 'delete own ol_reward_scheme content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in ol_business_category'.
  $permissions['delete terms in ol_business_category'] = array(
    'name' => 'delete terms in ol_business_category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'eck add ol_promotion bundles'.
  $permissions['eck add ol_promotion bundles'] = array(
    'name' => 'eck add ol_promotion bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add ol_promotion ol_promotion entities'.
  $permissions['eck add ol_promotion ol_promotion entities'] = array(
    'name' => 'eck add ol_promotion ol_promotion entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer ol_promotion bundles'.
  $permissions['eck administer ol_promotion bundles'] = array(
    'name' => 'eck administer ol_promotion bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer ol_promotion ol_promotion entities'.
  $permissions['eck administer ol_promotion ol_promotion entities'] = array(
    'name' => 'eck administer ol_promotion ol_promotion entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete ol_promotion bundles'.
  $permissions['eck delete ol_promotion bundles'] = array(
    'name' => 'eck delete ol_promotion bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete ol_promotion ol_promotion entities'.
  $permissions['eck delete ol_promotion ol_promotion entities'] = array(
    'name' => 'eck delete ol_promotion ol_promotion entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit ol_promotion bundles'.
  $permissions['eck edit ol_promotion bundles'] = array(
    'name' => 'eck edit ol_promotion bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit ol_promotion ol_promotion entities'.
  $permissions['eck edit ol_promotion ol_promotion entities'] = array(
    'name' => 'eck edit ol_promotion ol_promotion entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list ol_promotion bundles'.
  $permissions['eck list ol_promotion bundles'] = array(
    'name' => 'eck list ol_promotion bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list ol_promotion ol_promotion entities'.
  $permissions['eck list ol_promotion ol_promotion entities'] = array(
    'name' => 'eck list ol_promotion ol_promotion entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view ol_promotion ol_promotion entities'.
  $permissions['eck view ol_promotion ol_promotion entities'] = array(
    'name' => 'eck view ol_promotion ol_promotion entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'edit any ol_business content'.
  $permissions['edit any ol_business content'] = array(
    'name' => 'edit any ol_business content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ol_reward_scheme content'.
  $permissions['edit any ol_reward_scheme content'] = array(
    'name' => 'edit any ol_reward_scheme content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ol_business content'.
  $permissions['edit own ol_business content'] = array(
    'name' => 'edit own ol_business content',
    'roles' => array(
      'editor' => 'editor',
      'trader' => 'trader',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ol_reward_scheme content'.
  $permissions['edit own ol_reward_scheme content'] = array(
    'name' => 'edit own ol_reward_scheme content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in ol_business_category'.
  $permissions['edit terms in ol_business_category'] = array(
    'name' => 'edit terms in ol_business_category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'manage ol_promotion properties'.
  $permissions['manage ol_promotion properties'] = array(
    'name' => 'manage ol_promotion properties',
    'roles' => array(),
    'module' => 'eck',
  );

  return $permissions;
}
