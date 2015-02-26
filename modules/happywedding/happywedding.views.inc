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
  }
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
  }
}