<?php
/**
 * @file
 * openlocal_event.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function openlocal_event_user_default_roles() {
  $roles = array();

  // Exported role: event contributor.
  $roles['event contributor'] = array(
    'name' => 'event contributor',
    'weight' => 86,
  );

  return $roles;
}
