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

  // Exported menu link: main-menu_:gallery
  $menu_links['main-menu_:gallery'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gallery',
    'router_path' => 'gallery',
    'link_title' => 'แกลลอรี่',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_:gallery',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'th',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_:home
  $menu_links['main-menu_:home'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'หน้าแรก',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_:home',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'th',
    'menu_links_customized' => 1,
  );
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
  // Exported menu link: menu-secondary-menu_:accessory
  $menu_links['menu-secondary-menu_:accessory'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'accessory',
    'router_path' => 'accessory',
    'link_title' => 'เครื่องประดับ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_:accessory',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'th',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_:beauty-health
  $menu_links['menu-secondary-menu_:beauty-health'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'beauty-health',
    'router_path' => 'beauty-health',
    'link_title' => 'สุขภาพ&ความงาม',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_:beauty-health',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'th',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_:dress
  $menu_links['menu-secondary-menu_:dress'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'dress',
    'router_path' => 'dress',
    'link_title' => 'ชุดแต่งงาน',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_:dress',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'th',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_:flower-deco
  $menu_links['menu-secondary-menu_:flower-deco'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'flower-deco',
    'router_path' => 'flower-deco',
    'link_title' => 'ดอกไม้&ตกแต่ง',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_:flower-deco',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'th',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_:food-dining
  $menu_links['menu-secondary-menu_:food-dining'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'food-dining',
    'router_path' => 'food-dining',
    'link_title' => 'อาหาร&ดินเนอร์',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_:food-dining',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'th',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_:gift
  $menu_links['menu-secondary-menu_:gift'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'gift',
    'router_path' => 'gift',
    'link_title' => 'ของขวัญ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_:gift',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'th',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_:honeymoons-travel
  $menu_links['menu-secondary-menu_:honeymoons-travel'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'honeymoons-travel',
    'router_path' => 'honeymoons-travel',
    'link_title' => 'ฮันนีมูน&ท่องเที่ยว',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_:honeymoons-travel',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'th',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_:others
  $menu_links['menu-secondary-menu_:others'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'others',
    'router_path' => 'others',
    'link_title' => 'อื่นๆ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_:others',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'language' => 'th',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_:planning
  $menu_links['menu-secondary-menu_:planning'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'planning',
    'router_path' => 'planning',
    'link_title' => 'แพลนนิ่ง',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_:planning',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'th',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_:venue
  $menu_links['menu-secondary-menu_:venue'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'venue',
    'router_path' => 'venue',
    'link_title' => 'สถานที่',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_:venue',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'th',
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
    'weight' => -36,
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
    'weight' => -35,
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
    'weight' => -37,
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
    'weight' => -32,
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
    'weight' => -33,
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
    'weight' => -31,
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
    'weight' => -34,
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
    'weight' => -29,
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
    'weight' => -50,
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
    'weight' => -30,
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
    'weight' => -38,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_:dress
  $menu_links['navigation_:dress'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'dress',
    'router_path' => 'dress',
    'link_title' => '',
    'options' => array(
      'identifier' => 'navigation_:dress',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_:planning
  $menu_links['navigation_:planning'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'planning',
    'router_path' => 'planning',
    'link_title' => '',
    'options' => array(
      'identifier' => 'navigation_:planning',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_add-content:node/add
  $menu_links['navigation_add-content:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'identifier' => 'navigation_add-content:node/add',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_basic-page:node/add/page
  $menu_links['navigation_basic-page:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      ),
      'identifier' => 'navigation_basic-page:node/add/page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_compose-tips:filter/tips
  $menu_links['navigation_compose-tips:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(
      'identifier' => 'navigation_compose-tips:filter/tips',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_node-locations:map/node
  $menu_links['navigation_node-locations:map/node'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'map/node',
    'router_path' => 'map/node',
    'link_title' => 'Node locations',
    'options' => array(
      'identifier' => 'navigation_node-locations:map/node',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_photo:node/add/photo
  $menu_links['navigation_photo:node/add/photo'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/photo',
    'router_path' => 'node/add/photo',
    'link_title' => 'Photo',
    'options' => array(
      'identifier' => 'navigation_photo:node/add/photo',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_search:search
  $menu_links['navigation_search:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'navigation_search:search',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_tip:node/add/article
  $menu_links['navigation_tip:node/add/article'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Tip',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.',
      ),
      'identifier' => 'navigation_tip:node/add/article',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_tips:admin/tips
  $menu_links['navigation_tips:admin/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/tips',
    'router_path' => 'admin/tips',
    'link_title' => 'Tips',
    'options' => array(
      'identifier' => 'navigation_tips:admin/tips',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: navigation_user-locations:map/user
  $menu_links['navigation_user-locations:map/user'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'map/user',
    'router_path' => 'map/user',
    'link_title' => 'User locations',
    'options' => array(
      'identifier' => 'navigation_user-locations:map/user',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_vendor:node/add/vendor
  $menu_links['navigation_vendor:node/add/vendor'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/vendor',
    'router_path' => 'node/add/vendor',
    'link_title' => 'Vendor',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_vendor:node/add/vendor',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: navigation_vendors:admin/vendors
  $menu_links['navigation_vendors:admin/vendors'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/vendors',
    'router_path' => 'admin/vendors',
    'link_title' => 'Vendors',
    'options' => array(
      'identifier' => 'navigation_vendors:admin/vendors',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('ACCESSORY');
  t('Add content');
  t('BEAUTY&HEALTH');
  t('Basic page');
  t('Compose tips');
  t('DRESS');
  t('FLOWER&DECO');
  t('FOOD&DINING');
  t('GALLERY');
  t('GIFT');
  t('HOME');
  t('HONEYMOONS&TRAVEL');
  t('Node locations');
  t('OTHERS');
  t('PLANNING');
  t('Photo');
  t('REGISTRY');
  t('Search');
  t('Tip');
  t('Tips');
  t('User locations');
  t('VENUE');
  t('Vendor');
  t('Vendors');
  t('ของขวัญ');
  t('ชุดแต่งงาน');
  t('ดอกไม้&ตกแต่ง');
  t('สถานที่');
  t('สุขภาพ&ความงาม');
  t('หน้าแรก');
  t('อาหาร&ดินเนอร์');
  t('อื่นๆ');
  t('ฮันนีมูน&ท่องเที่ยว');
  t('เครื่องประดับ');
  t('แกลลอรี่');
  t('แพลนนิ่ง');


  return $menu_links;
}
