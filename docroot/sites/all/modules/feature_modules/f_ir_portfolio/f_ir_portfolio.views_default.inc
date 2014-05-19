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
  $handler->display->display_options['title'] = 'Testimonial';
  $handler->display->display_options['css_class'] = 'work-content-listing';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: featured */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'featured';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_work_image']['id'] = 'field_work_image';
  $handler->display->display_options['fields']['field_work_image']['table'] = 'field_data_field_work_image';
  $handler->display->display_options['fields']['field_work_image']['field'] = 'field_work_image';
  $handler->display->display_options['fields']['field_work_image']['label'] = '';
  $handler->display->display_options['fields']['field_work_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_work_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_work_image']['element_wrapper_class'] = 'content-image';
  $handler->display->display_options['fields']['field_work_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_work_image']['settings'] = array(
    'image_style' => 'image_style_testimonials',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_work_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_work_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_work_image']['separator'] = ' ';
  /* Field: Content: Site Link */
  $handler->display->display_options['fields']['field_work_link_1']['id'] = 'field_work_link_1';
  $handler->display->display_options['fields']['field_work_link_1']['table'] = 'field_data_field_work_link';
  $handler->display->display_options['fields']['field_work_link_1']['field'] = 'field_work_link';
  $handler->display->display_options['fields']['field_work_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_work_link_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_work_link_1']['alter']['text'] = '<a href=[field_work_link_1-url] target="_blank">[field_work_image]</a>';
  $handler->display->display_options['fields']['field_work_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_link_1']['element_wrapper_class'] = 'content-image';
  $handler->display->display_options['fields']['field_work_link_1']['click_sort_column'] = 'url';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_work_category']['id'] = 'field_work_category';
  $handler->display->display_options['fields']['field_work_category']['table'] = 'field_data_field_work_category';
  $handler->display->display_options['fields']['field_work_category']['field'] = 'field_work_category';
  $handler->display->display_options['fields']['field_work_category']['label'] = '';
  $handler->display->display_options['fields']['field_work_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_category']['element_wrapper_class'] = 'content-as-flag';
  $handler->display->display_options['fields']['field_work_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_work_category']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Site Link */
  $handler->display->display_options['fields']['field_work_link']['id'] = 'field_work_link';
  $handler->display->display_options['fields']['field_work_link']['table'] = 'field_data_field_work_link';
  $handler->display->display_options['fields']['field_work_link']['field'] = 'field_work_link';
  $handler->display->display_options['fields']['field_work_link']['label'] = '';
  $handler->display->display_options['fields']['field_work_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_work_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_link']['click_sort_column'] = 'url';
  /* Field: Content: Client Testimonials */
  $handler->display->display_options['fields']['field_client_testimonials']['id'] = 'field_client_testimonials';
  $handler->display->display_options['fields']['field_client_testimonials']['table'] = 'field_data_field_client_testimonials';
  $handler->display->display_options['fields']['field_client_testimonials']['field'] = 'field_client_testimonials';
  $handler->display->display_options['fields']['field_client_testimonials']['label'] = '';
  $handler->display->display_options['fields']['field_client_testimonials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_client_testimonials']['alter']['text'] = '<div class="content-title">[field_work_link]</div>
<div class="content-testimonials">[field_client_testimonials]</div>';
  $handler->display->display_options['fields']['field_client_testimonials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_client_testimonials']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_client_testimonials']['element_wrapper_class'] = 'content-data';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter_1']['id'] = 'counter_1';
  $handler->display->display_options['fields']['counter_1']['table'] = 'views';
  $handler->display->display_options['fields']['counter_1']['field'] = 'counter';
  $handler->display->display_options['fields']['counter_1']['label'] = '';
  $handler->display->display_options['fields']['counter_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter_1']['counter_start'] = '1';
  /* Sort criterion: Flags: Flagged */
  $handler->display->display_options['sorts']['flagged']['id'] = 'flagged';
  $handler->display->display_options['sorts']['flagged']['table'] = 'flagging';
  $handler->display->display_options['sorts']['flagged']['field'] = 'flagged';
  $handler->display->display_options['sorts']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['sorts']['flagged']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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

  /* Display: Home Page Portfolio */
  $handler = $view->new_display('block', 'Home Page Portfolio', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['php_output'] = '<?php
print l(\'View more projects in our portfolio\', \'portfolio\', array(\'class\' => array(\'view-portfolio-link\')));
?>
';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portfolio';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'portfolio';

  /* Display: Home Page Portfolio for tablet */
  $handler = $view->new_display('block', 'Home Page Portfolio for tablet', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['php_output'] = '<?php
print l(\'View more projects in our portfolio\', \'portfolio\', array(\'class\' => array(\'view-portfolio-link\')));
?>
';
  $export['our_portfolio'] = $view;

  return $export;
}
