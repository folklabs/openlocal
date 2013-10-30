<?php
/**
 * @file
 * openlocal_group.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openlocal_group_taxonomy_default_vocabularies() {
  return array(
    'ol_groups' => array(
      'name' => 'Groups',
      'machine_name' => 'ol_groups',
      'description' => 'Group categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
