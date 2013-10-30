<?php
/**
 * @file
 * openlocal_event.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openlocal_event_taxonomy_default_vocabularies() {
  return array(
    'ol_events' => array(
      'name' => 'Events',
      'machine_name' => 'ol_events',
      'description' => 'Categories for events.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
