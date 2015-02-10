<?php
/**
 * @file
 * happywedding.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function happywedding_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'search_vendors';
  $mini->category = '';
  $mini->admin_title = 'search vendors';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd679d7bf-b16d-4ad0-9c20-458c5e405059';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-08a9d61e-6449-4653-b2fa-219be0cbdbfd';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'search vendors',
      'title' => 'Search Vendors',
      'body' => '<?php
echo _happywedding_render_searchbox();
?>
',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '08a9d61e-6449-4653-b2fa-219be0cbdbfd';
    $display->content['new-08a9d61e-6449-4653-b2fa-219be0cbdbfd'] = $pane;
    $display->panels['middle'][0] = 'new-08a9d61e-6449-4653-b2fa-219be0cbdbfd';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-08a9d61e-6449-4653-b2fa-219be0cbdbfd';
  $mini->display = $display;
  $export['search_vendors'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'vendors_navigation';
  $mini->category = '';
  $mini->admin_title = 'Vendors navigation';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3ac4f9d1-5c00-4d14-beb6-4ab347b50fce';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-338134b8-38bf-4ffb-87e1-f73fc5065e89';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'vendors navigation',
      'title' => 'Vendors Navigation',
      'body' => '<?php
echo _happywedding_render_vendors_navigation();
?>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '338134b8-38bf-4ffb-87e1-f73fc5065e89';
    $display->content['new-338134b8-38bf-4ffb-87e1-f73fc5065e89'] = $pane;
    $display->panels['middle'][0] = 'new-338134b8-38bf-4ffb-87e1-f73fc5065e89';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-338134b8-38bf-4ffb-87e1-f73fc5065e89';
  $mini->display = $display;
  $export['vendors_navigation'] = $mini;

  return $export;
}
