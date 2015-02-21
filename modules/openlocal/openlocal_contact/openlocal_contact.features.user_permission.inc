<?php
/**
 * @file
 * openlocal_contact.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_contact_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer newsletters'.
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer panelizer node mass_contact defaults'.
  $permissions['administer panelizer node mass_contact defaults'] = array(
    'name' => 'administer panelizer node mass_contact defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node ol_newsletter defaults'.
  $permissions['administer panelizer node ol_newsletter defaults'] = array(
    'name' => 'administer panelizer node ol_newsletter defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer privatemsg settings'.
  $permissions['administer privatemsg settings'] = array(
    'name' => 'administer privatemsg settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'allow disabling privatemsg'.
  $permissions['allow disabling privatemsg'] = array(
    'name' => 'allow disabling privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'create ol_newsletter content'.
  $permissions['create ol_newsletter content'] = array(
    'name' => 'create ol_newsletter content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ol_newsletter content'.
  $permissions['delete any ol_newsletter content'] = array(
    'name' => 'delete any ol_newsletter content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ol_newsletter content'.
  $permissions['delete own ol_newsletter content'] = array(
    'name' => 'delete own ol_newsletter content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete privatemsg'.
  $permissions['delete privatemsg'] = array(
    'name' => 'delete privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'delete terms in newsletter'.
  $permissions['delete terms in newsletter'] = array(
    'name' => 'delete terms in newsletter',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any ol_newsletter content'.
  $permissions['edit any ol_newsletter content'] = array(
    'name' => 'edit any ol_newsletter content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ol_newsletter content'.
  $permissions['edit own ol_newsletter content'] = array(
    'name' => 'edit own ol_newsletter content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in newsletter'.
  $permissions['edit terms in newsletter'] = array(
    'name' => 'edit terms in newsletter',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'read all private messages'.
  $permissions['read all private messages'] = array(
    'name' => 'read all private messages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'read privatemsg'.
  $permissions['read privatemsg'] = array(
    'name' => 'read privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'reply only privatemsg'.
  $permissions['reply only privatemsg'] = array(
    'name' => 'reply only privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'select text format for privatemsg'.
  $permissions['select text format for privatemsg'] = array(
    'name' => 'select text format for privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'send newsletter'.
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'subscribe to newsletters'.
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'use tokens in privatemsg'.
  $permissions['use tokens in privatemsg'] = array(
    'name' => 'use tokens in privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: 'write privatemsg'.
  $permissions['write privatemsg'] = array(
    'name' => 'write privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'privatemsg',
  );

  return $permissions;
}
