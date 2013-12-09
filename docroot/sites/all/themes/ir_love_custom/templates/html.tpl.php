<?php
/**
 * @file
 * Returns the HTML for the basic html structure of a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728208
 */
?><!DOCTYPE html>

<head>

<link href="//netdna.bootstrapcdn.com/font-awesome/4.0.3/css/font-awesome.css" rel="stylesheet">

<link href='http://fonts.googleapis.com/css?family=Roboto+Condensed' rel='stylesheet' type='text/css'>
<link href='http://fonts.googleapis.com/css?family=Source+Sans+Pro' rel='stylesheet' type='text/css'>
<link href='http://fonts.googleapis.com/css?family=ABeeZee' rel='stylesheet' type='text/css'>
<link href='http://fonts.googleapis.com/css?family=Poiret+One' rel='stylesheet' type='text/css'>
<link href='http://fonts.googleapis.com/css?family=Cantata+One' rel='stylesheet' type='text/css'>

  <?php print $head; ?>
  <title><?php print $head_title; ?></title>

  <meta http-equiv="cleartype" content="on">

  <?php print $styles; ?>

  <!--[if lte IE 8]>
	<script src="<?php //print drupal_get_path('theme', 'ir_love_custom');?>/js/html5.js"></script>
	<![endif]-->

  <script>
    var ie_v8 = false;
  </script>
  <!--[if lte IE 8]>
  <script>
    ie_v8 = true;
  </script>
  <![endif]-->


  <?php print $scripts; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
