<?php
/**
 * Implements hook_views_pre_view().
 */
function happywedding_views_pre_render($view) {
  //dpm($view->argument['tid']);
  if ($view->name == 'bo_vendor_info' || $view->name == 'vendor_products' || $view->name == 'vendor_photos') {
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
}