<?php
/**
 * @file
 * openlocal_layout.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function openlocal_layout_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer credits';
  $fe_block_boxes->format = 'panopoly_html_text';
  $fe_block_boxes->machine_name = 'footer_credits';
  $fe_block_boxes->body = '<p>Copyright Herne Hill Forum 2014. Designed and built by <a href="http://www.folklabs.com">Folk Labs</a> and <a href="mailto:info@originaltg.com">Original Thinking</a>.</p>';

  $export['footer_credits'] = $fe_block_boxes;

  return $export;
}
