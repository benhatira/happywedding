<?php
/**
 * @file
 * happywedding.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function happywedding_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bo_vendor_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bo Vendor info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Info';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Field: Content: Admin name */
  $handler->display->display_options['fields']['field_admin_name']['id'] = 'field_admin_name';
  $handler->display->display_options['fields']['field_admin_name']['table'] = 'field_data_field_admin_name';
  $handler->display->display_options['fields']['field_admin_name']['field'] = 'field_admin_name';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'About us';
  /* Field: Content: Categories */
  $handler->display->display_options['fields']['field_vendor_tags']['id'] = 'field_vendor_tags';
  $handler->display->display_options['fields']['field_vendor_tags']['table'] = 'field_data_field_vendor_tags';
  $handler->display->display_options['fields']['field_vendor_tags']['field'] = 'field_vendor_tags';
  $handler->display->display_options['fields']['field_vendor_tags']['type'] = 'term_reference_tree';
  $handler->display->display_options['fields']['field_vendor_tags']['settings'] = array(
    'token_display_selected' => '',
    'token_display_unselected' => '',
  );
  $handler->display->display_options['fields']['field_vendor_tags']['delta_offset'] = '0';
  /* Field: Content: Contact email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  /* Field: Content: Contact name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  /* Field: Content: Contact tel */
  $handler->display->display_options['fields']['field_contact_tel']['id'] = 'field_contact_tel';
  $handler->display->display_options['fields']['field_contact_tel']['table'] = 'field_data_field_contact_tel';
  $handler->display->display_options['fields']['field_contact_tel']['field'] = 'field_contact_tel';
  /* Field: Content: Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Plan */
  $handler->display->display_options['fields']['field_vendor_plan']['id'] = 'field_vendor_plan';
  $handler->display->display_options['fields']['field_vendor_plan']['table'] = 'field_data_field_vendor_plan';
  $handler->display->display_options['fields']['field_vendor_plan']['field'] = 'field_vendor_plan';
  /* Field: Content: Start date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  /* Field: Content: Vendor category */
  $handler->display->display_options['fields']['field_vendor_category']['id'] = 'field_vendor_category';
  $handler->display->display_options['fields']['field_vendor_category']['table'] = 'field_data_field_vendor_category';
  $handler->display->display_options['fields']['field_vendor_category']['field'] = 'field_vendor_category';
  $handler->display->display_options['fields']['field_vendor_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vendor_category']['delta_offset'] = '0';
  /* Field: Content: Vendor photo */
  $handler->display->display_options['fields']['field_vendor_photo']['id'] = 'field_vendor_photo';
  $handler->display->display_options['fields']['field_vendor_photo']['table'] = 'field_data_field_vendor_photo';
  $handler->display->display_options['fields']['field_vendor_photo']['field'] = 'field_vendor_photo';
  $handler->display->display_options['fields']['field_vendor_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vendor_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_vendor_photo']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vendor' => 'vendor',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'bo/vendor/%/info';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Info';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Vendor';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $translatables['bo_vendor_info'] = array(
    t('Master'),
    t('Info'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Rating'),
    t('Admin name'),
    t('About us'),
    t('Categories'),
    t('Contact email'),
    t('Contact name'),
    t('Contact tel'),
    t('Facebook'),
    t('Nid'),
    t('Plan'),
    t('Start date'),
    t('Url'),
    t('Vendor category'),
    t('Vendor photo'),
    t('All'),
    t('Page'),
  );
  $export['bo_vendor_info'] = $view;

  $view = new view();
  $view->name = 'gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<?php
