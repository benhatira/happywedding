<?php if (theme_get_setting('rubik_show_branding')): ?>
<div id='branding'><div class='limiter clearfix'>
  <div class='breadcrumb clearfix'><?php print $breadcrumb ?></div>
  <?php if (!$overlay && isset($secondary_menu)) : ?>
    <?php print theme('links', array('links' => $secondary_menu, 'attributes' => array('class' => 'links secondary-menu'))) ?>
  <?php endif; ?>
</div></div>
<?php endif; ?>

<div id='page-title'><div class='limiter clearfix'>
  <h1 class='page-title <?php print $page_icon_class ?>'>
    <?php if (!empty($page_icon_class)): ?><span class='icon'></span><?php endif; ?>
    <?php if ($title) print $title ?>
  </h1>
  <div class='user-avatar'><?php print $user_avatar; ?></div>
  
  <?php if ($action_links): ?>
    <ul class='action-links links clearfix'><?php print render($action_links) ?></ul>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  
  <div class='tabs clearfix'>
    <?php if ($primary_local_tasks): ?>
      <ul class='primary-tabs links clearfix'><?php print render($primary_local_tasks) ?></ul>
    <?php endif; ?>
  </div>
  <div class='clearfix'></div>
  <?php print render($title_prefix); ?>
</div></div>

<div class='content-wrapper'>

  <div id='page'><div id='main-content' class='limiter clearfix'>
    <?php if ($page['help']) print render($page['help']) ?>
    <div id='content' class='page-content clearfix'>
      <?php if (!empty($page['content'])) print render($page['content']) ?>
    </div>
  </div></div>
  
  <?php if ($show_messages && $messages): ?>
  <div id='console'><div class='limiter clearfix'><?php print $messages; ?></div></div>
  <?php endif; ?>
</div>

<div id='footer' class='clearfix'>
  <div class='block'>
    <div class='image image-1'></div>
    <div class='title'><?php print t("Easy Customer Engagement");?></div>
    <div class='description'><?php print t("Quickly & Easily Engage with customer enquiry like never before through Get A Quote function.");?></div>
  </div>
  <div class='block'>
    <div class='image image-2'></div>
    <div class='title'><?php print t("Feature Your Business");?></div>
    <div class='description'><?php print t("Create business page with full company description and contact details.It's simple and effective way to communicate with customers.");?></div>
  </div> 
  <div class='block'>
    <div class='image image-3'></div>
    <div class='title'><?php print t("Personalize Url");?></div>
    <div class='description'><?php print t("Own a busness page with link. (e.g: http://www.happywedding.life/bridalhouse)");?></div>
  </div>
  <div class='block'>
    <div class='image image-4'></div>
    <div class='title'><?php print t("Easily Manage Leads, contact and customers into one place");?></div>
    <div class='description'><?php print t("Create and account management page that allows you to manage inquiries and potential customers.");?></div>
  </div>

  
  <?php if ($feed_icons): ?>
    <div class='feed-icons clearfix'>
      <label><?php print t('Feeds') ?></label>
      <?php print $feed_icons ?>
    </div>
  <?php endif; ?>
</div>
