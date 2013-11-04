<?php
/**
 * @file
 * f_site_general_settings.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_site_general_settings_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site-wide-sidebars';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~portfolio' => '~portfolio',
        '~contact' => '~contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'contact_form_blocks-0' => array(
          'module' => 'contact_form_blocks',
          'delta' => '0',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['site-wide-sidebars'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide_context';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
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
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'panels_mini-site_footer' => array(
          'module' => 'panels_mini',
          'delta' => 'site_footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['site_wide_context'] = $context;

  return $export;
}
