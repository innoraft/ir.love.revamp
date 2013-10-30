<div<?php print $attributes; ?>>
  <header class="l-header" role="banner">
    <div class="l-top-nav">
      <?php print render($page['top_navigation']); ?>
    </div>
    <div class="l-branding">
      <?php if ($logo): ?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
      <?php endif; ?>
      <div class="ir_custom_logo">
        <div class="ir-logo">
        <div class="ir-custom-logo-icons">
          <div id="ir-drupal" class="ir-main-idea">
              <i class="fa fa-cog ir-idea-font-icon"></i><span class="ir-idea-text">Drupal</span>
          </div>
          <div id="ir-love" class="ir-main-idea">
              <i class="fa fa-heart ir-idea-font-icon"></i><span class="ir-idea-text">Love</span>
          </div>
          <div id="ir-dedication" class="ir-main-idea">
              <i class="fa fa-trophy ir-idea-font-icon"></i><span class="ir-idea-text">Dedication</span>
          </div>
        </div>
      <?php if ($site_name || $site_slogan): ?>
        <?php if ($site_name): ?>
          <div class="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
          </div>
        <?php endif; ?>
      <?php endif; ?>
    </div>
      </div>
      <div class="ir-slogan">
        <?php if ($site_slogan): ?>
          <div class="site-slogan"><?php print $site_slogan; ?></div>
        <?php endif; ?>
      </div>
      <?php print render($page['branding']); ?>
    </div>

    <?php //print render($page['header']); ?>
    <?php //print render($page['navigation']); ?>
  </header>

  <div class="l-main">
    <div class="l-content" role="main">
      <?php //print render($page['highlighted']); ?>
      <?php //print $breadcrumb; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php //print render($tabs); ?>
      <?php //print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>

    <?php //print render($page['sidebar_first']); ?>
    <?php //print render($page['sidebar_second']); ?>
  </div>

  <footer class="l-footer" role="contentinfo">
    <?php print render($page['footer']); ?>
  </footer>
</div>
