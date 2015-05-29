<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<?php
//dpm($fields);
if ($view->row_index % 2 == 0): ?>

  <div class="listing-list-left">
  <div class="listing-list-left-inner">
    <?php if(isset($fields['field_work_link_1'])):?>
      <?php //dpm($fields);?>
      <?php if (!empty($fields['field_work_link_1']->separator)): ?>
        <?php print $fields['field_work_link_1']->separator; ?>
      <?php endif; ?>
      <?php print $fields['field_work_link_1']->wrapper_prefix; ?>
        <?php print $fields['field_work_link_1']->label_html; ?>
        <?php print $fields['field_work_link_1']->content; ?>
      <?php print $fields['field_work_link_1']->wrapper_suffix; ?>
      <?php unset($fields['field_work_link_1']);?>
    <?php endif;?>
  </div>
 </div>

<div class="listing-list-right">
  <?php foreach ($fields as $id => $field): ?>
    <?php if (!empty($field->separator)): ?>
      <?php print $field->separator; ?>
    <?php endif; ?>
  
    <?php print $field->wrapper_prefix; ?>
      <?php print $field->label_html; ?>
      <?php //dpm($field); ?>
      <?php print $field->content; ?>
    <?php print $field->wrapper_suffix; ?>
  <?php endforeach; ?>
</div>

<?php else: ?>

  <div class="listing-list-left">
    <div class="listing-list-left-inner">

<?php if(isset($fields['field_work_category'])):?>
      <?php //dpm($fields);?>
      <?php if (!empty($fields['field_work_category']->separator)): ?>
        <?php print $fields['field_work_category']->separator; ?>
      <?php endif; ?>
      <?php print $fields['field_work_category']->wrapper_prefix; ?>
        <?php print $fields['field_work_category']->label_html; ?>
        <?php print $fields['field_work_category']->content; ?>
      <?php print $fields['field_work_category']->wrapper_suffix; ?>
      
    <?php endif;?>

    <?php if(isset($fields['field_client_testimonials'])):?>
      <?php //dpm($fields);?>
      <?php if (!empty($fields['field_client_testimonials']->separator)): ?>
        <?php print $fields['field_client_testimonials']->separator; ?>
      <?php endif; ?>
      <?php print $fields['field_client_testimonials']->wrapper_prefix; ?>
        <?php print $fields['field_client_testimonials']->label_html; ?>
        <?php print $fields['field_client_testimonials']->content; ?>
      <?php print $fields['field_client_testimonials']->wrapper_suffix; ?>
      
    <?php endif;?>


  </div>
</div>

  <div class="listing-list-right">
  
    <?php if(isset($fields['field_work_link_1'])):?>
      <?php //dpm($fields);?>
      <?php if (!empty($fields['field_work_link_1']->separator)): ?>
        <?php print $fields['field_work_link_1']->separator; ?>
      <?php endif; ?>
      <?php print $fields['field_work_link_1']->wrapper_prefix; ?>
        <?php print $fields['field_work_link_1']->label_html; ?>
        <?php print $fields['field_work_link_1']->content; ?>
      <?php print $fields['field_work_link_1']->wrapper_suffix; ?>
      
    <?php endif;?>
  
 </div>

<?php endif; ?>

