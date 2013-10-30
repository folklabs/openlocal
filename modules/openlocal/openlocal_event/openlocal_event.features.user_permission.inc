<?php
/**
 * @file
 * openlocal_event.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_event_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer ol_event_registration registration.
  $permissions['administer ol_event_registration registration'] = array(
    'name' => 'administer ol_event_registration registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: administer own ol_event_registration registration.
  $permissions['administer own ol_event_registration registration'] = array(
    'name' => 'administer own ol_event_registration registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: administer panelizer node ol_event breadcrumbs.
  $permissions['administer panelizer node ol_event breadcrumbs'] = array(
    'name' => 'administer panelizer node ol_event breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_event content.
  $permissions['administer panelizer node ol_event content'] = array(
    'name' => 'administer panelizer node ol_event content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_event context.
  $permissions['administer panelizer node ol_event context'] = array(
    'name' => 'administer panelizer node ol_event context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_event defaults.
  $permissions['administer panelizer node ol_event defaults'] = array(
    'name' => 'administer panelizer node ol_event defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_event layout.
  $permissions['administer panelizer node ol_event layout'] = array(
    'name' => 'administer panelizer node ol_event layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_event overview.
  $permissions['administer panelizer node ol_event overview'] = array(
    'name' => 'administer panelizer node ol_event overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ol_event settings.
  $permissions['administer panelizer node ol_event settings'] = array(
    'name' => 'administer panelizer node ol_event settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term ol_events defaults.
  $permissions['administer panelizer taxonomy_term ol_events defaults'] = array(
    'name' => 'administer panelizer taxonomy_term ol_events defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: create ol_event content.
  $permissions['create ol_event content'] = array(
    'name' => 'create ol_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create ol_event_registration registration.
  $permissions['create ol_event_registration registration'] = array(
    'name' => 'create ol_event_registration registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: create ol_event_registration registration other anonymous.
  $permissions['create ol_event_registration registration other anonymous'] = array(
    'name' => 'create ol_event_registration registration other anonymous',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: create ol_event_registration registration other users.
  $permissions['create ol_event_registration registration other users'] = array(
    'name' => 'create ol_event_registration registration other users',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: delete any ol_event content.
  $permissions['delete any ol_event content'] = array(
    'name' => 'delete any ol_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any ol_event_registration registration.
  $permissions['delete any ol_event_registration registration'] = array(
    'name' => 'delete any ol_event_registration registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: delete own ol_event content.
  $permissions['delete own ol_event content'] = array(
    'name' => 'delete own ol_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own ol_event_registration registration.
  $permissions['delete own ol_event_registration registration'] = array(
    'name' => 'delete own ol_event_registration registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: delete terms in 6.
  $permissions['delete terms in 6'] = array(
    'name' => 'delete terms in 6',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any ol_event content.
  $permissions['edit any ol_event content'] = array(
    'name' => 'edit any ol_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit ol_event_registration registration state.
  $permissions['edit ol_event_registration registration state'] = array(
    'name' => 'edit ol_event_registration registration state',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: edit own ol_event content.
  $permissions['edit own ol_event content'] = array(
    'name' => 'edit own ol_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit terms in 6.
  $permissions['edit terms in 6'] = array(
    'name' => 'edit terms in 6',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: update any ol_event_registration registration.
  $permissions['update any ol_event_registration registration'] = array(
    'name' => 'update any ol_event_registration registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: update own ol_event_registration registration.
  $permissions['update own ol_event_registration registration'] = array(
    'name' => 'update own ol_event_registration registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: view ol_event_registration registration.
  $permissions['view ol_event_registration registration'] = array(
    'name' => 'view ol_event_registration registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: view own ol_event_registration registration.
  $permissions['view own ol_event_registration registration'] = array(
    'name' => 'view own ol_event_registration registration',
    'roles' => array(),
    'module' => 'registration',
  );

  return $permissions;
}
