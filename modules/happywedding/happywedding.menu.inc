<?php

function happywedding_menu() {
  $items['admin/vendors/import'] = array(
    'page callback' => 'happywedding_vendors_import',
    'page arguments' => array(1, 'foo'),
    'access arguments' => array('create vendor content'),
    'type' => MENU_CALLBACK,
    'title' => "Vendors import",
    //'access arguments' => array('access content'),
  );

  $items['bo/vendor/'] = array(
    'page callback' => 'happywedding_bo_vendor_report',
    'page arguments' => array(2),
    'access arguments' => array('create vendor content'),
    'type' => MENU_LOCAL_TASK,
    'title' => "Report",
    
    //'type' => MENU_LOCAL_TASK,
    //'title' => "Vendors Info",
  );
  
  $items['bo/vendor/%/report'] = array(
    'page callback' => 'happywedding_bo_vendor_report',
    'page arguments' => array(2),
    'access arguments' => array('create vendor content'),
    'type' => MENU_LOCAL_TASK,
    'title' => "Report",
    
    //'type' => MENU_LOCAL_TASK,
    //'title' => "Vendors Info",
  );
  
  $items['node/%/report'] = array(
    'page callback' => 'happywedding_bo_vendor_report',
    'page arguments' => array(2),
    'access arguments' => array('create vendor content' ),
    'access callback' => '_happywedding_node_vendors_access_callback',
    'type' => MENU_LOCAL_TASK,
    'title' => "Report",
    
    //'type' => MENU_LOCAL_TASK,
    //'title' => "Vendors Info",
  );
  
/*  $items['happywedding/%ctools_js/comment/reply/%node'] = array(
    'title' => 'Comment',
    'page callback' => 'happywedding_comment_reply',
    'page arguments' => array(1, 4),
    'access arguments' => array('post comments'),
    //'file' => 'modal_forms.pages.inc',
    'type' => MENU_CALLBACK,
  );*/
  return $items;
}

function happywedding_menu_alter(&$items) {
  // Set a custom access callback function for our view page display path.
  $items['node/%/products']['access callback'] = 'happywedding_node_vendors_access_callback';
  $items['node/%/photos']['access callback'] = 'happywedding_node_vendors_access_callback';
}

function happywedding_module_implements_alter(&$implementations, $hook) {
  // When the implementations of hook_menu_alter are called, we need our module
  // to be called after views, so let's remove it from the implementations then
  // add it to the end.
  if ($hook == 'menu_alter') {
    if (isset($implementations['happywedding'])) {
      unset($implementations['happywedding']);
      $implementations['happywedding'] = FALSE;
    }
  }
}
function happywedding_node_vendors_access_callback($options = array()) {

  // Grab the default access callback function name, prepare the access
  // arguments, then see what the default access call back result is
  // according to views.
  $access_callback = $options[0];
  $access_arguments = $options[1];
  //dpm($access_callback);
  //dpm($access_arguments);
  //dpm($options);
  $access = call_user_func_array($access_callback, $access_arguments);

  // If the default access call back was false, then the user is not allowed
  // access.
  if (!$access) {
    return FALSE;
  }
  
  return _happywedding_node_vendors_access_callback();
  // So far the user is allowed access from the views' settings, let's now
  // determine if we want to customize the access to the tab.

  // If the node type is not an article, then we'll deny access, otherwise grant
  // access. 

}
function _happywedding_node_vendors_access_callback(){
  $node = node_load(arg(1));
  if ($node && $node->type != 'vendor') {
    return FALSE;
  }
  else {
    return TRUE; 
  }
}

//function happywedding_custom_theme() {
//  if (arg(0) == 'node') {
//    return 'seven';
//  }
//}