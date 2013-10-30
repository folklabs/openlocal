<?php
/**
 * @file
 * openlocal_poll.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openlocal_poll_user_default_permissions() {
  $permissions = array();

  // Exported permission: access electoral list.
  $permissions['access electoral list'] = array(
    'name' => 'access electoral list',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: add write-ins.
  $permissions['add write-ins'] = array(
    'name' => 'add write-ins',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: administer polls.
  $permissions['administer polls'] = array(
    'name' => 'administer polls',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: administer voting api.
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'votingapi',
  );

  // Exported permission: cancel own vote.
  $permissions['cancel own vote'] = array(
    'name' => 'cancel own vote',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: create advpoll content.
  $permissions['create advpoll content'] = array(
    'name' => 'create advpoll content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any advpoll content.
  $permissions['delete any advpoll content'] = array(
    'name' => 'delete any advpoll content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own advpoll content.
  $permissions['delete own advpoll content'] = array(
    'name' => 'delete own advpoll content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any advpoll content.
  $permissions['edit any advpoll content'] = array(
    'name' => 'edit any advpoll content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own advpoll content.
  $permissions['edit own advpoll content'] = array(
    'name' => 'edit own advpoll content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: inspect all votes.
  $permissions['inspect all votes'] = array(
    'name' => 'inspect all votes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: show vote results.
  $permissions['show vote results'] = array(
    'name' => 'show vote results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: show write-ins.
  $permissions['show write-ins'] = array(
    'name' => 'show write-ins',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: vote on polls.
  $permissions['vote on polls'] = array(
    'name' => 'vote on polls',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advpoll',
  );

  return $permissions;
}
