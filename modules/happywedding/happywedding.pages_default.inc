<?php
/**
 * @file
 * happywedding.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function happywedding_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'node vendor',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'vendor' => 'vendor',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8f0d5602-53a7-42bf-9427-ab1b57c6bb69';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2e7e3c96-992c-4060-8e4c-303e221b3541';
    $pane->panel = 'bottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'location_map',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2e7e3c96-992c-4060-8e4c-303e221b3541';
    $display->content['new-2e7e3c96-992c-4060-8e4c-303e221b3541'] = $pane;
    $display->panels['bottom'][0] = 'new-2e7e3c96-992c-4060-8e4c-303e221b3541';
    $pane = new stdClass();
    $pane->pid = 'new-7fef071b-0fa6-4dd6-8c23-9bcf8a335731';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'views-gallery-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = '7fef071b-0fa6-4dd6-8c23-9bcf8a335731';
    $display->content['new-7fef071b-0fa6-4dd6-8c23-9bcf8a335731'] = $pane;
    $display->panels['bottom'][1] = 'new-7fef071b-0fa6-4dd6-8c23-9bcf8a335731';
    $pane = new stdClass();
    $pane->pid = 'new-72056c31-b025-4b50-8ef2-e2bd59fc77f0';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'views-vendors_block-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '72056c31-b025-4b50-8ef2-e2bd59fc77f0';
    $display->content['new-72056c31-b025-4b50-8ef2-e2bd59fc77f0'] = $pane;
    $display->panels['bottom'][2] = 'new-72056c31-b025-4b50-8ef2-e2bd59fc77f0';
    $pane = new stdClass();
    $pane->pid = 'new-8cfed45e-0a6b-4556-89b1-422c7a1dfaa7';
    $pane->panel = 'left';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8cfed45e-0a6b-4556-89b1-422c7a1dfaa7';
    $display->content['new-8cfed45e-0a6b-4556-89b1-422c7a1dfaa7'] = $pane;
    $display->panels['left'][0] = 'new-8cfed45e-0a6b-4556-89b1-422c7a1dfaa7';
    $pane = new stdClass();
    $pane->pid = 'new-ea1fc6ee-2a06-4018-9ed9-66aa6a915710';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-vendor_news_view-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = 'ea1fc6ee-2a06-4018-9ed9-66aa6a915710';
    $display->content['new-ea1fc6ee-2a06-4018-9ed9-66aa6a915710'] = $pane;
    $display->panels['left'][1] = 'new-ea1fc6ee-2a06-4018-9ed9-66aa6a915710';
    $pane = new stdClass();
    $pane->pid = 'new-50dffba3-4b27-4a61-b39a-9ec5632e740e';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-vendor_products_view-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '50dffba3-4b27-4a61-b39a-9ec5632e740e';
    $display->content['new-50dffba3-4b27-4a61-b39a-9ec5632e740e'] = $pane;
    $display->panels['left'][2] = 'new-50dffba3-4b27-4a61-b39a-9ec5632e740e';
    $pane = new stdClass();
    $pane->pid = 'new-f80086cd-16eb-45b3-a1e0-1f6ee787b1a2';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-vendor_comments_view-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f80086cd-16eb-45b3-a1e0-1f6ee787b1a2';
    $display->content['new-f80086cd-16eb-45b3-a1e0-1f6ee787b1a2'] = $pane;
    $display->panels['left'][3] = 'new-f80086cd-16eb-45b3-a1e0-1f6ee787b1a2';
    $pane = new stdClass();
    $pane->pid = 'new-18f8b828-5e4f-4cfa-be5c-b7e4c413cde0';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-top_reviews-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '18f8b828-5e4f-4cfa-be5c-b7e4c413cde0';
    $display->content['new-18f8b828-5e4f-4cfa-be5c-b7e4c413cde0'] = $pane;
    $display->panels['right'][0] = 'new-18f8b828-5e4f-4cfa-be5c-b7e4c413cde0';
    $pane = new stdClass();
    $pane->pid = 'new-a11b1d33-47cc-4be4-8612-dbec6301b616';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'location_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a11b1d33-47cc-4be4-8612-dbec6301b616';
    $display->content['new-a11b1d33-47cc-4be4-8612-dbec6301b616'] = $pane;
    $display->panels['top'][0] = 'new-a11b1d33-47cc-4be4-8612-dbec6301b616';
    $pane = new stdClass();
    $pane->pid = 'new-0cccaa28-e45e-4e14-aabd-276263d51bb2';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_vendor_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
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
    $pane->uuid = '0cccaa28-e45e-4e14-aabd-276263d51bb2';
    $display->content['new-0cccaa28-e45e-4e14-aabd-276263d51bb2'] = $pane;
    $display->panels['top'][1] = 'new-0cccaa28-e45e-4e14-aabd-276263d51bb2';
    $pane = new stdClass();
    $pane->pid = 'new-ebdcd0c3-cfc5-4918-9dec-6c2ce1bb3ead';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_vendor_photo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => 'tips_thumbnail',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ebdcd0c3-cfc5-4918-9dec-6c2ce1bb3ead';
    $display->content['new-ebdcd0c3-cfc5-4918-9dec-6c2ce1bb3ead'] = $pane;
    $display->panels['top'][2] = 'new-ebdcd0c3-cfc5-4918-9dec-6c2ce1bb3ead';
    $pane = new stdClass();
    $pane->pid = 'new-0ac34291-e762-448c-9f2c-88a2b3c69574';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'views-vendor_comments_view-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0ac34291-e762-448c-9f2c-88a2b3c69574';
    $display->content['new-0ac34291-e762-448c-9f2c-88a2b3c69574'] = $pane;
    $display->panels['top'][3] = 'new-0ac34291-e762-448c-9f2c-88a2b3c69574';
    $pane = new stdClass();
    $pane->pid = 'new-4ed1c4c9-6faa-4b00-9275-b7eeb82b8b05';
    $pane->panel = 'top';
    $pane->type = 'token';
    $pane->subtype = 'node:field_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4ed1c4c9-6faa-4b00-9275-b7eeb82b8b05';
    $display->content['new-4ed1c4c9-6faa-4b00-9275-b7eeb82b8b05'] = $pane;
    $display->panels['top'][4] = 'new-4ed1c4c9-6faa-4b00-9275-b7eeb82b8b05';
    $pane = new stdClass();
    $pane->pid = 'new-e3610254-9a83-4684-add4-96d0cdc484d5';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<ul class=\'vendor-detail-navigation\'><li>Basic Info.</li><li>Promotion</li><li>Product List</li><li>Reviews</li><li>Gallery</li></ul>',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clear',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e3610254-9a83-4684-add4-96d0cdc484d5';
    $display->content['new-e3610254-9a83-4684-add4-96d0cdc484d5'] = $pane;
    $display->panels['top'][5] = 'new-e3610254-9a83-4684-add4-96d0cdc484d5';
    $pane = new stdClass();
    $pane->pid = 'new-6c0b0372-c7a0-4fa6-805a-028726c285dc';
    $pane->panel = 'top';
    $pane->type = 'token';
    $pane->subtype = 'node:flag-bookmark-link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '6c0b0372-c7a0-4fa6-805a-028726c285dc';
    $display->content['new-6c0b0372-c7a0-4fa6-805a-028726c285dc'] = $pane;
    $display->panels['top'][6] = 'new-6c0b0372-c7a0-4fa6-805a-028726c285dc';
    $pane = new stdClass();
    $pane->pid = 'new-13964be2-99dc-4f5f-8692-89324eea27cd';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'write review',
      'title' => '',
      'body' => '<a class="write-review" href="/comment/reply/%node:nid">Write Review</a>',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '13964be2-99dc-4f5f-8692-89324eea27cd';
    $display->content['new-13964be2-99dc-4f5f-8692-89324eea27cd'] = $pane;
    $display->panels['top'][7] = 'new-13964be2-99dc-4f5f-8692-89324eea27cd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'node tip',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '62560405-8f8d-4e93-a068-9ef2bdd1bcfd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2cb9e92d-f776-4c6a-977e-c3e5a685cd1d';
    $pane->panel = 'left';
    $pane->type = 'token';
    $pane->subtype = 'node:flag-bookmark-link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2cb9e92d-f776-4c6a-977e-c3e5a685cd1d';
    $display->content['new-2cb9e92d-f776-4c6a-977e-c3e5a685cd1d'] = $pane;
    $display->panels['left'][0] = 'new-2cb9e92d-f776-4c6a-977e-c3e5a685cd1d';
    $pane = new stdClass();
    $pane->pid = 'new-0d91f68a-dda7-4f57-aad5-e3fa99d573ab';
    $pane->panel = 'left';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '0d91f68a-dda7-4f57-aad5-e3fa99d573ab';
    $display->content['new-0d91f68a-dda7-4f57-aad5-e3fa99d573ab'] = $pane;
    $display->panels['left'][1] = 'new-0d91f68a-dda7-4f57-aad5-e3fa99d573ab';
    $pane = new stdClass();
    $pane->pid = 'new-ea00aa9e-c137-4eb7-940c-beb7856a70ab';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-subpage_tips-relate_tips';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ea00aa9e-c137-4eb7-940c-beb7856a70ab';
    $display->content['new-ea00aa9e-c137-4eb7-940c-beb7856a70ab'] = $pane;
    $display->panels['left'][2] = 'new-ea00aa9e-c137-4eb7-940c-beb7856a70ab';
    $pane = new stdClass();
    $pane->pid = 'new-71f8d7ae-df54-4067-acb5-71d32154e1a0';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-ads_view-block_1';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '71f8d7ae-df54-4067-acb5-71d32154e1a0';
    $display->content['new-71f8d7ae-df54-4067-acb5-71d32154e1a0'] = $pane;
    $display->panels['right'][0] = 'new-71f8d7ae-df54-4067-acb5-71d32154e1a0';
    $pane = new stdClass();
    $pane->pid = 'new-aad054b8-dbe1-42ec-9ffd-bb0ffa1008da';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-tips_sidebar-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = 'aad054b8-dbe1-42ec-9ffd-bb0ffa1008da';
    $display->content['new-aad054b8-dbe1-42ec-9ffd-bb0ffa1008da'] = $pane;
    $display->panels['right'][1] = 'new-aad054b8-dbe1-42ec-9ffd-bb0ffa1008da';
    $pane = new stdClass();
    $pane->pid = 'new-16bddfe4-2642-45e7-ad62-b2d325096912';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-ads_view-block_2';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '16bddfe4-2642-45e7-ad62-b2d325096912';
    $display->content['new-16bddfe4-2642-45e7-ad62-b2d325096912'] = $pane;
    $display->panels['right'][2] = 'new-16bddfe4-2642-45e7-ad62-b2d325096912';
    $pane = new stdClass();
    $pane->pid = 'new-dda0221b-1c58-4c52-aded-9df1b7a61ba1';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-top_reviews-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'dda0221b-1c58-4c52-aded-9df1b7a61ba1';
    $display->content['new-dda0221b-1c58-4c52-aded-9df1b7a61ba1'] = $pane;
    $display->panels['right'][3] = 'new-dda0221b-1c58-4c52-aded-9df1b7a61ba1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0d91f68a-dda7-4f57-aad5-e3fa99d573ab';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function happywedding_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'accessory';
  $page->task = 'page';
  $page->admin_title = 'Accessory';
  $page->admin_description = '';
  $page->path = 'accessory';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_accessory_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'accessory';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Accessory';
  $display->uuid = 'c749018b-5087-4036-918f-cf59a9dc4517';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b3e85e22-676a-4497-b588-03a92067c5c9';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-subpage_tips-block_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b3e85e22-676a-4497-b588-03a92067c5c9';
    $display->content['new-b3e85e22-676a-4497-b588-03a92067c5c9'] = $pane;
    $display->panels['left'][0] = 'new-b3e85e22-676a-4497-b588-03a92067c5c9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['accessory'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'beauty_health';
  $page->task = 'page';
  $page->admin_title = 'Beauty&Health';
  $page->admin_description = '';
  $page->path = 'beauty-health';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_beauty_health_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'beauty_health';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Beauty&Health';
  $display->uuid = '6d39dfce-e6a3-4dc6-84f1-98fafa8b9dd3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e27345a5-39af-4555-abc6-57c833af2f06';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-subpage_tips-block_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e27345a5-39af-4555-abc6-57c833af2f06';
    $display->content['new-e27345a5-39af-4555-abc6-57c833af2f06'] = $pane;
    $display->panels['left'][0] = 'new-e27345a5-39af-4555-abc6-57c833af2f06';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['beauty_health'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dress';
  $page->task = 'page';
  $page->admin_title = 'Dress';
  $page->admin_description = '';
  $page->path = 'dress';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dress_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dress';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Dress';
  $display->uuid = '494f591f-7821-4f48-b99f-3739bc1d3e63';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8f487817-679b-4c90-b153-d0e3ec9fb2c2';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-subpage_tips-block_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8f487817-679b-4c90-b153-d0e3ec9fb2c2';
    $display->content['new-8f487817-679b-4c90-b153-d0e3ec9fb2c2'] = $pane;
    $display->panels['left'][0] = 'new-8f487817-679b-4c90-b153-d0e3ec9fb2c2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dress'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'flower_deco';
  $page->task = 'page';
  $page->admin_title = 'Flower&Deco';
  $page->admin_description = '';
  $page->path = 'flower-deco';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_flower_deco_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'flower_deco';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Flower&Deco';
  $display->uuid = '35d87bd9-05d2-4cc6-b6de-84a4e7d0389a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-69a65d95-5d54-43c0-a568-0cd3ba756a89';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-subpage_tips-block_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '69a65d95-5d54-43c0-a568-0cd3ba756a89';
    $display->content['new-69a65d95-5d54-43c0-a568-0cd3ba756a89'] = $pane;
    $display->panels['left'][0] = 'new-69a65d95-5d54-43c0-a568-0cd3ba756a89';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['flower_deco'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'food_dining';
  $page->task = 'page';
  $page->admin_title = 'Food&Dining';
  $page->admin_description = '';
  $page->path = 'food-dining';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_food_dining_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'food_dining';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Food&Dining';
  $display->uuid = '24d9fb22-a781-4cdb-b13e-30a86e3478f7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8594d469-2a17-4bd5-8557-c39bb2bd7f7f';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-subpage_tips-block_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8594d469-2a17-4bd5-8557-c39bb2bd7f7f';
    $display->content['new-8594d469-2a17-4bd5-8557-c39bb2bd7f7f'] = $pane;
    $display->panels['left'][0] = 'new-8594d469-2a17-4bd5-8557-c39bb2bd7f7f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['food_dining'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'gift';
  $page->task = 'page';
  $page->admin_title = 'Gift';
  $page->admin_description = '';
  $page->path = 'gift';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_gift_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'gift';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Gift';
  $display->uuid = '42480977-a1a6-42ec-97ba-675bb54d5de1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6861fd44-922c-441c-854b-740f436b8f7b';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-subpage_tips-block_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6861fd44-922c-441c-854b-740f436b8f7b';
    $display->content['new-6861fd44-922c-441c-854b-740f436b8f7b'] = $pane;
    $display->panels['left'][0] = 'new-6861fd44-922c-441c-854b-740f436b8f7b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['gift'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'honeymoons_travel';
  $page->task = 'page';
  $page->admin_title = 'Honeymoons&Travel';
  $page->admin_description = '';
  $page->path = 'honeymoons-travel';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_honeymoons_travel_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'honeymoons_travel';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Honeymoons&Travel';
  $display->uuid = '3c53d047-eb63-4d3e-ad04-6c4adec0e306';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fcf29eb5-feaa-4520-a027-03f1c9e20e65';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-subpage_tips-block_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fcf29eb5-feaa-4520-a027-03f1c9e20e65';
    $display->content['new-fcf29eb5-feaa-4520-a027-03f1c9e20e65'] = $pane;
    $display->panels['left'][0] = 'new-fcf29eb5-feaa-4520-a027-03f1c9e20e65';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['honeymoons_travel'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'landing_page';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'No';
  $display->uuid = '31799adf-c892-48db-9399-a0afdfaca636';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-549a3f5a-1452-4f73-b5d6-ec016e43b772';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'views-gallery-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'gallery-block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '549a3f5a-1452-4f73-b5d6-ec016e43b772';
    $display->content['new-549a3f5a-1452-4f73-b5d6-ec016e43b772'] = $pane;
    $display->panels['bottom'][0] = 'new-549a3f5a-1452-4f73-b5d6-ec016e43b772';
    $pane = new stdClass();
    $pane->pid = 'new-630eee90-7c11-4b0c-955a-4f2387804320';
    $pane->panel = 'bottom';
    $pane->type = 'panels_mini';
    $pane->subtype = 'vendors_navigation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = '630eee90-7c11-4b0c-955a-4f2387804320';
    $display->content['new-630eee90-7c11-4b0c-955a-4f2387804320'] = $pane;
    $display->panels['bottom'][1] = 'new-630eee90-7c11-4b0c-955a-4f2387804320';
    $pane = new stdClass();
    $pane->pid = 'new-919b6f0f-df95-4198-9e1d-1b1d4a2dfa67';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'views-vendors_block-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '919b6f0f-df95-4198-9e1d-1b1d4a2dfa67';
    $display->content['new-919b6f0f-df95-4198-9e1d-1b1d4a2dfa67'] = $pane;
    $display->panels['bottom'][2] = 'new-919b6f0f-df95-4198-9e1d-1b1d4a2dfa67';
    $pane = new stdClass();
    $pane->pid = 'new-fd0363aa-d493-485e-9de3-fdf17ab07cbe';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-subpage_tips-block_13';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fd0363aa-d493-485e-9de3-fdf17ab07cbe';
    $display->content['new-fd0363aa-d493-485e-9de3-fdf17ab07cbe'] = $pane;
    $display->panels['left'][0] = 'new-fd0363aa-d493-485e-9de3-fdf17ab07cbe';
    $pane = new stdClass();
    $pane->pid = 'new-dde5c610-fcbd-4747-b39f-0c72bedbc770';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-subpage_tips-block_12';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Venue',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dde5c610-fcbd-4747-b39f-0c72bedbc770';
    $display->content['new-dde5c610-fcbd-4747-b39f-0c72bedbc770'] = $pane;
    $display->panels['left'][1] = 'new-dde5c610-fcbd-4747-b39f-0c72bedbc770';
    $pane = new stdClass();
    $pane->pid = 'new-d5757e82-14f2-4799-bec6-00a31f4d58a7';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-vendors_block-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd5757e82-14f2-4799-bec6-00a31f4d58a7';
    $display->content['new-d5757e82-14f2-4799-bec6-00a31f4d58a7'] = $pane;
    $display->panels['left'][2] = 'new-d5757e82-14f2-4799-bec6-00a31f4d58a7';
    $pane = new stdClass();
    $pane->pid = 'new-7b37ffa6-05ea-4578-9a46-373276f4e67f';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-subpage_tips-block_14';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7b37ffa6-05ea-4578-9a46-373276f4e67f';
    $display->content['new-7b37ffa6-05ea-4578-9a46-373276f4e67f'] = $pane;
    $display->panels['left'][3] = 'new-7b37ffa6-05ea-4578-9a46-373276f4e67f';
    $pane = new stdClass();
    $pane->pid = 'new-a4e688f7-ffca-48a7-b172-6437d4347687';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-vendors_block-block_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a4e688f7-ffca-48a7-b172-6437d4347687';
    $display->content['new-a4e688f7-ffca-48a7-b172-6437d4347687'] = $pane;
    $display->panels['left'][4] = 'new-a4e688f7-ffca-48a7-b172-6437d4347687';
    $pane = new stdClass();
    $pane->pid = 'new-14076167-c4fd-42ac-a2d9-ea42032d5891';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-ads_view-block_1';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '14076167-c4fd-42ac-a2d9-ea42032d5891';
    $display->content['new-14076167-c4fd-42ac-a2d9-ea42032d5891'] = $pane;
    $display->panels['right'][0] = 'new-14076167-c4fd-42ac-a2d9-ea42032d5891';
    $pane = new stdClass();
    $pane->pid = 'new-9c865041-b251-45b6-bc51-3260db64bcf9';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-tips_sidebar-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = '9c865041-b251-45b6-bc51-3260db64bcf9';
    $display->content['new-9c865041-b251-45b6-bc51-3260db64bcf9'] = $pane;
    $display->panels['right'][1] = 'new-9c865041-b251-45b6-bc51-3260db64bcf9';
    $pane = new stdClass();
    $pane->pid = 'new-df0f7190-e595-4e5d-9980-52302480bdc6';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-ads_view-block_2';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'df0f7190-e595-4e5d-9980-52302480bdc6';
    $display->content['new-df0f7190-e595-4e5d-9980-52302480bdc6'] = $pane;
    $display->panels['right'][2] = 'new-df0f7190-e595-4e5d-9980-52302480bdc6';
    $pane = new stdClass();
    $pane->pid = 'new-ed877156-3a8c-4075-9ad2-ab69d71aeb8c';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-top_reviews-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ed877156-3a8c-4075-9ad2-ab69d71aeb8c';
    $display->content['new-ed877156-3a8c-4075-9ad2-ab69d71aeb8c'] = $pane;
    $display->panels['right'][3] = 'new-ed877156-3a8c-4075-9ad2-ab69d71aeb8c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'login';
  $page->task = 'page';
  $page->admin_title = 'login';
  $page->admin_description = '';
  $page->path = 'login';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_login_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'login';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => 'if(user_is_logged_in()) drupal_goto(\'\');

return true;',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0b112c33-814e-4d4a-880c-866840d2890f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-845f92f8-0b2e-4a47-b3e3-cee6d130e0ce';
    $pane->panel = 'bottom';
    $pane->type = 'panels_mini';
    $pane->subtype = 'register_description';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '845f92f8-0b2e-4a47-b3e3-cee6d130e0ce';
    $display->content['new-845f92f8-0b2e-4a47-b3e3-cee6d130e0ce'] = $pane;
    $display->panels['bottom'][0] = 'new-845f92f8-0b2e-4a47-b3e3-cee6d130e0ce';
    $pane = new stdClass();
    $pane->pid = 'new-b79565f8-ee8b-401c-baac-bf26d9b98cab';
    $pane->panel = 'left';
    $pane->type = 'panels_mini';
    $pane->subtype = 'sign_in_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b79565f8-ee8b-401c-baac-bf26d9b98cab';
    $display->content['new-b79565f8-ee8b-401c-baac-bf26d9b98cab'] = $pane;
    $display->panels['left'][0] = 'new-b79565f8-ee8b-401c-baac-bf26d9b98cab';
    $pane = new stdClass();
    $pane->pid = 'new-3c6b96cf-65d4-4b70-ab22-151aad45f7d1';
    $pane->panel = 'right';
    $pane->type = 'panels_mini';
    $pane->subtype = 'not_member';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3c6b96cf-65d4-4b70-ab22-151aad45f7d1';
    $display->content['new-3c6b96cf-65d4-4b70-ab22-151aad45f7d1'] = $pane;
    $display->panels['right'][0] = 'new-3c6b96cf-65d4-4b70-ab22-151aad45f7d1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['login'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'others';
  $page->task = 'page';
  $page->admin_title = 'Others';
  $page->admin_description = '';
  $page->path = 'others';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_others_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'others';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Others';
  $display->uuid = '2796c28d-d555-457c-a607-84630743d252';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5c38fc68-7a2c-48cc-b4b7-d95da5dbae3b';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-subpage_tips-block_11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5c38fc68-7a2c-48cc-b4b7-d95da5dbae3b';
    $display->content['new-5c38fc68-7a2c-48cc-b4b7-d95da5dbae3b'] = $pane;
    $display->panels['left'][0] = 'new-5c38fc68-7a2c-48cc-b4b7-d95da5dbae3b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['others'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'planning';
  $page->task = 'page';
  $page->admin_title = 'Planning';
  $page->admin_description = '';
  $page->path = 'planning';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_planning_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'planning';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Planning';
  $display->uuid = '6df41bbe-8482-4c8b-9e2e-1b0ba196c968';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9d855195-2015-4d9d-bf56-e938a0bde39f';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-subpage_tips-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9d855195-2015-4d9d-bf56-e938a0bde39f';
    $display->content['new-9d855195-2015-4d9d-bf56-e938a0bde39f'] = $pane;
    $display->panels['left'][0] = 'new-9d855195-2015-4d9d-bf56-e938a0bde39f';
    $pane = new stdClass();
    $pane->pid = 'new-60205960-4ca1-4d0f-904e-d5eb96f40167';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Search Vendors',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '60205960-4ca1-4d0f-904e-d5eb96f40167';
    $display->content['new-60205960-4ca1-4d0f-904e-d5eb96f40167'] = $pane;
    $display->panels['left'][1] = 'new-60205960-4ca1-4d0f-904e-d5eb96f40167';
    $pane = new stdClass();
    $pane->pid = 'new-68433ff7-22ee-4747-90fc-0c792069b621';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-vendors_block-block_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '68433ff7-22ee-4747-90fc-0c792069b621';
    $display->content['new-68433ff7-22ee-4747-90fc-0c792069b621'] = $pane;
    $display->panels['left'][2] = 'new-68433ff7-22ee-4747-90fc-0c792069b621';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['planning'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'registry';
  $page->task = 'page';
  $page->admin_title = 'Registry';
  $page->admin_description = '';
  $page->path = 'registry';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_registry_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'registry';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Registry';
  $display->uuid = 'ccd441bd-a6f1-4fff-adcf-17d14ff546c8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a7d46097-8801-4e43-80ea-717bc03cbff2';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-subpage_tips-block_10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a7d46097-8801-4e43-80ea-717bc03cbff2';
    $display->content['new-a7d46097-8801-4e43-80ea-717bc03cbff2'] = $pane;
    $display->panels['left'][0] = 'new-a7d46097-8801-4e43-80ea-717bc03cbff2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['registry'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tips';
  $page->task = 'page';
  $page->admin_title = 'Tips';
  $page->admin_description = '';
  $page->path = 'tips';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tips_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'tips';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Tips';
  $display->uuid = 'f6983720-cb4d-426d-86fa-91f927a61c89';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-659c5482-fe48-4dea-8184-758abfd33bc6';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-subpage_tips-block_15';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '659c5482-fe48-4dea-8184-758abfd33bc6';
    $display->content['new-659c5482-fe48-4dea-8184-758abfd33bc6'] = $pane;
    $display->panels['left'][0] = 'new-659c5482-fe48-4dea-8184-758abfd33bc6';
    $pane = new stdClass();
    $pane->pid = 'new-1cf6d86b-278b-4330-85c6-a67d3a734cf6';
    $pane->panel = 'left';
    $pane->type = 'panels_mini';
    $pane->subtype = 'search_vendors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = '1cf6d86b-278b-4330-85c6-a67d3a734cf6';
    $display->content['new-1cf6d86b-278b-4330-85c6-a67d3a734cf6'] = $pane;
    $display->panels['left'][1] = 'new-1cf6d86b-278b-4330-85c6-a67d3a734cf6';
    $pane = new stdClass();
    $pane->pid = 'new-3754299e-8915-4ff5-bec3-69eda6b239ac';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-vendors_block-block_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3754299e-8915-4ff5-bec3-69eda6b239ac';
    $display->content['new-3754299e-8915-4ff5-bec3-69eda6b239ac'] = $pane;
    $display->panels['left'][2] = 'new-3754299e-8915-4ff5-bec3-69eda6b239ac';
    $pane = new stdClass();
    $pane->pid = 'new-6164f593-9f87-4e7f-bc97-ffe35885c825';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-ads_view-block_1';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6164f593-9f87-4e7f-bc97-ffe35885c825';
    $display->content['new-6164f593-9f87-4e7f-bc97-ffe35885c825'] = $pane;
    $display->panels['right'][0] = 'new-6164f593-9f87-4e7f-bc97-ffe35885c825';
    $pane = new stdClass();
    $pane->pid = 'new-b36896bb-8b3e-4f4e-918f-fcb004b9066f';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-tips_sidebar-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = 'b36896bb-8b3e-4f4e-918f-fcb004b9066f';
    $display->content['new-b36896bb-8b3e-4f4e-918f-fcb004b9066f'] = $pane;
    $display->panels['right'][1] = 'new-b36896bb-8b3e-4f4e-918f-fcb004b9066f';
    $pane = new stdClass();
    $pane->pid = 'new-39e42e65-9928-4ba6-9368-090e7c8f6a6b';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-ads_view-block_2';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '39e42e65-9928-4ba6-9368-090e7c8f6a6b';
    $display->content['new-39e42e65-9928-4ba6-9368-090e7c8f6a6b'] = $pane;
    $display->panels['right'][2] = 'new-39e42e65-9928-4ba6-9368-090e7c8f6a6b';
    $pane = new stdClass();
    $pane->pid = 'new-f7f1534e-8ca0-4e63-a622-ab1bbc67e422';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-top_reviews-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f7f1534e-8ca0-4e63-a622-ab1bbc67e422';
    $display->content['new-f7f1534e-8ca0-4e63-a622-ab1bbc67e422'] = $pane;
    $display->panels['right'][3] = 'new-f7f1534e-8ca0-4e63-a622-ab1bbc67e422';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-659c5482-fe48-4dea-8184-758abfd33bc6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tips'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'user_register';
  $page->task = 'page';
  $page->admin_title = 'User Register';
  $page->admin_description = '';
  $page->path = 'register';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_register_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'user_register';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
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
  $display->uuid = 'e7d26ea3-e4ab-457d-b3b6-4dd629262888';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4fd8c576-ad07-4643-b5ec-9ac9aef62cae';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'create_account_top';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4fd8c576-ad07-4643-b5ec-9ac9aef62cae';
    $display->content['new-4fd8c576-ad07-4643-b5ec-9ac9aef62cae'] = $pane;
    $display->panels['middle'][0] = 'new-4fd8c576-ad07-4643-b5ec-9ac9aef62cae';
    $pane = new stdClass();
    $pane->pid = 'new-60f6c50c-b389-4a01-b25b-f68b03edab7d';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'happywedding-user_register_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = '60f6c50c-b389-4a01-b25b-f68b03edab7d';
    $display->content['new-60f6c50c-b389-4a01-b25b-f68b03edab7d'] = $pane;
    $display->panels['middle'][1] = 'new-60f6c50c-b389-4a01-b25b-f68b03edab7d';
    $pane = new stdClass();
    $pane->pid = 'new-6dfaaaa0-4f94-426e-a4fa-19ced5b6fd16';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'register_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6dfaaaa0-4f94-426e-a4fa-19ced5b6fd16';
    $display->content['new-6dfaaaa0-4f94-426e-a4fa-19ced5b6fd16'] = $pane;
    $display->panels['middle'][2] = 'new-6dfaaaa0-4f94-426e-a4fa-19ced5b6fd16';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_register'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'vendor_login';
  $page->task = 'page';
  $page->admin_title = 'Vendor login';
  $page->admin_description = '';
  $page->path = 'bo/vendor';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_vendor_login_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'vendor_login';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => 'if(user_is_logged_in())  drupal_goto(\'bo/vendor/redirect\'); 
// global $user;
//if (in_array(\'vendor\', $user->roles)) { drupal_goto(\'bo/vendor/redirect\'); }
return true;',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
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
  $display->title = 'Vendor login';
  $display->uuid = '3c5d42fc-1fa3-4a77-8d38-63a458442d7c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ee12c479-5a2f-4de3-9785-8155d598c13a';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Login title',
      'title' => '',
      'body' => '<p style="text-align: center;">Happy Wedding Life is an inspiring and most trusted online wedding vendor directory.<br>We connect wedding vendors with engaged couples.</p>',
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
    $pane->uuid = 'ee12c479-5a2f-4de3-9785-8155d598c13a';
    $display->content['new-ee12c479-5a2f-4de3-9785-8155d598c13a'] = $pane;
    $display->panels['middle'][0] = 'new-ee12c479-5a2f-4de3-9785-8155d598c13a';
    $pane = new stdClass();
    $pane->pid = 'new-681cd7db-483c-4c92-8b84-38e4f729cf1a';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
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
    $pane->uuid = '681cd7db-483c-4c92-8b84-38e4f729cf1a';
    $display->content['new-681cd7db-483c-4c92-8b84-38e4f729cf1a'] = $pane;
    $display->panels['middle'][1] = 'new-681cd7db-483c-4c92-8b84-38e4f729cf1a';
    $pane = new stdClass();
    $pane->pid = 'new-d02a99a7-7c19-4cdf-bf96-eda0d692d92a';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class=\'footer\'>
  <div class=\'block\'><div class=\'image-1\'></div><div class=\'title\'></div></div>
  <div class=\'block\'></div> 
  <div class=\'block\'></div>
  <div class=\'block\'></div>

</div>',
      'format' => 'filtered_html',
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
    $pane->uuid = 'd02a99a7-7c19-4cdf-bf96-eda0d692d92a';
    $display->content['new-d02a99a7-7c19-4cdf-bf96-eda0d692d92a'] = $pane;
    $display->panels['middle'][2] = 'new-d02a99a7-7c19-4cdf-bf96-eda0d692d92a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ee12c479-5a2f-4de3-9785-8155d598c13a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['vendor_login'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'vendor_register';
  $page->task = 'page';
  $page->admin_title = 'Vendor register';
  $page->admin_description = '';
  $page->path = '/bo/vendor/register';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_vendor_register_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'vendor_register';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Vendor Register',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
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
  $display->title = 'Vendor Registration';
  $display->uuid = 'f69dcdef-218c-4a4a-9aa8-23092137f938';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1d3fa9f3-05b6-4a16-82b2-0bb30c219d53';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="step-wrapper"></div>',
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
    $pane->uuid = '1d3fa9f3-05b6-4a16-82b2-0bb30c219d53';
    $display->content['new-1d3fa9f3-05b6-4a16-82b2-0bb30c219d53'] = $pane;
    $display->panels['middle'][0] = 'new-1d3fa9f3-05b6-4a16-82b2-0bb30c219d53';
    $pane = new stdClass();
    $pane->pid = 'new-c2dbdf63-6b47-4abf-900a-cc94e02eaf1a';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'happywedding-vendor_register_form';
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
    $pane->uuid = 'c2dbdf63-6b47-4abf-900a-cc94e02eaf1a';
    $display->content['new-c2dbdf63-6b47-4abf-900a-cc94e02eaf1a'] = $pane;
    $display->panels['middle'][1] = 'new-c2dbdf63-6b47-4abf-900a-cc94e02eaf1a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1d3fa9f3-05b6-4a16-82b2-0bb30c219d53';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['vendor_register'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'vendors';
  $page->task = 'page';
  $page->admin_title = 'Vendors';
  $page->admin_description = '';
  $page->path = 'vendors';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_vendors_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'vendors';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
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
  $display->title = 'Vendors';
  $display->uuid = 'b1aa6cbf-1b0b-4a76-902d-f1f931ca0a0f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9a529e76-3e62-49c5-9f68-ba46cded4328';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'vendors_navigation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9a529e76-3e62-49c5-9f68-ba46cded4328';
    $display->content['new-9a529e76-3e62-49c5-9f68-ba46cded4328'] = $pane;
    $display->panels['middle'][0] = 'new-9a529e76-3e62-49c5-9f68-ba46cded4328';
    $pane = new stdClass();
    $pane->pid = 'new-cbdf28c7-c4a4-4c4f-8738-641c17ada199';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'search_vendors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = 'cbdf28c7-c4a4-4c4f-8738-641c17ada199';
    $display->content['new-cbdf28c7-c4a4-4c4f-8738-641c17ada199'] = $pane;
    $display->panels['middle'][1] = 'new-cbdf28c7-c4a4-4c4f-8738-641c17ada199';
    $pane = new stdClass();
    $pane->pid = 'new-85e88cbd-a84e-4fe4-bc35-276c2cb3c3d2';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-vendors_block-block';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '85e88cbd-a84e-4fe4-bc35-276c2cb3c3d2';
    $display->content['new-85e88cbd-a84e-4fe4-bc35-276c2cb3c3d2'] = $pane;
    $display->panels['middle'][2] = 'new-85e88cbd-a84e-4fe4-bc35-276c2cb3c3d2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-85e88cbd-a84e-4fe4-bc35-276c2cb3c3d2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['vendors'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'venue';
  $page->task = 'page';
  $page->admin_title = 'Venue';
  $page->admin_description = '';
  $page->path = 'venue';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_venue_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'venue';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Venue';
  $display->uuid = '7fc5f983-e686-49e6-9134-15b783b70040';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-99c42590-00a7-4fee-b292-29791396e422';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-subpage_tips-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '99c42590-00a7-4fee-b292-29791396e422';
    $display->content['new-99c42590-00a7-4fee-b292-29791396e422'] = $pane;
    $display->panels['left'][0] = 'new-99c42590-00a7-4fee-b292-29791396e422';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['venue'] = $page;

  return $pages;

}