$category = \'\';
if(isset($_GET[\'category\'])) {
$category="?category=".$_GET[\'category\'];
}
?>

<a href=\'/gallery<?php echo $category; ?>\'>thumbnail</a> | <a href=\'/gallery/detail<?php echo $category; ?>\'>detail</a> ';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'gallery_photo',
    'image_link' => 'file',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'photo' => 'photo',
  );
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    9 => '9',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Categorty';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'categories';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '0';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_photo']['alter']['path'] = 'gallery/detail?page=[counter]';
  $handler->display->display_options['fields']['field_photo']['alter']['link_class'] = 'gallery-detail';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'gallery_photo',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'photo' => 'photo',
  );
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'categories';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '1';
  $handler->display->display_options['path'] = 'gallery';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Gallery';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gallery';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'photo' => 'photo',
  );
  $handler->display->display_options['block_description'] = 'Gallery block';

  /* Display: Slide */
  $handler = $view->new_display('page', 'Slide', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_galleria';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_photo' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_photo' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['autoplay'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['autoplay_ms'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel_follow'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel_speed'] = '200';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['clicknext'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_crop'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_double_tap'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['height'] = '470';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_mode'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_time'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_speed'] = '200';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_crop'] = 'height';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_margin'] = '';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_pan'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_pan_smoothness'] = '12';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['initial_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['layer_follow'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox_fade_speed'] = '200';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox_transition_speed'] = '300';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['overlay_opacity'] = '0.85';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['pause_on_interaction'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['popup_links'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['preload'] = '2';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['queue'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['responsive'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show_info'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show_counter'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show_imagenav'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['swipe'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_crop'] = 'width';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_fit'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_margin'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_quality'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumbnails'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['touch_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['transition_speed'] = '400';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['avoid_flash_of_content'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['data_config'] = 'function(img){
       //console.log(.text().trim());
       var vendor = $(img).parents(\'.views-field-field-photo\').prev().text().trim();
       var title = $(img).parents(\'.views-field-field-photo\').prev().prev().text().trim();
       console.log(\'title\' + title + \', vandor = \' + vendor ) ;
       return {
            title: title,
            description: vendor
        }
  }';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['debug'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['keep_source'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['strip_images'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_photo_vendor_target_id']['id'] = 'field_photo_vendor_target_id';
  $handler->display->display_options['relationships']['field_photo_vendor_target_id']['table'] = 'field_data_field_photo_vendor';
  $handler->display->display_options['relationships']['field_photo_vendor_target_id']['field'] = 'field_photo_vendor_target_id';
  $handler->display->display_options['relationships']['field_photo_vendor_target_id']['label'] = 'photo_vendor';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Vendor */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_photo_vendor_target_id';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Vendor';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['alter']['text'] = '<img src=\'[field_photo]\' title=\'[title]\' alt=\'[field_photo-title] \' >';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'file',
  );
  $handler->display->display_options['path'] = 'gallery/slide';

  /* Display: Detail */
  $handler = $view->new_display('page', 'Detail', 'page_2');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '<';
  $handler->display->display_options['pager']['options']['tags']['next'] = '>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_photo_vendor_target_id']['id'] = 'field_photo_vendor_target_id';
  $handler->display->display_options['relationships']['field_photo_vendor_target_id']['table'] = 'field_data_field_photo_vendor';
  $handler->display->display_options['relationships']['field_photo_vendor_target_id']['field'] = 'field_photo_vendor_target_id';
  $handler->display->display_options['relationships']['field_photo_vendor_target_id']['label'] = 'field_photo_vendor';
  /* Relationship: Flags: bookmark */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'bookmark';
  /* Relationship: Comment: Last Comment */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node_comment_statistics';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'file',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_photo_vendor_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Photo by';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_photo_vendor_target_id';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Go to vendor';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  $handler->display->display_options['path'] = 'gallery/detail';

  /* Display: Vendor Gallery Block */
  $handler = $view->new_display('block', 'Vendor Gallery Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gallery';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Vendor (field_photo_vendor) */
  $handler->display->display_options['arguments']['field_photo_vendor_target_id']['id'] = 'field_photo_vendor_target_id';
  $handler->display->display_options['arguments']['field_photo_vendor_target_id']['table'] = 'field_data_field_photo_vendor';
  $handler->display->display_options['arguments']['field_photo_vendor_target_id']['field'] = 'field_photo_vendor_target_id';
  $handler->display->display_options['arguments']['field_photo_vendor_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_photo_vendor_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_photo_vendor_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_photo_vendor_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_photo_vendor_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'photo' => 'photo',
  );
  $handler->display->display_options['block_description'] = 'Vendor Gallery block';
  $translatables['gallery'] = array(
    t('Master'),
    t('Gallery'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<?php
$category = \'\';
if(isset($_GET[\'category\'])) {
$category="?category=".$_GET[\'category\'];
}
?>

<a href=\'/gallery<?php echo $category; ?>\'>thumbnail</a> | <a href=\'/gallery/detail<?php echo $category; ?>\'>detail</a> '),
    t('Categorty'),
    t('Page'),
    t('Category'),
    t('Block'),
    t('Gallery block'),
    t('Slide'),
    t('photo_vendor'),
    t('<img src=\'[field_photo]\' title=\'[title]\' alt=\'[field_photo-title] \' >'),
    t('Detail'),
    t('<'),
    t('>'),
    t('field_photo_vendor'),
    t('flag'),
    t('Last Comment'),
    t('Photo by'),
    t('Go to vendor'),
    t('Comment'),
    t('Vendor Gallery Block'),
    t('All'),
    t('Vendor Gallery block'),
  );
  $export['gallery'] = $view;

  $view = new view();
  $view->name = 'subpage_tips';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Subpage tips';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'subpage-tips';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_image' => 'field_image',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Cover */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tips_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]"><div class="shadow"></div></a>';
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Suppage Tips Default';

  /* Display: Venue Top */
  $handler = $view->new_display('block', 'Venue Top', 'block_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Venue Top';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_value']['id'] = 'field_category_value';
  $handler->display->display_options['filters']['field_category_value']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_value']['field'] = 'field_category_value';
  $handler->display->display_options['filters']['field_category_value']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['block_description'] = 'Venue Top';

  /* Display: What's news */
  $handler = $view->new_display('block', 'What\'s news', 'block_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'What\'s new';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '60';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['block_description'] = 'What\'s new';

  /* Display: Honeymoon&Travel Top */
  $handler = $view->new_display('block', 'Honeymoon&Travel Top', 'block_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Honeymoons & Travel';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_value']['id'] = 'field_category_value';
  $handler->display->display_options['filters']['field_category_value']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_value']['field'] = 'field_category_value';
  $handler->display->display_options['filters']['field_category_value']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['block_description'] = 'Honeymoons Top';

  /* Display: Tips block all */
  $handler = $view->new_display('block', 'Tips block all', 'block_15');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Category (field_category) */
  $handler->display->display_options['arguments']['field_category_value']['id'] = 'field_category_value';
  $handler->display->display_options['arguments']['field_category_value']['table'] = 'field_data_field_category';
  $handler->display->display_options['arguments']['field_category_value']['field'] = 'field_category_value';
  $handler->display->display_options['arguments']['field_category_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_category_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_category_value']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_category_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_category_value']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_category_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_category_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_category_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_category_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_category_value']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['field_category_value']['validate_options']['code'] = '$field = field_info_field(\'field_category\');
if (array_key_exists($argument, $field[\'settings\'][\'allowed_values\'])) {
  $handler->options[\'title\'] = $field[\'settings\'][\'allowed_values\'][$argument];
  return true;


}
return false;';
  $handler->display->display_options['block_description'] = 'Tips block all';
  $translatables['subpage_tips'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Path'),
    t('<a href="[path]"><div class="shadow"></div></a>'),
    t('Block'),
    t('Suppage Tips Default'),
    t('Venue Top'),
    t('What\'s news'),
    t('What\'s new'),
    t('Honeymoon&Travel Top'),
    t('Honeymoons & Travel'),
    t('Honeymoons Top'),
    t('Tips block all'),
    t('All'),
  );
  $export['subpage_tips'] = $view;

  $view = new view();
  $view->name = 'tips';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'tips';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tips';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create article content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/article">Add content</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Cover */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_value']['id'] = 'field_category_value';
  $handler->display->display_options['filters']['field_category_value']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_value']['field'] = 'field_category_value';
  $handler->display->display_options['filters']['field_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_value']['expose']['operator_id'] = 'field_category_value_op';
  $handler->display->display_options['filters']['field_category_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_category_value']['expose']['operator'] = 'field_category_value_op';
  $handler->display->display_options['filters']['field_category_value']['expose']['identifier'] = 'field_category_value';
  $handler->display->display_options['filters']['field_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/tips';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tips';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['tips'] = array(
    t('Master'),
    t('Tips'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹'),
    t('›'),
    t('last »'),
    t('<a href="/node/add/article">Add content</a>'),
    t('Category'),
    t('Post date'),
    t('Cover'),
    t('Page'),
  );
  $export['tips'] = $view;

  $view = new view();
  $view->name = 'tips_sidebar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tips sidebar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Popular';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_category_value' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_image' => 'field_image',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Cover */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'sidebar__70x70_',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_value']['id'] = 'field_category_value';
  $handler->display->display_options['filters']['field_category_value']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_value']['field'] = 'field_category_value';
  $handler->display->display_options['filters']['field_category_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_value']['expose']['operator_id'] = 'field_category_value_op';
  $handler->display->display_options['filters']['field_category_value']['expose']['operator'] = 'field_category_value_op';
  $handler->display->display_options['filters']['field_category_value']['expose']['identifier'] = 'field_category';
  $handler->display->display_options['filters']['field_category_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Tips rank';
  $translatables['tips_sidebar'] = array(
    t('Master'),
    t('Popular'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Block'),
    t('Tips rank'),
  );
  $export['tips_sidebar'] = $view;

  $view = new view();
  $view->name = 'top_reviews';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Top reviews';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pickup reviews';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_vendor_category_value' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'picture',
    'subject' => 'subject',
    'title' => 'subject',
    'field_rating' => 'subject',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'subject' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rating' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Comment: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'comment';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'sidebar__70x70_';
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  /* Field: Vendor name */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Vendor name';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['label'] = '';
  $handler->display->display_options['fields']['field_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 0,
    'style' => 'user',
    'text' => 'none',
  );
  /* Sort criterion: Comment: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Vendor category (field_vendor_category) */
  $handler->display->display_options['filters']['field_vendor_category_value']['id'] = 'field_vendor_category_value';
  $handler->display->display_options['filters']['field_vendor_category_value']['table'] = 'field_data_field_vendor_category';
  $handler->display->display_options['filters']['field_vendor_category_value']['field'] = 'field_vendor_category_value';
  $handler->display->display_options['filters']['field_vendor_category_value']['relationship'] = 'nid';
  $handler->display->display_options['filters']['field_vendor_category_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_vendor_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_vendor_category_value']['expose']['operator_id'] = 'field_vendor_category_value_op';
  $handler->display->display_options['filters']['field_vendor_category_value']['expose']['operator'] = 'field_vendor_category_value_op';
  $handler->display->display_options['filters']['field_vendor_category_value']['expose']['identifier'] = 'vendor_category';
  $handler->display->display_options['filters']['field_vendor_category_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_vendor_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['top_reviews'] = array(
    t('Master'),
    t('Pickup reviews'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Content'),
    t('author'),
    t('Block'),
  );
  $export['top_reviews'] = $view;

  $view = new view();
  $view->name = 'user_bookmarks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'user_bookmarks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vendors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<?php
$arg=arg(1);
$url = "/user/$arg/bookmarks";
//print("<ul class=\'bookmarks sub-menu\'><li class=\'first leaf\'><a href=\'$url\' title=\'\'>TIPS</a></li>");
//print("<li class=\'leaf\'><a href=\'$url/vendors\' title=\'\'>VENDORS</a></li>");
//print("<li class=\'leaf\'><a href=\'$url/photos\' title=\'\'>PHOTOS</a></li>");
//print("<li class=\'last leaf\'><a href=\'$url/forums\' title=\'\'>FORUMS</a></li></ul>");';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Relationship: Flags: bookmark */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'bookmark';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'bookmark';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Cover */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tips_thumbnail',
    'image_link' => '',
  );
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Flags: User uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'flagging';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Articles */
  $handler = $view->new_display('page', 'Articles', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Articles';
  $handler->display->display_options['path'] = 'user/%/bookmarks/articles';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Tips';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Bookmarks';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Vendors */
  $handler = $view->new_display('page', 'Vendors', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vendors';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Cover */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tips_thumbnail',
    'image_link' => '',
  );
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Content: Vendor photo */
  $handler->display->display_options['fields']['field_vendor_photo']['id'] = 'field_vendor_photo';
  $handler->display->display_options['fields']['field_vendor_photo']['table'] = 'field_data_field_vendor_photo';
  $handler->display->display_options['fields']['field_vendor_photo']['field'] = 'field_vendor_photo';
  $handler->display->display_options['fields']['field_vendor_photo']['label'] = '';
  $handler->display->display_options['fields']['field_vendor_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vendor_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vendor_photo']['settings'] = array(
    'image_style' => 'vendor_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_vendor_photo']['delta_offset'] = '0';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vendor' => 'vendor',
  );
  $handler->display->display_options['path'] = 'user/%/bookmarks/vendors';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Vendor';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Photos */
  $handler = $view->new_display('page', 'Photos', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Photos';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Cover */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tips_thumbnail',
    'image_link' => '',
  );
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'photo' => 'photo',
  );
  $handler->display->display_options['path'] = 'user/%/bookmarks/photos';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Photos';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Forums */
  $handler = $view->new_display('page', 'Forums', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Forums';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Cover */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'tips_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forum' => 'forum',
  );
  $handler->display->display_options['path'] = 'user/%/bookmarks/forums';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Forums';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['user_bookmarks'] = array(
    t('Master'),
    t('Vendors'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<?php
$arg=arg(1);
$url = "/user/$arg/bookmarks";
//print("<ul class=\'bookmarks sub-menu\'><li class=\'first leaf\'><a href=\'$url\' title=\'\'>TIPS</a></li>");
//print("<li class=\'leaf\'><a href=\'$url/vendors\' title=\'\'>VENDORS</a></li>");
//print("<li class=\'leaf\'><a href=\'$url/photos\' title=\'\'>PHOTOS</a></li>");
//print("<li class=\'last leaf\'><a href=\'$url/forums\' title=\'\'>FORUMS</a></li></ul>");'),
    t('bookmark'),
    t('All'),
    t('Articles'),
    t('Province'),
    t('Photos'),
    t('Forums'),
  );
  $export['user_bookmarks'] = $view;

  $view = new view();
  $view->name = 'vendor_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vendor news';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/news?vendor=<?php echo arg(2); ?>">Add News</a>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Vendor (field_news_vendor) */
  $handler->display->display_options['arguments']['field_news_vendor_target_id']['id'] = 'field_news_vendor_target_id';
  $handler->display->display_options['arguments']['field_news_vendor_target_id']['table'] = 'field_data_field_news_vendor';
  $handler->display->display_options['arguments']['field_news_vendor_target_id']['field'] = 'field_news_vendor_target_id';
  $handler->display->display_options['arguments']['field_news_vendor_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_news_vendor_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_news_vendor_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_vendor_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_vendor_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'bo/vendor/%/news';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['vendor_news'] = array(
    t('Master'),
    t('News'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<a href="/node/add/news?vendor=<?php echo arg(2); ?>">Add News</a>'),
    t('Title'),
    t('All'),
    t('Page'),
  );
  $export['vendor_news'] = $view;

  $view = new view();
  $view->name = 'vendor_news_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vendor News view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vendor News view';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Vendor (field_news_vendor) */
  $handler->display->display_options['arguments']['field_news_vendor_target_id']['id'] = 'field_news_vendor_target_id';
  $handler->display->display_options['arguments']['field_news_vendor_target_id']['table'] = 'field_data_field_news_vendor';
  $handler->display->display_options['arguments']['field_news_vendor_target_id']['field'] = 'field_news_vendor_target_id';
  $handler->display->display_options['arguments']['field_news_vendor_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_news_vendor_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_news_vendor_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_vendor_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_vendor_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Vendor News view';
  $translatables['vendor_news_view'] = array(
    t('Master'),
    t('Vendor News view'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('Block'),
  );
  $export['vendor_news_view'] = $view;

  $view = new view();
  $view->name = 'vendor_photos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vendor photos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Photos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_photo' => 'field_photo',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_photo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/photo?vendor=<?php echo arg(1); ?>">Add Photo</a>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'gallery_photo',
    'image_link' => 'content',
  );
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Vendor (field_photo_vendor) */
  $handler->display->display_options['arguments']['field_photo_vendor_target_id']['id'] = 'field_photo_vendor_target_id';
  $handler->display->display_options['arguments']['field_photo_vendor_target_id']['table'] = 'field_data_field_photo_vendor';
  $handler->display->display_options['arguments']['field_photo_vendor_target_id']['field'] = 'field_photo_vendor_target_id';
  $handler->display->display_options['arguments']['field_photo_vendor_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_photo_vendor_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_photo_vendor_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_photo_vendor_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_photo_vendor_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'photo' => 'photo',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/photos';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Photos';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/photo?vendor=<?php echo arg(2); ?>">Add Photo</a>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['path'] = 'bo/vendor/%/photos';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Photos';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['vendor_photos'] = array(
    t('Master'),
    t('Photos'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<a href="/node/add/photo?vendor=<?php echo arg(1); ?>">Add Photo</a>'),
    t('Photo'),
    t('All'),
    t('Page'),
    t('<a href="/node/add/photo?vendor=<?php echo arg(2); ?>">Add Photo</a>'),
  );
  $export['vendor_photos'] = $view;

  $view = new view();
  $view->name = 'vendor_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vendor products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_product_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_product_category' => 'field_product_category',
    'field_price' => 'field_price',
    'field_tags' => 'field_tags',
    'delete_node' => 'delete_node',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_product_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/product?vendor=<?php echo arg(1); ?>">Add Product</a>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Vendor (field_product_vendor) */
  $handler->display->display_options['arguments']['field_product_vendor_target_id']['id'] = 'field_product_vendor_target_id';
  $handler->display->display_options['arguments']['field_product_vendor_target_id']['table'] = 'field_data_field_product_vendor';
  $handler->display->display_options['arguments']['field_product_vendor_target_id']['field'] = 'field_product_vendor_target_id';
  $handler->display->display_options['arguments']['field_product_vendor_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_product_vendor_target_id']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_product_vendor_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_product_vendor_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_product_vendor_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_product_vendor_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/products';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Products';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/product?vendor=<?php echo arg(2); ?>">Add Product</a>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['path'] = 'bo/vendor/%/products';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Products';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['vendor_products'] = array(
    t('Master'),
    t('Products'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<a href="/node/add/product?vendor=<?php echo arg(1); ?>">Add Product</a>'),
    t('Title'),
    t('Category'),
    t('Price'),
    t('Tags'),
    t('All'),
    t('Page'),
    t('<a href="/node/add/product?vendor=<?php echo arg(2); ?>">Add Product</a>'),
  );
  $export['vendor_products'] = $view;

  $view = new view();
  $view->name = 'vendor_products_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vendor Products view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Tag Price */
  $handler->display->display_options['fields']['field_tag_price']['id'] = 'field_tag_price';
  $handler->display->display_options['fields']['field_tag_price']['table'] = 'field_data_field_tag_price';
  $handler->display->display_options['fields']['field_tag_price']['field'] = 'field_tag_price';
  $handler->display->display_options['fields']['field_tag_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tag_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Vendor (field_product_vendor) */
  $handler->display->display_options['arguments']['field_product_vendor_target_id']['id'] = 'field_product_vendor_target_id';
  $handler->display->display_options['arguments']['field_product_vendor_target_id']['table'] = 'field_data_field_product_vendor';
  $handler->display->display_options['arguments']['field_product_vendor_target_id']['field'] = 'field_product_vendor_target_id';
  $handler->display->display_options['arguments']['field_product_vendor_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_product_vendor_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_product_vendor_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_product_vendor_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_product_vendor_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Vendor Products view';
  $translatables['vendor_products_view'] = array(
    t('Master'),
    t('Products'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Price'),
    t('Tag Price'),
    t('All'),
    t('Block'),
    t('Vendor Products view'),
  );
  $export['vendor_products_view'] = $view;

  $view = new view();
  $view->name = 'vendor_reviews';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Vendor reviews';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reviews';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Comment: Parent comment */
  $handler->display->display_options['relationships']['pid']['id'] = 'pid';
  $handler->display->display_options['relationships']['pid']['table'] = 'comment';
  $handler->display->display_options['relationships']['pid']['field'] = 'pid';
  /* Relationship: Comment: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'comment';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Flags: is_new */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'comment';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'Is New';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'is_new';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  /* Field: Field: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['label'] = '';
  $handler->display->display_options['fields']['field_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 0,
    'style' => 'user',
    'text' => 'none',
  );
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_plain';
  /* Field: Comment: Reply-to link */
  $handler->display->display_options['fields']['replyto_comment']['id'] = 'replyto_comment';
  $handler->display->display_options['fields']['replyto_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['replyto_comment']['field'] = 'replyto_comment';
  $handler->display->display_options['fields']['replyto_comment']['label'] = '';
  $handler->display->display_options['fields']['replyto_comment']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Sort criterion: Comment: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Comment: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'comment';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Comment: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'comment';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vendor' => 'vendor',
  );
  /* Filter criterion: Comment: ID */
  $handler->display->display_options['filters']['cid']['id'] = 'cid';
  $handler->display->display_options['filters']['cid']['table'] = 'comment';
  $handler->display->display_options['filters']['cid']['field'] = 'cid';
  $handler->display->display_options['filters']['cid']['relationship'] = 'pid';
  $handler->display->display_options['filters']['cid']['operator'] = 'empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'bo/vendor/%/reviews';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Reviews';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'comment_is_new');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vendor' => 'vendor',
  );
  /* Filter criterion: Comment: ID */
  $handler->display->display_options['filters']['cid']['id'] = 'cid';
  $handler->display->display_options['filters']['cid']['table'] = 'comment';
  $handler->display->display_options['filters']['cid']['field'] = 'cid';
  $handler->display->display_options['filters']['cid']['relationship'] = 'pid';
  $handler->display->display_options['filters']['cid']['operator'] = 'empty';
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['path'] = 'bo/vendor/%/reviews/new';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Reviews';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['vendor_reviews'] = array(
    t('Master'),
    t('Reviews'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content'),
    t('Parent comment'),
    t('author'),
    t('Is New'),
    t('All'),
    t('Page'),
  );
  $export['vendor_reviews'] = $view;

  $view = new view();
  $view->name = 'vendor_saved_user';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Vendor saved user';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: User's flaggings */
  $handler->display->display_options['relationships']['flag_user_content_rel']['id'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_user_content_rel']['field'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['flag'] = 'bookmark';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Flags: Content ID */
  $handler->display->display_options['arguments']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['table'] = 'flagging';
  $handler->display->display_options['arguments']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['relationship'] = 'flag_user_content_rel';
  $handler->display->display_options['arguments']['entity_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['entity_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['entity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entity_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_user_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'bo/vendor/%/saved_user';
  $translatables['vendor_saved_user'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('user flagged content'),
    t('All'),
    t('Page'),
  );
  $export['vendor_saved_user'] = $view;

  $view = new view();
  $view->name = 'vendors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vendors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vendors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create vendor content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Contact tel */
  $handler->display->display_options['fields']['field_contact_tel']['id'] = 'field_contact_tel';
  $handler->display->display_options['fields']['field_contact_tel']['table'] = 'field_data_field_contact_tel';
  $handler->display->display_options['fields']['field_contact_tel']['field'] = 'field_contact_tel';
  /* Field: Content: Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  /* Field: Content: Url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  /* Field: Content: Vendor category */
  $handler->display->display_options['fields']['field_vendor_category']['id'] = 'field_vendor_category';
  $handler->display->display_options['fields']['field_vendor_category']['table'] = 'field_data_field_vendor_category';
  $handler->display->display_options['fields']['field_vendor_category']['field'] = 'field_vendor_category';
  $handler->display->display_options['fields']['field_vendor_category']['label'] = 'Category';
  $handler->display->display_options['fields']['field_vendor_category']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vendor' => 'vendor',
  );
  /* Filter criterion: Content: Vendor category (field_vendor_category) */
  $handler->display->display_options['filters']['field_vendor_category_value']['id'] = 'field_vendor_category_value';
  $handler->display->display_options['filters']['field_vendor_category_value']['table'] = 'field_data_field_vendor_category';
  $handler->display->display_options['filters']['field_vendor_category_value']['field'] = 'field_vendor_category_value';
  $handler->display->display_options['filters']['field_vendor_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_vendor_category_value']['expose']['operator_id'] = 'field_vendor_category_value_op';
  $handler->display->display_options['filters']['field_vendor_category_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_vendor_category_value']['expose']['operator'] = 'field_vendor_category_value_op';
  $handler->display->display_options['filters']['field_vendor_category_value']['expose']['identifier'] = 'field_vendor_category_value';
  $handler->display->display_options['filters']['field_vendor_category_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_vendor_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Location: Province */
  $handler->display->display_options['filters']['province']['id'] = 'province';
  $handler->display->display_options['filters']['province']['table'] = 'location';
  $handler->display->display_options['filters']['province']['field'] = 'province';
  $handler->display->display_options['filters']['province']['value'] = '10';
  $handler->display->display_options['filters']['province']['exposed'] = TRUE;
  $handler->display->display_options['filters']['province']['expose']['operator_id'] = 'province_op';
  $handler->display->display_options['filters']['province']['expose']['label'] = 'Province';
  $handler->display->display_options['filters']['province']['expose']['operator'] = 'province_op';
  $handler->display->display_options['filters']['province']['expose']['identifier'] = 'province';
  $handler->display->display_options['filters']['province']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['province']['type'] = 'select';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vendors List';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/vendor">Add Vendor</a>
<a href="/admin/vendors/import">Import Vendor from csv</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Contact tel */
  $handler->display->display_options['fields']['field_contact_tel']['id'] = 'field_contact_tel';
  $handler->display->display_options['fields']['field_contact_tel']['table'] = 'field_data_field_contact_tel';
  $handler->display->display_options['fields']['field_contact_tel']['field'] = 'field_contact_tel';
  /* Field: Content: Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  /* Field: Content: Url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  /* Field: Content: Vendor category */
  $handler->display->display_options['fields']['field_vendor_category']['id'] = 'field_vendor_category';
  $handler->display->display_options['fields']['field_vendor_category']['table'] = 'field_data_field_vendor_category';
  $handler->display->display_options['fields']['field_vendor_category']['field'] = 'field_vendor_category';
  $handler->display->display_options['fields']['field_vendor_category']['label'] = 'Category';
  $handler->display->display_options['fields']['field_vendor_category']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'admin/vendors';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Vendors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['vendors'] = array(
    t('Master'),
    t('Vendors'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Title'),
    t('Contact tel'),
    t('Facebook'),
    t('Url'),
    t('Province'),
    t('Category'),
    t('Name'),
    t('Page'),
    t('Vendors List'),
    t('<a href="/node/add/vendor">Add Vendor</a>
<a href="/admin/vendors/import">Import Vendor from csv</a>'),
    t('Block'),
  );
  $export['vendors'] = $view;

  $view = new view();
  $view->name = 'vendors_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vendors block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vendors block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: bookmark */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'bookmark';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'bookmark';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['element_label_colon'] = FALSE;
  /* Field: Field: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['label'] = '';
  $handler->display->display_options['fields']['field_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Field: Content: Vendor category */
  $handler->display->display_options['fields']['field_vendor_category']['id'] = 'field_vendor_category';
  $handler->display->display_options['fields']['field_vendor_category']['table'] = 'field_data_field_vendor_category';
  $handler->display->display_options['fields']['field_vendor_category']['field'] = 'field_vendor_category';
  $handler->display->display_options['fields']['field_vendor_category']['label'] = '';
  $handler->display->display_options['fields']['field_vendor_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vendor_category']['delta_offset'] = '0';
  /* Field: Content: Vendor photo */
  $handler->display->display_options['fields']['field_vendor_photo']['id'] = 'field_vendor_photo';
  $handler->display->display_options['fields']['field_vendor_photo']['table'] = 'field_data_field_vendor_photo';
  $handler->display->display_options['fields']['field_vendor_photo']['field'] = 'field_vendor_photo';
  $handler->display->display_options['fields']['field_vendor_photo']['label'] = '';
  $handler->display->display_options['fields']['field_vendor_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vendor_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vendor_photo']['settings'] = array(
    'image_style' => 'vendor_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_vendor_photo']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_vendor_photo']['delta_offset'] = '0';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged']['id'] = 'flagged';
  $handler->display->display_options['fields']['flagged']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['flagged']['label'] = '';
  $handler->display->display_options['fields']['flagged']['exclude'] = TRUE;
  $handler->display->display_options['fields']['flagged']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged']['type'] = 'flag';
  $handler->display->display_options['fields']['flagged']['not'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vendor' => 'vendor',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Vendor top */
  $handler = $view->new_display('block', 'Vendor top', 'block');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'column-4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Vendor category (field_vendor_category) */
  $handler->display->display_options['arguments']['field_vendor_category_value']['id'] = 'field_vendor_category_value';
  $handler->display->display_options['arguments']['field_vendor_category_value']['table'] = 'field_data_field_vendor_category';
  $handler->display->display_options['arguments']['field_vendor_category_value']['field'] = 'field_vendor_category_value';
  $handler->display->display_options['arguments']['field_vendor_category_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_vendor_category_value']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_vendor_category_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_vendor_category_value']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_vendor_category_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_vendor_category_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_vendor_category_value']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Location: Province */
  $handler->display->display_options['arguments']['province']['id'] = 'province';
  $handler->display->display_options['arguments']['province']['table'] = 'location';
  $handler->display->display_options['arguments']['province']['field'] = 'province';
  $handler->display->display_options['arguments']['province']['default_action'] = 'default';
  $handler->display->display_options['arguments']['province']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['province']['default_argument_options']['code'] = '$cur_province_id = isset($_GET[\'province-id\'])? $_GET[\'province-id\'] : \'all\';
return $cur_province_id;';
  $handler->display->display_options['arguments']['province']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['province']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['province']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['province']['break_phrase'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vendor' => 'vendor',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Categories (field_vendor_tags) */
  $handler->display->display_options['filters']['field_vendor_tags_tid']['id'] = 'field_vendor_tags_tid';
  $handler->display->display_options['filters']['field_vendor_tags_tid']['table'] = 'field_data_field_vendor_tags';
  $handler->display->display_options['filters']['field_vendor_tags_tid']['field'] = 'field_vendor_tags_tid';
  $handler->display->display_options['filters']['field_vendor_tags_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_vendor_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_vendor_tags_tid']['expose']['operator_id'] = 'field_vendor_tags_tid_op';
  $handler->display->display_options['filters']['field_vendor_tags_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_vendor_tags_tid']['expose']['operator'] = 'field_vendor_tags_tid_op';
  $handler->display->display_options['filters']['field_vendor_tags_tid']['expose']['identifier'] = 'term-id';
  $handler->display->display_options['filters']['field_vendor_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_vendor_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_vendor_tags_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_vendor_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_vendor_tags_tid']['vocabulary'] = 'categories';
  $handler->display->display_options['filters']['field_vendor_tags_tid']['hierarchy'] = 1;

  /* Display: Vendor lastest view */
  $handler = $view->new_display('block', 'Vendor lastest view', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lastest view';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'column-4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content statistics: Most recent view */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['block_description'] = 'Vendor lastest view';

  /* Display: Recommend vendors : venue */
  $handler = $view->new_display('block', 'Recommend vendors : venue', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recommend vendors';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vendor' => 'vendor',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Vendor category (field_vendor_category) */
  $handler->display->display_options['filters']['field_vendor_category_value']['id'] = 'field_vendor_category_value';
  $handler->display->display_options['filters']['field_vendor_category_value']['table'] = 'field_data_field_vendor_category';
  $handler->display->display_options['filters']['field_vendor_category_value']['field'] = 'field_vendor_category_value';
  $handler->display->display_options['filters']['field_vendor_category_value']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['block_description'] = 'Recommend vendors: venue';

  /* Display: Recommend vendors : honeymoon */
  $handler = $view->new_display('block', 'Recommend vendors : honeymoon', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recommend vendors';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vendor' => 'vendor',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Vendor category (field_vendor_category) */
  $handler->display->display_options['filters']['field_vendor_category_value']['id'] = 'field_vendor_category_value';
  $handler->display->display_options['filters']['field_vendor_category_value']['table'] = 'field_data_field_vendor_category';
  $handler->display->display_options['filters']['field_vendor_category_value']['field'] = 'field_vendor_category_value';
  $handler->display->display_options['filters']['field_vendor_category_value']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['block_description'] = 'Recommend vendors: honeymoon';

  /* Display: Recommend vendors */
  $handler = $view->new_display('block', 'Recommend vendors', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recommend vendors';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Vendor category (field_vendor_category) */
  $handler->display->display_options['arguments']['field_vendor_category_value']['id'] = 'field_vendor_category_value';
  $handler->display->display_options['arguments']['field_vendor_category_value']['table'] = 'field_data_field_vendor_category';
  $handler->display->display_options['arguments']['field_vendor_category_value']['field'] = 'field_vendor_category_value';
  $handler->display->display_options['arguments']['field_vendor_category_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_vendor_category_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_vendor_category_value']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_vendor_category_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_vendor_category_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_vendor_category_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Recommend vendors';
  $translatables['vendors_block'] = array(
    t('Master'),
    t('Vendors block'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('bookmark'),
    t('Vendor top'),
    t('All'),
    t('Category'),
    t('Vendor lastest view'),
    t('Lastest view'),
    t('Recommend vendors : venue'),
    t('Recommend vendors'),
    t('Recommend vendors: venue'),
    t('Recommend vendors : honeymoon'),
    t('Recommend vendors: honeymoon'),
  );
  $export['vendors_block'] = $view;

  return $export;
}
