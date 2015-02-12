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

  // Exported menu link: main-menu_:forum
  $menu_links['main-menu_:forum'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'ฟอรัม',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_:forum',
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
    'weight' => -43,
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
    'weight' => -45,
    'customized' => 1,
    'language' => 'th',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_:vendors
  $menu_links['main-menu_:vendors'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'vendors',
    'router_path' => 'vendors',
    'link_title' => 'เวนเดอร์',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_:vendors',
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
  // Exported menu link: menu-secondary-menu_beauty:tips/4
  $menu_links['menu-secondary-menu_beauty:tips/4'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'tips/4',
    'router_path' => 'tips',
    'link_title' => 'BEAUTY',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_beauty:tips/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_catering:tips/5
  $menu_links['menu-secondary-menu_catering:tips/5'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'tips/5',
    'router_path' => 'tips',
    'link_title' => 'CATERING',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_catering:tips/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_fashion:tips/3
  $menu_links['menu-secondary-menu_fashion:tips/3'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'tips/3',
    'router_path' => 'tips',
    'link_title' => 'FASHION',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_fashion:tips/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_honeymoons:tips/6
  $menu_links['menu-secondary-menu_honeymoons:tips/6'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'tips/6',
    'router_path' => 'tips',
    'link_title' => 'HONEYMOONS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_honeymoons:tips/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_others:tips/7
  $menu_links['menu-secondary-menu_others:tips/7'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'tips/7',
    'router_path' => 'tips',
    'link_title' => 'OTHERS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_others:tips/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 7,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_planning:tips/1
  $menu_links['menu-secondary-menu_planning:tips/1'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'tips/1',
    'router_path' => 'tips',
    'link_title' => 'PLANNING',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_planning:tips/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_venue:tips/2
  $menu_links['menu-secondary-menu_venue:tips/2'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'tips/2',
    'router_path' => 'tips',
    'link_title' => 'VENUE',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-secondary-menu_venue:tips/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
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
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
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
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('BEAUTY');
  t('CATERING');
  t('Compose tips');
  t('FASHION');
  t('GALLERY');
  t('HOME');
  t('HONEYMOONS');
  t('Node locations');
  t('OTHERS');
  t('PLANNING');
  t('Search');
  t('Tip');
  t('User locations');
  t('VENUE');
  t('Vendor');
  t('ฟอรัม');
  t('หน้าแรก');
  t('เวนเดอร์');
  t('แกลลอรี่');


  return $menu_links;
}
