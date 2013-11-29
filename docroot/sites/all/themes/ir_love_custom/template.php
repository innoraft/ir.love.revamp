<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * IR-Love theme.
 */
function ir_love_custom_preprocess_node(&$variables, $hook) {
  $node = $variables['node'];
  if ($node->type == 'blog') {
    $variables['date'] = isset($variables['date']) ? date("M d, Y", strtotime($variables['date'])) : null;
    $variables['comment_number'] = isset($variables['comment_count']) ? $variables['comment_count'] : null;
    $link_variable = isset($variables['content']['links']) ? $variables['content']['links'] : null;
    $node_name_link = isset($link_variable['node']) ? $link_variable['node'] : null;
    $blogger_name_link = isset($link_variable['blog']) ? $link_variable['blog'] : null;
    $comment_number_link = isset($link_variable['comment']) ? $link_variable['comment'] : null;
    $variables['blogger_name_link'] = $blogger_name_link;
    $variables['node_name_link'] = $node_name_link;
    unset($link_variable['node']);
    unset($link_variable['blog']);
    $variables['comment_number_link'] = $link_variable;
    if (isset($node->view->human_name)) {
      $variables['check_content_come_from_view'] = "page_from_view";
    }
  }
}
