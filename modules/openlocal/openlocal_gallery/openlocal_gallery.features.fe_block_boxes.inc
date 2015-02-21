<?php
/**
 * @file
 * openlocal_gallery.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function openlocal_gallery_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'OpenLocal Gallery actions';
  $fe_block_boxes->format = 'panopoly_html_text';
  $fe_block_boxes->machine_name = 'ol_gallery_actions';
  $fe_block_boxes->body = '<div class="ol-action-box">

<div class="ol-action-button">
<a href="/node/add/ol-gallery"><span class="ol-action-span"><i class="fa fa-plus"></i> add gallery</span></a>
</div>

<div>
<a href="/contextual_help/how-create-gallery" class="ol-action-help"><i class="fa fa-question-circle"></i> About creating galleries</a>
</div>
</div>';

  $export['ol_gallery_actions'] = $fe_block_boxes;

  return $export;
}
