<?php

/**
 * Implements hook_preprocess_page().
 */
function ir_love_custom_preprocess_page(&$variables) {
  // You can use preprocess hooks to modify the variables before they are passed
  // to the theme function or template file.
  // drupal_add_css('http://code.jquery.com/ui/1.10.3/themes/smoothness/jquery-ui.css');
  // drupal_add_js("http://code.jquery.com/jquery-1.9.1.js");
  // drupal_add_js("http://code.jquery.com/ui/1.10.3/jquery-ui.js");
  $path = drupal_get_path('theme', 'ir_love_custom');
  if (drupal_is_front_page()) {
	drupal_add_js("$path/js/home.js");
  }

}
