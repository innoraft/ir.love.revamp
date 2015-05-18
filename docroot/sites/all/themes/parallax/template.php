<?php

/**
 * @file
 * template.php
 */

/**
 *  
 *
 */

function parallax_preprocess_html(&$vars) {
  if ($vars['is_front']) {
    drupal_add_css(drupal_get_path('theme','parallax').'/css/front.css');
  }
  else {
    drupal_add_css(drupal_get_path('theme','parallax').'/css/general.css');
  }
}