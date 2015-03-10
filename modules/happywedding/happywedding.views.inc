<?php
/**
 * Implements hook_views_pre_view().
 */
function happywedding_views_pre_render($view) {
  //dpm($view->argument['tid']);
  if ($view->name == 'bo_vendor_info' || $view->name == 'vendor_products' || $view->name == 'vendor_photos'  || $view->name == 'vendor_reviews' || $view->name == 'vendor_news') {
    $vendor =node_load($view->args[0]);
    //dpm($vendor);
    //if ($view->current_display == 'page') {
    $view->set_title($vendor->title);
    //}
  } else if($view->name == "tips_sidebar"){ //$view->name == "top_reviews" || 
    //dpm($view);
    //$view->exposed_raw_input = array("field_category"=> 2);
  }
}

function happywedding_views_pre_build(&$view){

}


function happywedding_views_pre_view(&$view, &$display_id, &$args){

//  if( $view->name=='vendors_block'
//  // Check that we are altering the correct view based on $display_id
//  // and $view->name
//  ) {
//    dpm($args); dpm($view);
//  // Load any nodes or data you might need.
//
//  // Then finally populate the $args array.
//  dpm($_GET['term-id']);
//    if(isset($_GET['term-id'])) {
//      $args[] = $_GET['term-id'][0];//NEW_FILTER_VALUE;
//    } else {
//      $args[] ='all';
//    }
//    dpm($args);
//  }
  if ($view->name == 'subpage_tips' && $view->current_display == 'relate_tips') {
    //dpm($view->args);
//    dpm(arg(0));
//    dpm(arg(1));
//    dpm(arg(0));
//    $category_name  = "Planning";//arg(0);
//    dpm($category_name);
//    //********* current plan
//    $field = field_info_field('field_category');
//    $labels = $field['settings']['allowed_values'];
//    dpm($labels);
//    $category_id = array_search($category_name, $labels);
    if(!isset($view->args[1])) {
      $vendor = node_load(arg(1));
      //dpm($vendor);
      if($vendor) {
        $args = array($vendor->field_category['und'][0]['value']);
        $view->set_arguments($args);
        //$view->execute();
        //dpm($view);
      }
    }
  }  else if($view->name == "tips_sidebar"){
    if (!empty($_SERVER['HTTP_X_REQUESTED_WITH']) && strtolower($_SERVER['HTTP_X_REQUESTED_WITH']) == 'xmlhttprequest') {
      // AJAX request
       //dpm('ajax request');
    } else {
      
      $cat = arg(1);
      if(arg(0)=='node') $cat=1;//TODO cat= node->cat
      if($cat=='' || $cat=='all') $cat=1;
      $view->exposed_input['field_category'] =  $cat;
      //dpm('no ajax set cat');
    }
  } else if($view->name == "top_reviews"){
    if (!empty($_SERVER['HTTP_X_REQUESTED_WITH']) && strtolower($_SERVER['HTTP_X_REQUESTED_WITH']) == 'xmlhttprequest') {
      // AJAX request
       //dpm('ajax request');
    } else {
      $cat = arg(1);
      if(arg(0)=='node') $cat=1;//TODO cat= node->cat
      if($cat==''|| $cat=='all') $cat=1;
      $view->exposed_input['vendor_category'] =  $cat;
      //dpm('no ajax set cat');
      //dpm($view);
    }
  } else if($view->name == "user_inquiry_detail" || $view->name == "vendor_inquiry_detail") {
    //dpm($view);

    // Render comment form for Node
    $nid = $view->args[1];
    $form = drupal_get_form("comment_node_inquiry_form",(object) array('nid' => $nid ));
    $uid = $view->args[0];
    if($view->name == "user_inquiry_detail") $backurl = "/user/$uid/inquiries";
    else $backurl = "/bo/vendor/$uid/inquiries";
    //dpm($form);
    $header = "<a href='$backurl'>".t("BACK")."</a>";
    $footer = drupal_render($form);
    //$footer= t('test');
    $view->add_item('page', 'footer', 'views', 'area', array('content' => $footer, 'format' => 'full_html', 'empty'=>1));
    $view->add_item('page', 'header', 'views', 'area', array('content' => $header, 'format' => 'full_html', 'empty'=>1));
    //dpm($view);dpm($view->get_items('footer'));
  } 
  
  
}
function happywedding_form_comment_node_inquiry_form_alter(&$form, &$form_state, $form_id) {
 
  if($form['#node']->type=='inquiry') {
    $form['#submit'][] = '_happywedding_redirect_inquiry_comment_form';
    //$form['actions']['submit']['#submit'][] = '_happywedding_redirect_inquiry_comment_form';
  }
  //dpm($form);
  //dpm($form_state);
}
function _happywedding_redirect_inquiry_comment_form($form, &$form_state) {
  global $user;
   //code here
  if (in_array('vendor', $user->roles)) {
    $vendor_id = $form['#node']->field_to_vendor["und"][0]["target_id"];
    $basepath = 'bo/vendor/'.$vendor_id.'/inquiries/'.$form['#node']->nid.'/view';
  } else {
    $basepath = 'user/'. $form['#node']->uid. '/inquiries/'.$form['#node']->nid.'/view';
  }
  $form_state['redirect'] = $basepath; //REDIRECTS TO STEP 2 after submit
  //dpm($form_state);
}

function happywedding_flag_flag($flag, $entity_id, $account, $flagging) {
//  $view_name = '<view_name>';
//  $display_id = '<display_id>';
//  $cid = $view_name . ':' . $display_id;
//  if (db_table_exists('cache_views_data')) {
//    db_delete('cache_views_data')
//      ->condition('cid', db_like($cid) . '%', 'LIKE')
//      ->execute();
//  }
}
function happywedding_preprocess_image(&$variables) {
  $attributes = &$variables['attributes'];

  foreach (array('width', 'height') as $key) {
    unset($attributes[$key]);
    unset($variables[$key]);
  }
}