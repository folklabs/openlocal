<?php
/**
 * @file
 * openlocal_organisation.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openlocal_organisation_taxonomy_default_vocabularies() {
  return array(
    'ol_organisation_type' => array(
      'name' => 'Organisation type',
      'machine_name' => 'ol_organisation_type',
      'description' => 'What kind of organisations there are.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
