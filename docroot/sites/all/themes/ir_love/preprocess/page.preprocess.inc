<?php

/**
 * Implements hook_preprocess_page().
 */
function ir_love_preprocess_page(&$variables) {
  // You can use preprocess hooks to modify the variables before they are passed
  // to the theme function or template file.
  $path = drupal_get_path('theme', 'ir_love');
  if (drupal_is_front_page()) {
	//drupal_add_js("$path/js/home.js");	
  }
}
