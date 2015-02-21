<?php
/**
 * @file
 * openlocal_issue.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function openlocal_issue_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Support issue',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '77d13d31-bc09-49da-bc1c-8949d8063458',
    'vocabulary_machine_name' => 'ol_issue_type',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Website problem',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'a5c08c8b-a347-4882-b1cd-69051cd52f0c',
    'vocabulary_machine_name' => 'ol_issue_type',
    'metatags' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
