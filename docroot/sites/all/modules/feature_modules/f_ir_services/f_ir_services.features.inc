<?php
/**
 * @file
 * f_ir_services.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_ir_services_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_ir_services_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function f_ir_services_node_info() {
  $items = array(
    'our_services' => array(
      'name' => t('Our Services'),
      'base' => 'node_content',
      'description' => t('Content type to Store types of services provided by innoraft'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
