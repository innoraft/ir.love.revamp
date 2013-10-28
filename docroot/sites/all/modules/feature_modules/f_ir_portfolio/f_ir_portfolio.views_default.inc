<?php
/**
 * @file
 * f_ir_portfolio.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function f_ir_portfolio_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'our_portfolio';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Our Portfolio';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our Work';
  $handler->display->display_options['css_class'] = 'content-listings-home';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_work_image']['id'] = 'field_work_image';
  $handler->display->display_options['fields']['field_work_image']['table'] = 'field_data_field_work_image';
  $handler->display->display_options['fields']['field_work_image']['field'] = 'field_work_image';
  $handler->display->display_options['fields']['field_work_image']['label'] = '';
  $handler->display->display_options['fields']['field_work_image']['element_class'] = 'content-image';
  $handler->display->display_options['fields']['field_work_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_work_image']['settings'] = array(
    'image_style' => 'adaptive_215_x_125',
    'image_link' => 'content',
  );
  /* Field: Content: Site Link */
  $handler->display->display_options['fields']['field_work_link']['id'] = 'field_work_link';
  $handler->display->display_options['fields']['field_work_link']['table'] = 'field_data_field_work_link';
  $handler->display->display_options['fields']['field_work_link']['field'] = 'field_work_link';
  $handler->display->display_options['fields']['field_work_link']['label'] = '';
  $handler->display->display_options['fields']['field_work_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_link']['click_sort_column'] = 'url';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_work_category']['id'] = 'field_work_category';
  $handler->display->display_options['fields']['field_work_category']['table'] = 'field_data_field_work_category';
  $handler->display->display_options['fields']['field_work_category']['field'] = 'field_work_category';
  $handler->display->display_options['fields']['field_work_category']['label'] = '';
  $handler->display->display_options['fields']['field_work_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_work_category']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'our_work' => 'our_work',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['our_portfolio'] = $view;

  return $export;
}
