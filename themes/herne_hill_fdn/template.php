<?php

/**
 * Implements template_preprocess_html().
 */
function herne_hill_fdn_preprocess_html(&$variables) {
}

/**
 * Implements template_preprocess_node.
 */
function herne_hill_fdn_preprocess_node(&$variables) {
}

/**
 * Implements template_preprocess_page.
 *
 * Adds a Panopoly/Panels search form to the header.
 */
function herne_hill_fdn_preprocess_page(&$variables) {
  $variables['search_form'] = '';

  if (module_exists('search') && user_access('search content')) {
    $search_box_form = drupal_get_form('search_form');
    $search_box_form['basic']['keys']['#title'] = '';
    $search_box_form['basic']['keys']['#attributes'] = array('placeholder' => 'Search this site');
    $search_box_form['basic']['keys']['#attributes']['class'][] = 'search-query';
    $search_box_form['basic']['submit']['#value'] = t('fa-search');
    $search_box = drupal_render($search_box_form);
    $search_box = str_replace('>fa-search<', '><i class="fa fa-search"></i><', $search_box);
    $variables['search_form'] = (user_access('search content')) ? $search_box : NULL;
  }
}

function herne_hill_fdn_colorbox_imagefield($variables) {
    $class = array('colorbox');

  if ($variables['image']['style_name'] == 'hide') {
    $image = '';
    $class[] = 'js-hide';
  }
  else if (!empty($variables['image']['style_name'])) {
    $image = theme('image_style', $variables['image']);
  }
  else {
    $image = theme('image', $variables['image']);
  }

  // ##### Here are the lines I've added
  // $my_style = 'my_style_that_should_come_with_a_caption';
  // if ($variables['image']['style_name'] == $my_style) {
    $image .= '<div class="img-title">' . check_plain($variables['title']) . '</div>';
  // }
  // ##### end of modification

  $options = array(
    'html' => TRUE,
    'attributes' => array(
      'title' => $variables['title'],
      'class' => implode(' ', $class),
      'rel' => $variables['gid'],
    )
  );

  return l($image, $variables['path'], $options);
}
