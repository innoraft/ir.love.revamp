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

// block render code with title and body 
function block_render($module, $block_id) {
  $block = block_load($module, $block_id);
  $block_content = _block_render_blocks(array($block));
  $build = _block_get_renderable_array($block_content);
  $block_rendered = drupal_render($build);
  return $block_rendered;
}