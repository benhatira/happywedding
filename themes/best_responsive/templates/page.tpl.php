<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/garland.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>
<div id="wrap" class="clearfix">
  <div id="header-wrap">
    <?php if (theme_get_setting('socialicon_display', 'best_responsive')): ?>
    <?php 
    $twitter_url = check_plain(theme_get_setting('twitter_url', 'best_responsive')); 
    $facebook_url = check_plain(theme_get_setting('facebook_url', 'best_responsive')); 
    $google_plus_url = check_plain(theme_get_setting('google_plus_url', 'best_responsive')); 
    $pinterest_url = check_plain(theme_get_setting('pinterest_url', 'best_responsive'));
    ?>
<!--
    <div id="pre-header" class="clearfix">
      <ul id="header-social" class="clearfix">
        <?php if ($facebook_url): ?><li>
          <a target="_blank" title="<?php print $site_name; ?> in Facebook" href="<?php print $facebook_url; ?>"><img alt="Facebook" src="<?php print base_path() . drupal_get_path('theme', 'best_responsive') . '/images/social/facebook.png'; ?>"> </a>
        </li><?php endif; ?>
        <?php if ($twitter_url): ?><li>
          <a target="_blank" title="<?php print $site_name; ?> in Twitter" href="<?php print $twitter_url; ?>"><img alt="Twitter" src="<?php print base_path() . drupal_get_path('theme', 'best_responsive') . '/images/social/twitter.png'; ?>"> </a>
        </li><?php endif; ?>
        <?php if ($google_plus_url): ?><li>
          <a target="_blank" title="<?php print $site_name; ?> in Google+" href="<?php print $google_plus_url; ?>"><img alt="Google+" src="<?php print base_path() . drupal_get_path('theme', 'best_responsive') . '/images/social/google.png'; ?>"> </a>
        </li><?php endif; ?>
        <?php if ($pinterest_url): ?><li>
          <a target="_blank" title="<?php print $site_name; ?> in Pinterest" href="<?php print $pinterest_url; ?>"><img alt="Pinterest" src="<?php print base_path() . drupal_get_path('theme', 'best_responsive') . '/images/social/pinterest.png'; ?>"> </a>
        </li><?php endif; ?>
        <li>
          <a target="_blank" title="<?php print $site_name; ?> in RSS" href="<?php print $front_page; ?>rss.xml"><img alt="RSS" src="<?php print base_path() . drupal_get_path('theme', 'best_responsive') . '/images/social/rss.png'; ?>"> </a>
        </li>
      </ul>
    </div>
-->
    <?php endif; ?>
    <header id="header" class="clearfix">
      <?php print  best_responsive_login_menu($logged_in); ?>
      <div id="logo">
        <?php if ($logo): ?><div id="site-logo"><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a></div><?php endif; ?>
<!--
        <h1 id="site-name">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><span><?php print $site_name; ?></span></a>
        </h1>
-->
      </div>
      <nav id="navigation" role="navigation">
        <div id="main-menu">
          <?php 
            if (module_exists('i18n_menu')) {
              $main_menu_tree = i18n_menu_translated_tree(variable_get('menu_main_links_source', 'main-menu'));
            } else {
              $main_menu_tree = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
            }
            print drupal_render($main_menu_tree);
          ?>
        </div>
        
        <?php
        $block = module_invoke('search', 'block_view');
        print render($block['content']);
        ?>
        
        <?php if ($is_front): ?>
        <?php if ($site_slogan): ?><h2 id="site-slogan"><?php print $site_slogan; ?></h2><?php endif; ?>
        <?php if (theme_get_setting('slideshow_display','best_responsive')): ?>
        <div id="home-slider">
          <div class="flexslider-container">
            <div id="single-post-slider" class="flexslider"  style="position: relative; top: 0px; left: 0px; width: 1140px;
        height: 400px; overflow: hidden;">
        <!-- Slides Container -->
              <div u="slides" style="cursor: move; position: absolute; left: 0px; top: 0px; width: 1140px; height: 400px;
            overflow: hidden;">
                <?php foreach($ads as $key => $ad): ?>
                  <div><img u="image" src="<?php print $ad["url"]; ?>" width="800px" alt="<?php print $ad["title"];?>" /></div>
                <?php endforeach; ?>
                
              </div>
              <!-- Arrow Left -->
              <span u="arrowleft" class="jssora13l" style="width: 40px; height: 50px; top: 153px; left: 0px;">
              </span>
              <!-- Arrow Right -->
              <span u="arrowright" class="jssora13r" style="width: 40px; height: 50px; top: 153px; right: 0px">
              </span>
              <!-- Arrow Navigator Skin End -->
                      <!-- bullet navigator container -->
              <div u="navigator" class="jssorb03" style="position: absolute; bottom: 35px; right: 16px;">
                  <!-- bullet navigator item prototype -->
                  <div u="prototype" style="position: absolute; width: 21px; height: 21px; text-align:center; line-height:21px; color:white; font-size:12px;"></div>
              </div>
