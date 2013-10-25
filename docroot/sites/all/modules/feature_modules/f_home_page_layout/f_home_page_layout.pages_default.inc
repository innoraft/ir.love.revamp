<?php
/**
 * @file
 * f_home_page_layout.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function f_home_page_layout_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front';
  $page->task = 'page';
  $page->admin_title = 'Front';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => 'pane-main-idea',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center Main Idea',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'ir-main-idea ir-main-idea-dedication middle-main-idea-container',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => '_none_',
        ),
        'parent' => 'main',
        'class' => 'pane-main-idea',
      ),
      '_none_' => array(
        'type' => 'region',
        'title' => 'Top Main Idea',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'ir-main-idea ir-main-idea-love top-main-idea-container',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_main_idea',
        ),
        'parent' => 'main',
        'class' => 'pane-main-idea',
      ),
      'bottom_main_idea' => array(
        'type' => 'region',
        'title' => 'Bottom Main Idea',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'ir-main-idea ir-main-idea-tech bottom-main-idea-containre',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      '_none_' => NULL,
      'bottom_main_idea' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'bottom_main_idea';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Drupal',
      'title' => '',
      'body' => '<div class="main-idea-image-container">
<div class="main-idea-image-inner img-love"><img alt="" src="/sites/all/themes/ir_love/images/drupal.png" style="height:90px; width:104px" /></div>
</div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'idea-tech',
      'css_class' => 'content-ir-main-idea bottom-main-idea-container',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['bottom_main_idea'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Dedication',
      'title' => '',
      'body' => '<div class="main-idea-image-container">
<div class="main-idea-image-inner img-love"><img alt="" src="/sites/all/themes/ir_love/images/index.png" style="height:90px; width:104px" /></div>
</div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'idea-dedication',
      'css_class' => 'content-ir-main-idea middle-main-idea-inner',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['center'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = '_none_';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Love',
      'title' => '<none>',
      'body' => '<div class="main-idea-image-container">
<div class="main-idea-image-inner img-love"><img alt="" src="/sites/all/themes/ir_love/images/heart.png" style="height:90px; width:104px" /></div>
</div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'idea-love',
      'css_class' => 'content-ir-main-idea top-main-idea-inner',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['_none_'][0] = 'new-3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front'] = $page;

  return $pages;

}
