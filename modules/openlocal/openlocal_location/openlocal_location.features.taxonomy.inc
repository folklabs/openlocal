<?php
/**
 * @file
 * openlocal_location.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openlocal_location_taxonomy_default_vocabularies() {
  return array(
    'ol_location_properties' => array(
      'name' => 'Location properties',
      'machine_name' => 'ol_location_properties',
      'description' => 'Properties of a place or other location.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