<!--
              <ul class="slides">
                <?php foreach($ads as $key => $ad): ?>
                  <li class="slide"><img src="<?php print $ad["url"]; ?>" width="800px" alt="<?php print $ad["title"];?>"/></li>
                <?php endforeach; ?>
              </ul> /slides 
-->

            </div><!-- /flexslider -->
          </div>
        </div>
        <?php endif; ?>
        <?php endif; ?>
        
        <div id="secondary-menu">
          <?php 
            if (module_exists('i18n_menu')) {
              $main_menu_tree = i18n_menu_translated_tree('menu-secondary-menu');
            } else {
              $main_menu_tree = menu_tree('menu-secondary-menu');
            }
            print drupal_render($main_menu_tree);
          ?>
        </div>
      </nav>
    </header>
  </div>

  <div id="main-content" class="clearfix">
    <?php if($page['preface_first'] || $page['preface_middle'] || $page['preface_last'] || $page['header']) : ?>
    <div id="preface-area" class="clearfix">
      <?php if($page['preface_first'] || $page['preface_middle'] || $page['preface_last']) : ?>
      <div id="preface-block-wrap" class="clearfix">
        <?php if($page['preface_first']): ?><div class="preface-block">
          <?php print render ($page['preface_first']); ?>
        </div><?php endif; ?>
        <?php if($page['preface_middle']): ?><div class="preface-block">
          <?php print render ($page['preface_middle']); ?>
        </div><?php endif; ?>
        <?php if($page['preface_last']): ?><div class="preface-block remove-margin">
          <?php print render ($page['preface_last']); ?>
        </div><?php endif; ?>
      </div>
      <div class="clear"></div>
      <?php endif; ?>
      <?php print render($page['header']); ?>
    </div>
    <?php endif; ?>

    <?php $sidebarclass=" "; if($page['sidebar_first']) { $sidebarclass="sidebar-bg"; } ?>
    <div id="primary" class="container <?php print $sidebarclass; ?> clearfix">
      <section id="content" role="main" class="clearfix">
        <?php if (theme_get_setting('breadcrumbs')): ?><?php if ($breadcrumb): ?><div id="breadcrumbs"><?php print $breadcrumb; ?></div><?php endif;?><?php endif; ?>
        <?php print $messages; ?>
        <?php if ($page['content_top']): ?><div id="content_top"><?php print render($page['content_top']); ?></div><?php endif; ?>
        <div id="content-wrap">
          <?php print render($title_prefix); ?>
          <?php if ($title): ?><h1 class="page-title"><?php print $title; ?></h1><?php endif; ?>
          <?php print render($title_suffix); ?>
          <?php if (!empty($tabs['#primary'])): ?><div class="tabs-wrapper clearfix"><?php print render($tabs); ?></div><?php endif; ?>
          <?php print render($page['help']); ?>
          <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
          <?php print render($page['content']); ?>
        </div>
      </section>
      <?php if ($page['sidebar_first']): ?>
        <aside id="sidebar" role="complementary">
         <?php print render($page['sidebar_first']); ?>
        </aside> 
      <?php endif; ?>
    </div>

    <div class="clear"></div>
  </div>
  
  
  
  
  <footer id="footer-bottom">
    <div id="footer-area" class="clearfix">
      <div id="footer-block-wrap" class="clearfix">
        <div class="footer-block first">
          <div class='title'><?php print t("WHAT'S HAPPY WEDDING LIFE");?></div>
          <div class='description'>
            <?php print t("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat."); ?>
          </div>
          
        </div>
        <div class="footer-block middle">
          <div class='title'><?php print t("ABOUT US");?></div>
          <div class='description'>
            <ul>
              <li><a href="/company"><?php print t("COMPANY"); ?></a></li>
              <li><a href="/contactus"><?php print t("CONTACT US"); ?></a></li>
              <li><a href="/bo/vendor/login"><?php print t("TO VENDOR"); ?></a></li>
              <li><a href="/advertise"><?php print t("TO ADVERTISE"); ?></a></li>
            </ul>
          </div>
        </div>
        <div class="footer-block last remove-margin">
          <div class='title'><?php print t("Social Media Channels");?></div>
