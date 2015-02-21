<?php
/**
 * @file
 * openlocal_core.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openlocal_core_taxonomy_default_vocabularies() {
  return array(
    'ol_location_properties' => array(
      'name' => 'Location properties',
      'machine_name' => 'ol_location_properties',
      'description' => 'Properties of a place or other location.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'ol_places' => array(
      'name' => 'Places',
      'machine_name' => 'ol_places',
      'description' => 'Categories of places',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'ol_tags' => array(
      'name' => 'Tags',
      'machine_name' => 'ol_tags',
      'description' => 'General sitewide free tags.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
