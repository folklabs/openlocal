<?php
/**
 * @file
 * openlocal_news.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function openlocal_news_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-openlocal_news_article-body'
  $field_instances['node-openlocal_news_article-body'] = array(
    'bundle' => 'openlocal_news_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the content of the news article.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 300,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 30,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-openlocal_news_article-field_featured_categories'
  $field_instances['node-openlocal_news_article-field_featured_categories'] = array(
    'bundle' => 'openlocal_news_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the categories your article fits into. E.g, news about an event would go into the "Events" category.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_categories',
    'label' => 'Categories',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-openlocal_news_article-field_featured_image'
  $field_instances['node-openlocal_news_article-field_featured_image'] = array(
    'bundle' => 'openlocal_news_article',
    'deleted' => 0,
    'description' => 'Please add an image to this post to promote it on our homepage and news listings. Don\'t forget to add some "alt tag" text to help those understand what your picture shows as this text is what can be read out automatically by screen readers for those with visual impairment.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'openlocal_news_main',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'openlocal_node_main',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'panopoly_image_quarter',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_image',
    'label' => 'Primary Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'news_articles',
      'file_extensions' => 'png gif jpg jpeg',
      'focus' => 0,
      'focus_lock_ratio' => 0,
      'focus_min_size' => '',
      'max_filesize' => '10 MB',
      'max_resolution' => '',
      'min_resolution' => '300x300',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'openlocal_panel_deep',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-openlocal_news_article-field_ol_radioactivity'
  $field_instances['node-openlocal_news_article-field_ol_radioactivity'] = array(
    'bundle' => 'openlocal_news_article',
    'default_value' => array(
      0 => array(
        'radioactivity_energy' => 0,
        'radioactivity_timestamp' => 1391674675,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ol_radioactivity',
    'label' => 'Radioactivity',
    'required' => FALSE,
    'settings' => array(
      'history' => 0,
      'history_limit' => 8,
      'profile' => 'openlocal_profile',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'radioactivity',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'radioactivity_basic_widget',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-openlocal_news_article-field_ol_tags'
  $field_instances['node-openlocal_news_article-field_ol_tags'] = array(
    'bundle' => 'openlocal_news_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add any tags that define this content in more detail, e.g. "lido". Start typing, if the tag exists, select it. If it does not exist press return to create it. Tags are used to offer more specific searching and filtering for services.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ol_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add any tags that define this content in more detail, e.g. "lido". Start typing, if the tag exists, select it. If it does not exist press return to create it. Tags are used to offer more specific searching and filtering for services.');
  t('Body');
  t('Categories');
  t('Choose the categories your article fits into. E.g, news about an event would go into the "Events" category.');
  t('Enter the content of the news article.');
  t('Please add an image to this post to promote it on our homepage and news listings. Don\'t forget to add some "alt tag" text to help those understand what your picture shows as this text is what can be read out automatically by screen readers for those with visual impairment.');
  t('Primary Image');
  t('Radioactivity');
  t('Tags');

  return $field_instances;
}
