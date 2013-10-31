<?php
/**
 * @file
 * f_home_page_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_home_page_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_page_blocks';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'home' => 'home',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'top_navigation',
          'weight' => '-10',
        ),
        'panels_mini-site_footer' => array(
          'module' => 'panels_mini',
          'delta' => 'site_footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
      'layout' => 'ir_love-home',
    ),
  );
  $context->condition_mode = 0;
  $export['home_page_blocks'] = $context;

  return $export;
}
