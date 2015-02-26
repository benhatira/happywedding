<?php
/**
* Implements hook_block_info().
*/
function happywedding_block_info() {
  $blocks = array();

  $blocks['user_register_form'] = array(
    'info' => t('User Register Form'),
  );
  
  $blocks['vendor_register_form'] = array(
    'info' => t('Vendor Register Form'),
  );

  return $blocks;
}

/**
* Implements hook_block_view().
*/
function happywedding_block_view($delta = '') {
  $block = array();

  switch ($delta) {
    case 'user_register_form':
      $block['subject'] = 'Register';
      $block['content'] = _happywedding_user_register_form_block();
      break;
    case 'vendor_register_form':
      $block['subject'] = 'Register';
      $block['content'] = _happywedding_vendor_register_form_block();
      break;
  }

  return $block;
}

function _happywedding_user_register_form_block() {
 // $output = t('Hello world');
  $form = drupal_get_form('user_register_form');
  dpm($form);
   echo "<!--<pre>";print_r($form);echo "</pre>-->";
  $form['account']['pass']['pass1']['#title_display'] = 'invisible';
  $form['account']['pass']['pass1']['#attributes']['placeholder'] = t( 'PASSWORD' );
  $form['account']['pass']['pass2']['#title_display'] = 'invisible';
  $form['account']['pass']['pass2']['#attributes']['placeholder'] = t( 'CONFIRM PASSWORD');
  return drupal_render($form);
  //return $output;
}

function _happywedding_vendor_register_form_block() {
 // $output = t('Hello world');
  $form = drupal_get_form('user_register_form');
  //$vendor_form = drupal_get_form('vendor_node_form');
  dpm('get form at vendor register form');
  dpm($form);
//  /dpm($vendor_form["field_vendor_category"]);
  //echo "<!--<pre>";print_r($form);echo "</pre>-->";
  //$form['account']['pass']['pass1']['#title_display'] = 'invisible';
  $form['field_first_name'][LANGUAGE_NONE][0]['value']['#title_display'] = 'before';
  $form['field_last_name'][LANGUAGE_NONE][0]['value']['#title_display'] = 'before';
  $form['account']['name']['#title_display'] = 'before';
  $form['account']['mail']['#title_display'] = 'before';
  $form['account']['pass']['pass1']['#attributes']['placeholder'] = t( 'PASSWORD' );
  //$form['account']['pass']['pass2']['#title_display'] = 'invisible';
  $form['account']['pass']['pass2']['#attributes']['placeholder'] = t( 'CONFIRM PASSWORD');
  
  //return $output;
  $form["field_vendor_category"] = array(
    "#type" => "select",
    "#attributes" => array(
      "class" => array("field-type-list-integer"),
      "name" => array("field-vendor-category[]")
    ),
    "#weight" => 3,
    "#title" => "Category",
    "#tree" => 1,
    "#required" => 1,
    "#delta" => 0,
    "#field_name" => "field_vendor_category",
    "#language" => "und",
    "#options" => array("Planner","Venue","Fashion","Beauty","Catering","Honeymoon","Others"),
    "und" => array(
      "0" => array()
    )
  );
  
  dpm(location_get_provinces("TH")); //xx not select 


//  $form["field_vendor_category"] = array(
//    "#type" => "container",
//    "#attributes" => array(
//      "class" => array("field-type-list-integer", "field-widget-multiple-selects")
//    ),
//    "#weight" => 3,
//    "#tree" => 1,
//    "#language" => "und",
//    "und" => array(
//      "0" => array(
//        "#language" => "und",
//        "#columns" => array("value"),
//        "#required" => 1,
//        "#delta" => 0,
//        "#weight" => 0,
//        "value" => array(
//          "#columns" => array("value"),
//          "#required" => 1,
//          "#delta" => 0,
//          "#weight" => 0,
//          "#type" => "select",
//          "#default_value" => "" ,
//          "#options" => array("Planner","Venue","Fashion","Beauty","Catering","Honeymoon","Others"),
//          "#element_validate" => array("multiple_selects_widget_validate")
//        ),
//      ),
//      "1" => array(
//        "#language" => "und",
//        "#columns" => array("value"),
//        "#required" => 1,
//        "#delta" => 1,
//        "#weight" => 0,
//        "value" => array(
//          "#columns" => array("value"),
//          "#required" => 1,
//          "#delta" => 1,
//          "#weight" => 0,
//          "#type" => "select",
//          "#default_value" => null ,
//          "#options" => array("Planner","Venue","Fashion","Beauty","Catering","Honeymoon","Others"),
//          "#element_validate" => array("multiple_selects_widget_validate")
//        ),
//      ),
//      "#theme" => "field_multiple_value_form",
//      "#field_name" => "field_vendor_category",
//      "#cardinality" => 3,
//      "#title" => "Category",
//      "#description" => "",
//      "#max_delta" => 2,
//      "#after_build" => array("field_form_element_after_build"),
//      "#language" => "und"
//    ),
//  "#access" => 1
//  );
  
  return drupal_render($form);
}