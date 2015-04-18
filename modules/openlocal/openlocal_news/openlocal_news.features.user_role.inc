<?php
/**
 * @file
 * openlocal_news.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function openlocal_news_user_default_roles() {
  $roles = array();

  // Exported role: news contributor.
  $roles['news contributor'] = array(
    'name' => 'news contributor',
    'weight' => 85,
  );

  return $roles;
}
