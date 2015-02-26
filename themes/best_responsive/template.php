<?php
/**
 * Implements hook_html_head_alter().
 * This will overwrite the default meta character type tag with HTML5 version.
 */
function best_responsive_html_head_alter(&$head_elements) {
  $head_elements['system_meta_content_type']['#attributes'] = array(
    'charset' => 'utf-8'
  );
}

/**
 * Insert themed breadcrumb page navigation at top of the node content.
 */
function best_responsive_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    // Use CSS to hide titile .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    // comment below line to hide current page to breadcrumb
$breadcrumb[] = drupal_get_title();
    $output .= '<nav class="breadcrumb">' . implode(' » ', $breadcrumb) . '</nav>';
    return $output;
  }
}

/**
 * Override or insert variables into the page template.
 */
function best_responsive_preprocess_page(&$vars) {
  if (isset($vars['main_menu'])) {
    $vars['main_menu'] = theme('links__system_main_menu', array(
      'links' => $vars['main_menu'],
      'attributes' => array(
        'class' => array('links', 'main-menu', 'clearfix'),
      ),
      'heading' => array(
        'text' => t('Main menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
  else {
    $vars['main_menu'] = FALSE;
  }
  if (isset($vars['secondary_menu'])) {
    $vars['secondary_menu'] = theme('links__system_secondary_menu', array(
      'links' => $vars['secondary_menu'],
      'attributes' => array(
        'class' => array('links', 'secondary-menu', 'clearfix'),
      ),
      'heading' => array(
        'text' => t('Secondary menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
  else {
    $vars['secondary_menu'] = FALSE;
  }
 // $vars['user_data'] = array();
  
  if ($vars['logged_in']) {
    $user = user_load($vars['user']->uid);
    $vars['user_data'] = array( 'name' => $user->name);
    $vars['user_data']['wedding_days_away'] = t('Your wedding is') . ' 233 ' . ('days away.');
    if( !empty($user->picture->uri)) {
    $vars['user_data']['avatar'] = theme_image_style(
      array(
        'style_name' => 'user_avatar',
        'path' => $user->picture->uri ,
        'attributes' => array(
        'class' => 'avatar'
            ),
        'width' => 150,
        'height' => 150,             
        )
      );
    } else
      $vars['user_data']['avatar'] = '<img class="avatar" typeof="foaf:Image" src="'. variable_get('user_picture_default').'" width="150" height="150" alt="">';
    
  } else {
   
    //echo '<img src="/sites/all/themes/my_theme/images/default.png" />';
  }
  
  $vars['ads'] = _get_ads_views();
  
}

function _get_ads_views() {
  
  $view = views_get_view('ads_view');
  if($view==null) return array();
  //dpm($view);
  $view->execute();
  $images = array();
  foreach($view->result as $key => $val) {
    $image = array( 
      "title" => $val->node_title, 
      "uri" => $val->field_field_ad_photo[0]['raw']['uri'], 
      "style" => $val->field_field_ad_photo[0]['rendered']['#image_style'] );
    
    $image["url"] = image_style_url($image["style"], $image["uri"] );
    //$image["path"] = image_style_path($image["style"], $image["uri"] );
    //$image["path"] = '/'. variable_get('file_public_path', conf_path() . '/files') . '/' . file_uri_target($image["path"]);
    $images[] = $image;
  }
  return $images;
}

/**
 * Duplicate of theme_menu_local_tasks() but adds clearfix to tabs.
 */
function best_responsive_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<ul class="tabs primary clearfix">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs secondary clearfix">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }
  return $output;
}

/**
 * Override or insert variables into the node template.
 */
function best_responsive_preprocess_node(&$variables) {
  $node = $variables['node'];
  if ($variables['view_mode'] == 'full' && node_is_page($variables['node'])) {
    $variables['classes_array'][] = 'node-full';
  }
  $variables['date'] = t('!datetime', array('!datetime' =>  date('j F Y', $variables['created'])));
}

function best_responsive_page_alter($page) {
  // <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1"/>
  $viewport = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
    'name' =>  'viewport',
    'content' =>  'width=device-width, initial-scale=1, maximum-scale=1'
    )
  );
  drupal_add_html_head($viewport, 'viewport');
}


/**
 * Add javascript files for front-page jquery slideshow.
 */
if (drupal_is_front_page()) {
  drupal_add_js(drupal_get_path('theme', 'best_responsive') . '/js/flexslider-min.js');
  drupal_add_js(drupal_get_path('theme', 'best_responsive') . '/js/slide.js');
}

function best_responsive_login_menu($logged_in){
  global $user;
  $output = "<ul class='nav nav-login'>";
  if($logged_in) {
    $output .= "<li class='login fleft'><a href='/user'>". t("MY PAGE"). "</a></li>";
    $output .= "<li class='logout fleft'><a href='/user/logout'>". t("LOGOUT"). "</a></li>";
  } else {
    $output .= "<li class='login fleft'><a href='/user'>". t("LOGIN / REGISTER"). "</a></li>";
    $output .= "<li class='vendor fleft'><a href='/bo/vendor'>". t("FOR VENDORS"). "</a></li>";
    $output .= "<li class='vendor fright'><a href='/bo/vendor'>". t("ENG"). "</a></li>";
    //Social icon
    $output .= "<li class='vendor fright'>";
    $output .= "<span class='facebook icon'></span>";
    $output .= "<span class='twitter icon'></span>";
    $output .= "<span class='instagram icon'></span>";
    $output .= "<span class='mail icon'></span>";
    $output .= "</li>";
  }
    //$output           <li>t("L_SWITCHER")</li>
          
  $output .= "</ul>";
  return $output;

}
