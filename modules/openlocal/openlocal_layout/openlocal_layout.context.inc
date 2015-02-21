<?php
/**
 * @file
 * openlocal_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openlocal_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Sitewide blocks for OpenLocal.';
  $context->tag = 'openlocal';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nice_menus-1' => array(
          'module' => 'nice_menus',
          'delta' => '1',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'masquerade-masquerade' => array(
          'module' => 'masquerade',
          'delta' => 'masquerade',
          'region' => 'footer',
          'weight' => '-38',
        ),
        'menu-menu-ol-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-ol-footer-menu',
          'region' => 'footer',
          'weight' => '-37',
        ),
        'block-10' => array(
          'module' => 'block',
          'delta' => '10',
          'region' => 'footer',
          'weight' => '-36',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide blocks for OpenLocal.');
  t('openlocal');
  $export['sitewide'] = $context;

  return $export;
}
