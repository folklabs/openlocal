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
