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
