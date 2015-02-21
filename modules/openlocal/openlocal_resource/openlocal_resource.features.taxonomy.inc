<?php
/**
 * @file
 * openlocal_resource.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openlocal_resource_taxonomy_default_vocabularies() {
  return array(
    'ol_resources' => array(
      'name' => 'Resources',
      'machine_name' => 'ol_resources',
      'description' => 'Types of resource',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
