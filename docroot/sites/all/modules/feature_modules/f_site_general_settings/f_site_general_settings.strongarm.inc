<?php
/**
 * @file
 * f_site_general_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_site_general_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_css_selectors';
  $strongarm->value = '#block-system-main-menu
.main-menu';
  $export['responsive_menus_css_selectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_disable_mouse_events';
  $strongarm->value = array(
    1 => 0,
  );
  $export['responsive_menus_disable_mouse_events'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_ignore_admin';
  $strongarm->value = array(
    1 => '1',
  );
  $export['responsive_menus_ignore_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_media_size';
  $strongarm->value = '769';
  $export['responsive_menus_media_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_remove_attributes';
  $strongarm->value = array(
    1 => '1',
  );
  $export['responsive_menus_remove_attributes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_simple_absolute';
  $strongarm->value = array(
    1 => '1',
  );
  $export['responsive_menus_simple_absolute'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_simple_text';
  $strongarm->value = '☰';
  $export['responsive_menus_simple_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_style';
  $strongarm->value = 'responsive_menus_simple';
  $export['responsive_menus_style'] = $strongarm;

  return $export;
}
