<?php
/**
 * @file
 * openlocal_user.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function openlocal_user_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ol_personal_address'
  $field_bases['field_ol_personal_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ol_personal_address',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addressfield',
    'settings' => array(
      'profile2_private' => 1,
    ),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  // Exported field_base: 'field_ol_personal_type_of_user'
  $field_bases['field_ol_personal_type_of_user'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ol_personal_type_of_user',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'resident' => 'Local resident',
        'trader' => 'Local trader',
        'interested' => 'Just interested',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 1,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
