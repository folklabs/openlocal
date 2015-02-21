<?php
/**
 * @file
 * openlocal_alert.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openlocal_alert_taxonomy_default_vocabularies() {
  return array(
    'ol_alerts' => array(
      'name' => 'Alerts',
      'machine_name' => 'ol_alerts',
      'description' => 'Alert categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
