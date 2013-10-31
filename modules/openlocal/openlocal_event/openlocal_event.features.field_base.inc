<?php
/**
 * @file
 * openlocal_event.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function openlocal_event_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ol_event_category'
  $field_bases['field_ol_event_category'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ol_event_category',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'ol_events',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_ol_event_contact'
  $field_bases['field_ol_event_contact'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ol_event_contact',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_ol_event_date'
  $field_bases['field_ol_event_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ol_event_date',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'repeat' => 1,
      'timezone_db' => 'UTC',
      'todate' => 'optional',
      'tz_handling' => 'site',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // // Exported field_base: 'field_ol_event_registration'
  // $field_bases['field_ol_event_registration'] = array(
  //   'active' => 1,
  //   'cardinality' => 1,
  //   'deleted' => 0,
  //   'entity_types' => array(),
  //   'field_name' => 'field_ol_event_registration',
  //   'foreign keys' => array(
  //     'registration_type' => array(
  //       'columns' => array(
  //         'registration_type' => 'name',
  //       ),
  //       'table' => 'registration_type',
  //     ),
  //   ),
  //   'indexes' => array(
  //     'registration_type' => array(
  //       0 => 'registration_type',
  //     ),
  //   ),
  //   'locked' => 0,
  //   'module' => 'registration',
  //   'settings' => array(),
  //   'translatable' => 0,
  //   'type' => 'registration',
  // );

  // Exported field_base: 'field_ol_event_venue'
  $field_bases['field_ol_event_venue_ref'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ol_event_venue_ref',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'openlocal_event',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