<!--
          <div class='description'>
            <?php print t("Connect with Happywedding.life on Social media for real-time updates and exclusive content."); ?>
          </div>
-->
          <div id="header-social" class="clearfix">
            <ul>
            <?php if ($facebook_url): ?>
              <li><a target="_blank" title="<?php print $site_name; ?> in Facebook" href="<?php print $facebook_url; ?>"><div class='facebook social'></div></a>
              </li><?php endif; ?>
            <?php if ($twitter_url): ?>
              <li><a target="_blank" title="<?php print $site_name; ?> in Twitter" href="<?php print $twitter_url; ?>"><div class='twitter social'></div> </a>
              </li><?php endif; ?>
              <?php if ($google_plus_url): ?>
              <li><a target="_blank" title="<?php print $site_name; ?> in Google+" href="<?php print $google_plus_url; ?>"><div class='gplus social'></div> </a>
              </li><?php endif; ?>
              <?php if ($pinterest_url): ?>
              <li><a target="_blank" title="<?php print $site_name; ?> in Pinterest" href="<?php print $pinterest_url; ?>"><div class='pinterest social'></div> </a>
              </li><?php endif; ?>
            </ul>
          </div>
        </div>
      </div>
      <div class='copyright'><?php print t('All rights are reserved');?> @ Happywedding.co,ltd 2015</div>
    <div class="clear"></div>
  </footer>
  
  <!--<?php if ($page['footer_first'] || $page['footer_second'] || $page['footer_third']  || $page['footer']): ?>
  <footer id="footer-bottom">
    <div id="footer-area" class="clearfix">
      <?php if ($page['footer_first'] || $page['footer_second'] || $page['footer_third']): ?>
        <div id="footer-block-wrap" class="clearfix">
          <?php if($page['footer_first']): ?><div class="footer-block">
            <?php print render ($page['footer_first']); ?>
          </div><?php endif; ?>
          <?php if($page['footer_second']): ?><div class="footer-block">
            <?php print render ($page['footer_second']); ?>
          </div><?php endif; ?>
          <?php if($page['footer_third']): ?><div class="footer-block remove-margin">
            <?php print render ($page['footer_third']); ?>
          </div><?php endif; ?>
        </div>
        <div class="clear"></div>
      <?php endif; ?>
      
      <?php print render($page['footer']); ?>
    </div>
  </footer>
  <?php endif; ?>
-->
<!--
  <div id="copyright">
    <?php print t('Copyright'); ?> &copy; <?php echo date("Y"); ?>, <a href="<?php print $front_page; ?>"><?php print $site_name; ?></a>. <?php print t('Theme by'); ?>  <a href="http://www.devsaran.com" target="_blank">Devsaran</a>
  </div>
-->
</div>