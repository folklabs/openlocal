<?php
/**
 * @file
 * openlocal_popular.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function openlocal_popular_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ol_radioactivity'
  $field_bases['field_ol_radioactivity'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ol_radioactivity',
    'foreign keys' => array(),
    'indexes' => array(
      'energy' => array(
        0 => 'radioactivity_energy',
      ),
    ),
    'locked' => 0,
    'module' => 'radioactivity',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'radioactivity',
  );

  return $field_bases;
}
