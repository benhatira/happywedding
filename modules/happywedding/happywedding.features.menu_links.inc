<?php
/**
 * @file
 * happywedding.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function happywedding_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_gallery:gallery
  $menu_links['main-menu_gallery:gallery'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gallery',
    'router_path' => 'gallery',
    'link_title' => 'GALLERY',
    'options' => array(
      'identifier' => 'main-menu_gallery:gallery',
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_home:home
  $menu_links['main-menu_home:home'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'HOME',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:home',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_accessory:accessory
  $menu_links['menu-secondary-menu_accessory:accessory'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'accessory',
    'router_path' => 'accessory',
    'link_title' => 'ACCESSORY',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_accessory:accessory',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_all-tips:tips
  $menu_links['menu-secondary-menu_all-tips:tips'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'tips',
    'router_path' => 'tips',
    'link_title' => 'ALL TIPS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_all-tips:tips',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_beautyhealth:beauty-health
  $menu_links['menu-secondary-menu_beautyhealth:beauty-health'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'beauty-health',
    'router_path' => 'beauty-health',
    'link_title' => 'BEAUTY&HEALTH',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_beautyhealth:beauty-health',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_dress:dress
  $menu_links['menu-secondary-menu_dress:dress'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'dress',
    'router_path' => 'dress',
    'link_title' => 'DRESS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_dress:dress',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_flowerdeco:flower-deco
  $menu_links['menu-secondary-menu_flowerdeco:flower-deco'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'flower-deco',
    'router_path' => 'flower-deco',
    'link_title' => 'FLOWER&DECO',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_flowerdeco:flower-deco',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 7,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_fooddining:food-dining
  $menu_links['menu-secondary-menu_fooddining:food-dining'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'food-dining',
    'router_path' => 'food-dining',
    'link_title' => 'FOOD&DINING',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_fooddining:food-dining',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_gift:gift
  $menu_links['menu-secondary-menu_gift:gift'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'gift',
    'router_path' => 'gift',
    'link_title' => 'GIFT',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_gift:gift',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 8,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_honeymoonstravel:honeymoons-travel
  $menu_links['menu-secondary-menu_honeymoonstravel:honeymoons-travel'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'honeymoons-travel',
    'router_path' => 'honeymoons-travel',
    'link_title' => 'HONEYMOONS&TRAVEL',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_honeymoonstravel:honeymoons-travel',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_others:others
  $menu_links['menu-secondary-menu_others:others'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'others',
    'router_path' => 'others',
    'link_title' => 'OTHERS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_others:others',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_planning:planning
  $menu_links['menu-secondary-menu_planning:planning'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'planning',
    'router_path' => 'planning',
    'link_title' => 'PLANNING',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_planning:planning',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_registry:registry
  $menu_links['menu-secondary-menu_registry:registry'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'registry',
    'router_path' => 'registry',
    'link_title' => 'REGISTRY',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_registry:registry',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 8,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_venue:venue
  $menu_links['menu-secondary-menu_venue:venue'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'venue',
    'router_path' => 'venue',
    'link_title' => 'VENUE',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_venue:venue',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('ACCESSORY');
  t('ALL TIPS');
  t('BEAUTY&HEALTH');
  t('DRESS');
  t('FLOWER&DECO');
  t('FOOD&DINING');
  t('GALLERY');
  t('GIFT');
  t('HOME');
  t('HONEYMOONS&TRAVEL');
  t('OTHERS');
  t('PLANNING');
  t('REGISTRY');
  t('VENUE');


  return $menu_links;
}
