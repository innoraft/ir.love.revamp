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
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
