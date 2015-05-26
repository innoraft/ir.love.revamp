<?php
/**
 * @file
 * front_section_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function front_section_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'front-content';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'front_section';
  $fe_block_boxes->body = '<?php 
global $base_url;
drupal_theme_initialize();

if (!$logo = theme_get_setting(\'logo_path\')) {
  $logo = theme_get_setting(\'logo\');
}

$menu_block = module_invoke(\'menu\', \'block_view\', \'main-menu\');
$content_right_first_block = module_invoke(\'block\', \'block_view\', \'2\');
$social_block = module_invoke(\'block\',\'block_view\',\'5\');

$variables = array(
  \'path\' =>  $logo, 
  \'alt\' => \'innoraft\',
  \'title\' => \'Innoraft\',
  \'width\' => \'140px\',
  \'height\' => \'140px\',
  \'attributes\' => array(
    \'class\' => \'innoraft-logo\',
  ),
);

$logo = theme(\'image\', $variables);

$site_slogan = variable_get(\'site_slogan\');

?>
<div class="container">
	<div class="column-wrap">

		<div class="column c-left ">
			<div class=\'front-navbar-header\'>
				<button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
      		<span class="icon-bar"></span>
      		<span class="icon-bar"></span>
      		<span class="icon-bar"></span>
    		</button>
    		<div class=\'contact\'><a href="#">Contact us</a></div>
    	</div>
			<div class="front-navbar-collapse collapse">
        <?php print render($menu_block[\'content\']); ?>
      </div>			
		</div>

		<div class="column c-middle">
			<h1 class="logo">
				<?php echo $logo; ?>
				<span><?php echo $site_slogan; ?></span>
			</h1>
			<div class="other-logo">
				<img alt="drupal logo" src="/sites/all/themes/parallax/images/druplicon.large_.jpg" />
				<img alt="amazon service logo" src="/sites/all/themes/parallax/images/amazon.jpg" />
			</div>				
		</div>
			
		<div class="column c-right">
			
					<?php print render($social_block[\'content\']); ?>
			<div class="intro-features">

				<div class="icon-block icon-block-horizontal box-float" data-transition-delay="100" style="transition-delay: 100ms; -webkit-transition-delay: 100ms;">
					<?php print render($content_right_first_block[\'content\']); ?>
				</div>

				<div class="icon-block icon-block-horizontal box-float" data-transition-delay="300" style="transition-delay: 300ms; -webkit-transition-delay: 300ms;">
					<?php print render($content_right_first_block[\'content\']); ?>
				</div>

				<div class="icon-block icon-block-horizontal box-float" data-transition-delay="500" style="transition-delay: 500ms; -webkit-transition-delay: 500ms;">
					<?php print render($content_right_first_block[\'content\']); ?>
				</div>
			</div>					
		</div>

	</div>
</div>
';

  $export['front_section'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'second sections';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'second_sections';
  $fe_block_boxes->body = '<?php 
global $base_url;
drupal_theme_initialize();

if (!$logo = theme_get_setting(\'logo_path\')) {
  $logo = theme_get_setting(\'logo\');
}

$variables = array(
  \'path\' =>  $logo, 
  \'alt\' => \'innoraft\',
  \'title\' => \'Innoraft\',
  \'width\' => \'140px\',
  \'height\' => \'140px\',
  \'attributes\' => array(
    \'class\' => \'innoraft-logo\',
  ),
);

$logo = theme(\'image\', $variables);

$site_name = variable_get(\'site_name\');
$social_block = module_invoke(\'social_media_links\',\'block_view\',\'social-media-links\');

 ?>
        <div class="header-wrap">
          <header class=\'wrap-sticy\'>
            <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
              <span class="icon-bar"></span>
              <span class="icon-bar"></span>
              <span class="icon-bar"></span>
            </button>
            <div class=\'logo-name\'>
              <a href="<?php echo $base_url; ?>"/><?php echo $logo; ?><span><?php echo $site_name; ?> </a>
            </div>
            <div class=\'right-toolbar\'>
              <a href=\'#\'/> Contact </a>
              <?php print render($social_block[\'content\']); ?>
            </div>
          </header>
        </div>
        <div class=\'testimonial-content\'>
          <?php echo block_render(\'views\', \'our_portfolio-block\'); ?>
        </div>
';

  $export['second_sections'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'social icon block';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'social_block';
  $fe_block_boxes->body = '<div class="social-buttons">
<ul>
<li><a href="www.facebook.com"><img src="/sites/all/themes/parallax/images/twitter.png" /></a></li>
	<li><a href="www.facebook.com"><img src="/sites/all/themes/parallax/images/facebook.png" /></a></li>
	<li><a href="www.facebook.com"><img src="/sites/all/themes/parallax/images/google_plus.png" /></a></li>
</ul>
</div>
';

  $export['social_block'] = $fe_block_boxes;

  return $export;
}
