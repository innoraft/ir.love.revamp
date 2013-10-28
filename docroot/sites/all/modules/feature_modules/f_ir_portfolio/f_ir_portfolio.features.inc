<?php
/**
 * @file
 * f_ir_portfolio.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_ir_portfolio_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_ir_portfolio_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function f_ir_portfolio_image_default_styles() {
  $styles = array();

  // Exported image style: adaptive_275_x_175.
  $styles['adaptive_275_x_175'] = array(
    'name' => 'adaptive_275_x_175',
    'label' => 'Adaptive 275 x 175',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 275,
          'height' => 175,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function f_ir_portfolio_node_info() {
  $items = array(
    'our_work' => array(
      'name' => t('Our Work'),
      'base' => 'node_content',
      'description' => t('Content Type to store details of work done by Innoraft'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
