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

  // Exported permission: access site-wide contact form.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: access user contact forms.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: administer contact forms.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: administer panelizer node mass_contact defaults.
  $permissions['administer panelizer node mass_contact defaults'] = array(
    'name' => 'administer panelizer node mass_contact defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer privatemsg settings.
  $permissions['administer privatemsg settings'] = array(
    'name' => 'administer privatemsg settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: allow disabling privatemsg.
  $permissions['allow disabling privatemsg'] = array(
    'name' => 'allow disabling privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: create mass_contact content.
  $permissions['create mass_contact content'] = array(
    'name' => 'create mass_contact content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any mass_contact content.
  $permissions['delete any mass_contact content'] = array(
    'name' => 'delete any mass_contact content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own mass_contact content.
  $permissions['delete own mass_contact content'] = array(
    'name' => 'delete own mass_contact content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete privatemsg.
  $permissions['delete privatemsg'] = array(
    'name' => 'delete privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: edit any mass_contact content.
  $permissions['edit any mass_contact content'] = array(
    'name' => 'edit any mass_contact content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own mass_contact content.
  $permissions['edit own mass_contact content'] = array(
    'name' => 'edit own mass_contact content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: mass contact administer.
  $permissions['mass contact administer'] = array(
    'name' => 'mass contact administer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: mass contact archive messages.
  $permissions['mass contact archive messages'] = array(
    'name' => 'mass contact archive messages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: mass contact change default sender information.
  $permissions['mass contact change default sender information'] = array(
    'name' => 'mass contact change default sender information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: mass contact include attachments.
  $permissions['mass contact include attachments'] = array(
    'name' => 'mass contact include attachments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: mass contact override archiving.
  $permissions['mass contact override archiving'] = array(
    'name' => 'mass contact override archiving',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: mass contact override bcc.
  $permissions['mass contact override bcc'] = array(
    'name' => 'mass contact override bcc',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: mass contact override text format.
  $permissions['mass contact override text format'] = array(
    'name' => 'mass contact override text format',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: mass contact send messages.
  $permissions['mass contact send messages'] = array(
    'name' => 'mass contact send messages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mass_contact',
  );

  // Exported permission: read all private messages.
  $permissions['read all private messages'] = array(
    'name' => 'read all private messages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: read privatemsg.
  $permissions['read privatemsg'] = array(
    'name' => 'read privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: reply only privatemsg.
  $permissions['reply only privatemsg'] = array(
    'name' => 'reply only privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: select text format for privatemsg.
  $permissions['select text format for privatemsg'] = array(
    'name' => 'select text format for privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: use tokens in privatemsg.
  $permissions['use tokens in privatemsg'] = array(
    'name' => 'use tokens in privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  // Exported permission: write privatemsg.
  $permissions['write privatemsg'] = array(
    'name' => 'write privatemsg',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'privatemsg',
  );

  return $permissions;
}
