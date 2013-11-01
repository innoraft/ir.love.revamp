<?php
/**
 * @file
 * f_site_contact.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_site_contact_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_page_blocks';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-ir_locations' => array(
          'module' => 'panels_mini',
          'delta' => 'ir_locations',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['contact_page_blocks'] = $context;

  return $export;
}
