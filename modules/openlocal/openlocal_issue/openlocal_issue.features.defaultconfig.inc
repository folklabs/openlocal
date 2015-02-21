<?php
/**
 * @file
 * openlocal_issue.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function openlocal_issue_defaultconfig_features() {
  return array(
    'openlocal_issue' => array(
      'panelizer_defaults' => 'panelizer_defaults',
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_panelizer_defaults().
 */
function openlocal_issue_defaultconfig_panelizer_defaults() {
  $export = array();

  return $export;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function openlocal_issue_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ol_issue_pattern';
  $strongarm->value = 'issues/[node:title]';
  $export['pathauto_node_ol_issue_pattern'] = $strongarm;

  return $export;
}
