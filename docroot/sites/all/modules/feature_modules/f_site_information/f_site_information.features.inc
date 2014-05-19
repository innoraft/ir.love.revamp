<?php
/**
 * @file
 * f_site_information.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_site_information_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
