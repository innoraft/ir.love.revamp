<?php
/**
 * @file
 * f_site_general_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_site_general_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}