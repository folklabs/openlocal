<?php
/**
 * @file
 * openlocal_images.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function openlocal_images_image_default_styles() {
  $styles = array();

  // Exported image style: ol_featured_highlight.
  $styles['ol_featured_highlight'] = array(
    'name' => 'ol_featured_highlight',
    'label' => 'ol_featured_highlight',
    'effects' => array(
      1 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 580,
          'height' => 336,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: openlocal_avatar_large.
  $styles['openlocal_avatar_large'] = array(
    'name' => 'openlocal_avatar_large',
    'label' => 'openlocal_avatar_large',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 280,
          'height' => 272,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: openlocal_avatar_micro.
  $styles['openlocal_avatar_micro'] = array(
    'name' => 'openlocal_avatar_micro',
    'label' => 'openlocal_avatar_micro',
    'effects' => array(
      13 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 24,
          'height' => 24,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: openlocal_avatar_small.
  $styles['openlocal_avatar_small'] = array(
    'name' => 'openlocal_avatar_small',
    'label' => 'openlocal_avatar_small',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 64,
          'height' => 64,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: openlocal_events_listing.
  $styles['openlocal_events_listing'] = array(
    'name' => 'openlocal_events_listing',
    'label' => 'openlocal_events_listing',
    'effects' => array(
      16 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 130,
          'height' => 128,
          'strength' => 'high',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: openlocal_news_main.
  $styles['openlocal_news_main'] = array(
    'name' => 'openlocal_news_main',
    'label' => 'openlocal_news_main',
    'effects' => array(
      7 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 580,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: openlocal_node_main.
  $styles['openlocal_node_main'] = array(
    'name' => 'openlocal_node_main',
    'label' => 'openlocal_node_main',
    'effects' => array(
      5 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 580,
          'height' => 336,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: openlocal_panel_deep.
  $styles['openlocal_panel_deep'] = array(
    'name' => 'openlocal_panel_deep',
    'label' => 'openlocal_panel_deep',
    'effects' => array(
      3 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 280,
          'height' => 192,
          'strength' => 'low',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: openlocal_panel_shallow.
  $styles['openlocal_panel_shallow'] = array(
    'name' => 'openlocal_panel_shallow',
    'label' => 'openlocal_panel_shallow',
    'effects' => array(
      17 => array(
        'label' => 'Focus Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>ImageField Focus</em>.',
        'effect callback' => 'imagefield_focus_scale_and_crop_effect',
        'form callback' => 'imagefield_focus_scale_and_crop_form',
        'summary theme' => 'imagefield_focus_scale_and_crop_summary',
        'module' => 'imagefield_focus',
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 280,
          'height' => 128,
          'strength' => 'low',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
