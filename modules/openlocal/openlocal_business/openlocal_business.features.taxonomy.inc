<?php
/**
 * @file
 * openlocal_business.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openlocal_business_taxonomy_default_vocabularies() {
  return array(
    'ol_business_category' => array(
      'name' => 'Local business category',
      'machine_name' => 'ol_business_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'ol_business_tags' => array(
      'name' => 'Local business tags',
      'machine_name' => 'ol_business_tags',
      'description' => 'Free tags for businesses.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
