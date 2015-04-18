<?php
/**
 * @file
 * openlocal_harmony_forum.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function openlocal_harmony_forum_defaultconfig_features() {
  return array(
    'openlocal_harmony_forum' => array(
      'field_default_fields' => 'field_default_fields',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function openlocal_harmony_forum_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'user-user-field_harmony_thread_count'.
  $fields['user-user-field_harmony_thread_count'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_harmony_thread_count',
      'field_permissions' => array(
        'type' => 0,
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'number',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 0,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'harmony_user_post_profile' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_harmony_thread_count',
      'label' => 'Thread count',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => 0,
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => 8,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Thread count');

  return $fields;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function openlocal_harmony_forum_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access harmony admin pages'.
  $permissions['access harmony admin pages'] = array(
    'name' => 'access harmony admin pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'access harmony rebuild actions'.
  $permissions['access harmony rebuild actions'] = array(
    'name' => 'access harmony rebuild actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'access harmony_post show replies'.
  $permissions['access harmony_post show replies'] = array(
    'name' => 'access harmony_post show replies',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'administer harmony forum content'.
  $permissions['administer harmony forum content'] = array(
    'name' => 'administer harmony forum content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'administer harmony settings'.
  $permissions['administer harmony settings'] = array(
    'name' => 'administer harmony settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'administer harmony_post entity'.
  $permissions['administer harmony_post entity'] = array(
    'name' => 'administer harmony_post entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'administer harmony_thread_types'.
  $permissions['administer harmony_thread_types'] = array(
    'name' => 'administer harmony_thread_types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'bypass harmony forum access control'.
  $permissions['bypass harmony forum access control'] = array(
    'name' => 'bypass harmony forum access control',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'create harmony_posts'.
  $permissions['create harmony_posts'] = array(
    'name' => 'create harmony_posts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'create harmony_thread harmony threads'.
  $permissions['create harmony_thread harmony threads'] = array(
    'name' => 'create harmony_thread harmony threads',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'delete any harmony_post'.
  $permissions['delete any harmony_post'] = array(
    'name' => 'delete any harmony_post',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'delete any harmony_post revisions'.
  $permissions['delete any harmony_post revisions'] = array(
    'name' => 'delete any harmony_post revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'delete any harmony_thread'.
  $permissions['delete any harmony_thread'] = array(
    'name' => 'delete any harmony_thread',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'delete own harmony_post revisions'.
  $permissions['delete own harmony_post revisions'] = array(
    'name' => 'delete own harmony_post revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'delete own harmony_posts'.
  $permissions['delete own harmony_posts'] = array(
    'name' => 'delete own harmony_posts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'delete own harmony_threads'.
  $permissions['delete own harmony_threads'] = array(
    'name' => 'delete own harmony_threads',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'delete terms in harmony_category'.
  $permissions['delete terms in harmony_category'] = array(
    'name' => 'delete terms in harmony_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'disable new harmony content'.
  $permissions['disable new harmony content'] = array(
    'name' => 'disable new harmony content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'edit any harmony_post'.
  $permissions['edit any harmony_post'] = array(
    'name' => 'edit any harmony_post',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'edit any harmony_thread'.
  $permissions['edit any harmony_thread'] = array(
    'name' => 'edit any harmony_thread',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'edit locked harmony_posts'.
  $permissions['edit locked harmony_posts'] = array(
    'name' => 'edit locked harmony_posts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'edit locked harmony_threads'.
  $permissions['edit locked harmony_threads'] = array(
    'name' => 'edit locked harmony_threads',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'edit own harmony_posts'.
  $permissions['edit own harmony_posts'] = array(
    'name' => 'edit own harmony_posts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'edit own harmony_threads'.
  $permissions['edit own harmony_threads'] = array(
    'name' => 'edit own harmony_threads',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'edit terms in harmony_category'.
  $permissions['edit terms in harmony_category'] = array(
    'name' => 'edit terms in harmony_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'flag harmony_likes'.
  $permissions['flag harmony_likes'] = array(
    'name' => 'flag harmony_likes',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'reply as new harmony_thread'.
  $permissions['reply as new harmony_thread'] = array(
    'name' => 'reply as new harmony_thread',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'revert any harmony_post revisions'.
  $permissions['revert any harmony_post revisions'] = array(
    'name' => 'revert any harmony_post revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'revert own harmony_post revisions'.
  $permissions['revert own harmony_post revisions'] = array(
    'name' => 'revert own harmony_post revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'show format selection for harmony_post'.
  $permissions['show format selection for harmony_post'] = array(
    'name' => 'show format selection for harmony_post',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for harmony_thread'.
  $permissions['show format selection for harmony_thread'] = array(
    'name' => 'show format selection for harmony_thread',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'unflag harmony_likes'.
  $permissions['unflag harmony_likes'] = array(
    'name' => 'unflag harmony_likes',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'use text format harmony_filtered'.
  $permissions['use text format harmony_filtered'] = array(
    'name' => 'use text format harmony_filtered',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'view harmony_post revisions'.
  $permissions['view harmony_post revisions'] = array(
    'name' => 'view harmony_post revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'view harmony_posts'.
  $permissions['view harmony_posts'] = array(
    'name' => 'view harmony_posts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'view harmony_threads'.
  $permissions['view harmony_threads'] = array(
    'name' => 'view harmony_threads',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'view own harmony_post revisions'.
  $permissions['view own harmony_post revisions'] = array(
    'name' => 'view own harmony_post revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'view own unpublished harmony_posts'.
  $permissions['view own unpublished harmony_posts'] = array(
    'name' => 'view own unpublished harmony_posts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'view own unpublished harmony_threads'.
  $permissions['view own unpublished harmony_threads'] = array(
    'name' => 'view own unpublished harmony_threads',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'view unpublished harmony_posts'.
  $permissions['view unpublished harmony_posts'] = array(
    'name' => 'view unpublished harmony_posts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  // Exported permission: 'view unpublished harmony_threads'.
  $permissions['view unpublished harmony_threads'] = array(
    'name' => 'view unpublished harmony_threads',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'harmony_core',
  );

  return $permissions;
}
