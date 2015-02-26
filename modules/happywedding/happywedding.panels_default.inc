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
  $mini->name = 'create_account_top';
  $mini->category = '';
  $mini->admin_title = 'Create Account Top';
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
  $display->title = 'Create New Account';
  $display->uuid = '6cabb789-74d8-4732-887c-8be9d77feea5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5f8e61e3-f9ac-4e0a-bbc0-36328f9775c6';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p style="text-align: center;">You can create an account or logn with.</p>',
      'format' => 'filtered_html',
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
    $pane->uuid = '5f8e61e3-f9ac-4e0a-bbc0-36328f9775c6';
    $display->content['new-5f8e61e3-f9ac-4e0a-bbc0-36328f9775c6'] = $pane;
    $display->panels['middle'][0] = 'new-5f8e61e3-f9ac-4e0a-bbc0-36328f9775c6';
    $pane = new stdClass();
    $pane->pid = 'new-5a66735f-e565-4c85-8deb-405eda4dcc79';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'fboauth-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5a66735f-e565-4c85-8deb-405eda4dcc79';
    $display->content['new-5a66735f-e565-4c85-8deb-405eda4dcc79'] = $pane;
    $display->panels['middle'][1] = 'new-5a66735f-e565-4c85-8deb-405eda4dcc79';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5f8e61e3-f9ac-4e0a-bbc0-36328f9775c6';
  $mini->display = $display;
  $export['create_account_top'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'not_member';
  $mini->category = '';
  $mini->admin_title = 'Not member';
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
  $display->title = 'NOT A MEMBER?';
  $display->uuid = 'a3af8abc-903b-4618-80a2-d1ec655d1048';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2473b24e-d8ee-4af8-94a8-46b0254c125c';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>SIGN UP FOR HAPPY WEDDING LIFE</p>
<p>Use your preferred social network</p>',
      'format' => 'filtered_html',
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
    $pane->uuid = '2473b24e-d8ee-4af8-94a8-46b0254c125c';
    $display->content['new-2473b24e-d8ee-4af8-94a8-46b0254c125c'] = $pane;
    $display->panels['middle'][0] = 'new-2473b24e-d8ee-4af8-94a8-46b0254c125c';
    $pane = new stdClass();
    $pane->pid = 'new-bbb1b0b3-16bf-40d5-bd0d-929403cb958a';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'fboauth-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bbb1b0b3-16bf-40d5-bd0d-929403cb958a';
    $display->content['new-bbb1b0b3-16bf-40d5-bd0d-929403cb958a'] = $pane;
    $display->panels['middle'][1] = 'new-bbb1b0b3-16bf-40d5-bd0d-929403cb958a';
    $pane = new stdClass();
    $pane->pid = 'new-33a434b6-d816-4abf-a2de-cf9120f0a92a';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>HAPPY WEDDING LIFE TO FIND YOUR WEDDING INSPIRATION, IDEA, VENDORS and GET WEDDING LIFE NEWS.</p>
<p><a class=\'register button\' href="/user/register">JOIN FOR FREE</a></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '33a434b6-d816-4abf-a2de-cf9120f0a92a';
    $display->content['new-33a434b6-d816-4abf-a2de-cf9120f0a92a'] = $pane;
    $display->panels['middle'][2] = 'new-33a434b6-d816-4abf-a2de-cf9120f0a92a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2473b24e-d8ee-4af8-94a8-46b0254c125c';
  $mini->display = $display;
  $export['not_member'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'register_description';
  $mini->category = '';
  $mini->admin_title = 'Register description';
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
  $display->uuid = '8066efd0-b0f1-499d-9a5b-f5803a82c4b8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f759b9fa-cb8f-41cc-9549-bb2b535a3007';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h2>&nbsp;</h2><h2 style="text-align: center;"><span style="font-family:tahoma,geneva,sans-serif"><strong>Join now and get everything you need to plan your wedding!</strong></span></h2><ul style="margin-left: 80px;"><li style="margin-left: 40px;">Happy Wedding life is providing up to--the-minute advice on styles and trends plus in-depth information that helps you plan your wedding day, your honeymoon, and prepare for your new life together.<br>&nbsp;</li><li style="margin-left: 40px;">Happy Wedding life offers trusted advice from real Brides.<br>You can find, select and compare wedding vendors from several categories.<br>&nbsp;</li><li style="margin-left: 40px;">You can connect with other brides-to-be in our community.</li></ul>',
      'format' => 'filtered_html',
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
    $pane->uuid = 'f759b9fa-cb8f-41cc-9549-bb2b535a3007';
    $display->content['new-f759b9fa-cb8f-41cc-9549-bb2b535a3007'] = $pane;
    $display->panels['middle'][0] = 'new-f759b9fa-cb8f-41cc-9549-bb2b535a3007';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f759b9fa-cb8f-41cc-9549-bb2b535a3007';
  $mini->display = $display;
  $export['register_description'] = $mini;

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
  $mini->name = 'sign_in_block';
  $mini->category = '';
  $mini->admin_title = 'sign in block';
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
  $display->title = 'SIGN IN TO HAPPY WEDDING LIFE';
  $display->uuid = '3beaef84-f96a-4ca9-bade-40734170e21d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c5d30942-79e6-47f4-9cc0-da9a1da4940e';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Use your preferred social network</p>',
      'format' => 'filtered_html',
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
    $pane->uuid = 'c5d30942-79e6-47f4-9cc0-da9a1da4940e';
    $display->content['new-c5d30942-79e6-47f4-9cc0-da9a1da4940e'] = $pane;
    $display->panels['middle'][0] = 'new-c5d30942-79e6-47f4-9cc0-da9a1da4940e';
    $pane = new stdClass();
    $pane->pid = 'new-b366e14c-b457-487a-acfe-da0891538400';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'fboauth-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b366e14c-b457-487a-acfe-da0891538400';
    $display->content['new-b366e14c-b457-487a-acfe-da0891538400'] = $pane;
    $display->panels['middle'][1] = 'new-b366e14c-b457-487a-acfe-da0891538400';
    $pane = new stdClass();
    $pane->pid = 'new-afe7de0b-16de-4d2d-a72c-a9de1e546fbe';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'SIGN IN TO YOUR HAPPY WEDDING LIFE ACCOUNT',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'afe7de0b-16de-4d2d-a72c-a9de1e546fbe';
    $display->content['new-afe7de0b-16de-4d2d-a72c-a9de1e546fbe'] = $pane;
    $display->panels['middle'][2] = 'new-afe7de0b-16de-4d2d-a72c-a9de1e546fbe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c5d30942-79e6-47f4-9cc0-da9a1da4940e';
  $mini->display = $display;
  $export['sign_in_block'] = $mini;

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
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'context',
      ),
    );
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
