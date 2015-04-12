<?php
/**
 * @file
 * openlocal_harmony_forum.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function openlocal_harmony_forum_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: harmony_post.
  $config['harmony_post'] = array(
    'instance' => 'harmony_post',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => 'Post in [harmony_post:field-harmony-thread:title] by [harmony_post:uid:name] | [site:name]',
      ),
    ),
  );

  // Exported Metatag config instance: harmony_thread.
  $config['harmony_thread'] = array(
    'instance' => 'harmony_thread',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[harmony_thread:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[harmony_thread:summary]',
      ),
    ),
  );

  return $config;
}
