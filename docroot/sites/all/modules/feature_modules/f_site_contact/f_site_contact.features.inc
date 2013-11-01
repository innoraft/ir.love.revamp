<?php
/**
 * @file
 * f_site_contact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_site_contact_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
