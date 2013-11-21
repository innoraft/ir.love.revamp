<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * IR-Love theme.
 */
function ir_love_custom_preprocess_node(&$variables, $hook) {
//  dpm($variables);
  $node = $variables['node'];
//  dpm($node);
  if ($node->type == 'blog') {
    $variables['date'] = date("M d, Y", strtotime($variables['date']));
    $variables['comment_number'] = $variables['comment_count'];
    $link_variable = $variables['content']['links'];
    $node_name_link = $link_variable['node'];
    $blogger_name_link = $link_variable['blog'];
    $comment_number_link = $link_variable['comment'];
    $variables['blogger_name_link'] = $blogger_name_link;
    $variables['node_name_link'] = $node_name_link;
    unset($link_variable['node']);
    unset($link_variable['blog']);
    $variables['comment_number_link'] = $link_variable;
  }
}
