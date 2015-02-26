<?php

function happywedding_node_view($node, $view_mode, $langcode) {
  if($node->type=="vendor" && $node->comment==2) {
    $comment_link = "<a href='/comment/reply/" . $node->nid. "' class='write-review'>Write Review</a>";
    $node->content['comment_modal_link'] = array(
      '#markup' => $comment_link,
      '#weight' => -10,
      //'#theme' => 'mymodule_my_additional_field',
    );
    //$node->comment = 0;
    //dpm($node);
  }
}
 
//function happywedding_node_validate($node, $form, &$form_state) {
//  
//  if($node->type=="vendor") {
//    //dpm($node);dpm($form_state['clicked_button']);
//    //for($node->field_vendor_tags[LANGUAGE_NONE])
//    foreach ($node->field_vendor_tags[LANGUAGE_NONE] as $key => $val) {
//      //$term = taxonomy_term_load($val['tid']);
//      //dpm($term);$term->name;
//      #$node->field_vendor_category[LANGUAGE_NONE][]['value'] = 
//    }
//  }
//}

function _happywedding_render_searchbox() {
  $field = field_info_field('field_vendor_category');
  $catid = arg(1);
  if(!isset($catid)) $catid = 1;
  $label = $field['settings']['allowed_values'][$catid];
  $output = "<div class='search-vendors-title'>$label : Search vendors</div>";
  $output .= "<form id='search-vendors' name='search-vendors' action='/vendors/$catid?' method='GET'>";
  //$output .= "<input name='category' value=''>";
  $cur_term_id = isset($_GET['term-id'])? $_GET['term-id'] : '';
  if(!is_array($cur_term_id)) $cur_term_id = array($cur_term_id);
  //dpm( $cur_term_id);
  $cur_term_name = '';
  //$cur_cat_id[0] = arg(1)? arg(1) : 1;
  $cur_province_id = isset($_GET['province-id'])? $_GET['province-id'] : '';
  
//  switch($catid) {
//    case 1 : $name = "Planner";break;
//    case 2 : $name = "Venue";break;
//    case 3 : $name = "Fashion";break;
//    case 4 : $name = "Beauty";break;
//    case 5 : $name = "Catering";break;
//    case 6 : $name = "Honeymoon";break;
//    default : $name = "Others"; break;
//  }
  //$output .= "<input type='hidden' name='cat-id' value='$catid'>";
//  $term_array  =  taxonomy_get_term_by_name($label);
////  $query = new EntityFieldQuery;
////$term_array = $query
////  ->entityCondition('entity_type', 'taxonomy_term')
////  ->propertyCondition('name', $name)
////  //->propertyCondition('vid', 1)
////  ->execute();
//  foreach ($term_array as $key => $value ) {
//    //dpm($value);
//    $parent = $value;
////    /break;
//  }
  $cat_term = _happywedding_get_terms_from_category_label($label);//taxonomy_get_children($parent->tid, $parent->vid );
  $term_list = $cat_term['children'];
  //dpm($term_list);
  
  //dpm($term_list);
  $output .= "<div class='subcategories'><span>Type : </span><select name='term-id[]' id='select-term-id' >";
  $output .= "<option value='".$cat_term["tid"]."' >All</option>";
  foreach ($term_list as $key => $term ) {
    if($term->tid==$cur_term_id[0]) {
      $cur_term_name = $term->name;
      $output .= "<option value='$term->tid' selected>$term->name</option>";
    } else
      $output .= "<option value='$term->tid'>$term->name</option>";
  }
  $output .= "</select></div>";
  
  //Dress Type render
  if($cur_term_name=='Dress') {
    $subterm_list = taxonomy_get_children($cur_term_id[0]);
    //dpm($subterm_list);
    $output .= "<div class='subcategories'><span>For : </span><select name='term-id[]' id='select-term-id' >";
    $output .= "<option value='".$cat_term["tid"]."' >All</option>";
    foreach ($subterm_list as $key => $term ) {
    if(isset($cur_term_id[1]) && $term->tid==$cur_term_id[1]) {
      $output .= "<option value='$term->tid' selected>$term->name</option>";
    } else
      $output .= "<option value='$term->tid'>$term->name</option>";
    }
    $output .= "</select></div>";
  
  }
  //Ring Type render
  if($cur_term_name=='Ring') {
    $subterm_list = taxonomy_get_children($cur_term_id[0]);
    //dpm($subterm_list);
    $output .= "<div class='subcategories'><span>For : </span><select name='term-id[]' id='select-dress-term-id' >";
    $output .= "<option value='".$cat_term["tid"]."' >All</option>";
    foreach ($subterm_list as $key => $term ) {
    if(isset($cur_term_id[1]) && $term->tid==$cur_term_id[1]) {
      $output .= "<option value='$term->tid' selected>$term->name</option>";
    } else
      $output .= "<option value='$term->tid'>$term->name</option>";
    }
    $output .= "</select></div>";
  
  }
  
  if($label!='Honeymoon') {
    $output .= " <span> Location : </span><select name='province-id' id='select-province-id' >";
    $output .= "<option value='all' >All</option>";
    $provinces = location_get_provinces('th');
    //dpm($provinces);
    foreach ($provinces as $k => $v) {
      //if ($p == strtoupper($k) || $p == strtoupper($v)) {
      if($k==$cur_province_id)
        $output .= "<option value='$k' selected>$v</option>";
      else
        $output .= "<option value='$k'>$v</option>";
      //}
    }
    $output .= "</select> ";
  }
  $output .= "<input type='submit' name='apply' value='".t("Submit")."' class='form-submit'>";
  return $output;
}

function _happywedding_get_terms_from_category_label($label){
  $term_array  =  taxonomy_get_term_by_name($label);
//  $query = new EntityFieldQuery;
//$term_array = $query
//  ->entityCondition('entity_type', 'taxonomy_term')
//  ->propertyCondition('name', $name)
//  //->propertyCondition('vid', 1)
//  ->execute();
  foreach ($term_array as $key => $value ) {
    //dpm($value);
    $parent = $value;
//    /break;
  }
  $term_list = taxonomy_get_children($parent->tid, $parent->vid );
  return array( "tid" => $parent->tid , "children" => $term_list);
}

function _happywedding_render_vendors_navigation(){
  $field = field_info_field('field_vendor_category');
  $catid = arg(1);
  if($catid=='') $catid = 1;
  //echo "catid = [" . $catid . "]";
  $labels = $field['settings']['allowed_values'];
  $output =  "<div class='search-vendors-title'>Current vendors  : $labels[$catid]</div>";
  
  $output .= "<div class='vendors-navigation'><ul class='menu'>";
  //dpm($labels);exit;
  foreach ($labels as $id => $label) {
    $output .= "<li class='leaf'><a href='/vendors/$id'>".$label."</a>";
    $cat_term = _happywedding_get_terms_from_category_label($label);
    $term_list = $cat_term["children"];
    //dpm($term_list);
    $output .= "<ul class='sub-menu'>";
    foreach ($term_list as $tid => $term) {
      $output .= "<li class='leaf'><a href='/vendors/$id?term-id=".$tid."'>".$term->name."</a></li>";
    }
    $output .= "</ul></li>";
  }
  $output .= "</ul>";
  
  //$output .=  "Planner | Venue | Fashion | Beauty | Catering | Honeymoon | Others";
  return $output;

}

function happywedding_form_product_node_form_alter(&$form, &$form_state, $form_id) {
  _happywedding_vendor_ref_form_alter($form);
  //dpm($form);
  //dpm($form_state);
}
function happywedding_form_photo_node_form_alter(&$form, &$form_state, $form_id) {
  _happywedding_vendor_ref_form_alter($form);
  //dpm($form);
  //dpm($form_state);
}
function happywedding_form_news_node_form_alter(&$form, &$form_state, $form_id) {
  _happywedding_vendor_ref_form_alter($form);
  //dpm($form);
  //dpm($form_state);
}

function happywedding_form_vendor_node_form_alter(&$form, &$form_state, $form_id) {
  global $user;
  if (in_array('vendor', $user->roles)) {
    $form['field_vendor_plan']['#access'] = false;
  }//dpm($form);
  //echo '<pre>';print_r($form['field_vendor_category']);echo '</pre>';
  $field = field_info_field('field_vendor_category');
//   $cat_term = _happywedding_get_terms_from_category_label($label);//taxonomy_get_children($parent->tid, $parent->vid );
//  $term_list = $cat_term['children'];
  
  $tree = happywedding_get_terms_json_form_vocab("Categories");
  //dpm($tree);
  drupal_add_js(array('happywedding' => array('categories' => $tree)), array('type' => 'setting'));
  
  //dpm($form);
  //dpm($form_state);
}

function happywedding_node_presave($node) {
  if($node->type=="vendor") {
    //dpm($node->field_vendor_tags);
    $field = field_info_field('field_vendor_category');
    
    //$cur
    //foreach($node->field_vendor_tags["und"] as $key => $val){
    //  $val["tid";]
    
    //}
    //$node->field_vendor_tags["und"] = array();
    foreach($node->field_vendor_category['und'] as $key => $val) {
      $label =  $field['settings']['allowed_values'][$val["value"]];
      $term = _happywedding_get_terms_from_category_label($label);
      if(!_is_tag_exists( $node->field_vendor_tags["und"],  $term["tid"] ) )
        $node->field_vendor_tags["und"][] = array("tid" => $term["tid"]);
      //$term->tid;
    }
    
  }
}


function happywedding_get_terms_json_form_vocab($name){
  $vocab   = taxonomy_vocabulary_machine_name_load($name);
  $tree = taxonomy_get_tree($vocab->vid);
  
  $terms = array();
  $cur_d0_index = 0;
  $cur_d1_index = 0;
  foreach($tree as $key => $term) {
    if($term->depth == 0) {
      $terms[] = array(
        "tid" => $term->tid,
        "name" => $term->name,
        "children" => array()
      );
      $cur_d0_index = count($terms) - 1;
      $cur_d1_index = 0;
    } elseif($term->depth == 1) {
      $terms[$cur_d0_index]["children"][] = array(
        "tid" => $term->tid,
        "name" => $term->name,
        "children" => array()
      );
      $cur_d1_index = count($terms[$cur_d0_index]["children"]) - 1;
    } elseif($term->depth == 2)
      $terms[$cur_d0_index]["children"][$cur_d1_index]["children"][] = array(
        "tid" => $term->tid,
        "name" => $term->name,
        "children" => array()
      );
    
    
    //$cur_d2_index = count($terms[$cur_d0_index]["children"][$cur_d1_index]["children"]) - 1;
      
  }
  return $terms;
//1 (Object) stdClass
//
//    tid (String, 2 characters ) 26
//    vid (String, 1 characters ) 3
//    name (String, 4 characters ) Thai
//    description (String, 0 characters )
//    format (String, 13 characters ) filtered_html
//    weight (String, 1 characters ) 0
//    uuid (String, 36 characters ) 64d1e561-e111-46d3-a5a9-702a1f50a77d
//    depth (Integer) 1
//    parents (Array, 1 element)
//        0 (String, 2 characters ) 42


}


function happywedding_node_form_submit($form, &$form_state) {
  // only redirect if node_form_submit() has successfully saved the node
  global $user;
  //dpm($user);
  if ( !empty($form_state['nid']) && isset($_GET['vendor'] ) ) {
  
    $type = $form['type']['#value'];
    if (in_array('vendor', $user->roles)) {
      $basepath = 'bo/vendor/';
    } else {
      $basepath = 'node/';
    }
    //dpm($form);
    if($type=='news')
      $form_state['redirect'] = $basepath.$_GET['vendor'].'/'.$type;
    else if($type=='product') {
      $query = array('category' => array());
      foreach($form["field_product_category"]["und"]["#value"] as $key => $value){
        $query["category"][] = $key; 
      }
      $form_state['redirect'] = array( 
        $basepath.$_GET['vendor'].'/categories/'.$type.'s' ,
        array('query' => $query )      
      );
      //dpm($form_state['redirect']);
    }else
     $form_state['redirect'] = $basepath.$_GET['vendor'].'/'.$type.'s';
  }
}

function _happywedding_vendor_ref_form_alter(&$form) {global $user;
  $type = $form['type']['#value'];//dpm($form);dpm($user);
  if(isset($_GET['vendor']) || isset($form['field_'.$type.'_vendor']['und']['#default_value'][0])) {
    $vendor_id = isset($_GET['vendor'])? $_GET['vendor'] : $form['field_'.$type.'_vendor']['und']['#default_value'][0];
    $vendor = node_load($vendor_id);//dpm($vendor);
    $form['field_'.$type.'_vendor']['und']['#type'] = 'hidden';
    $form['field_'.$type.'_vendor']['und']['#default_value'] = $vendor->nid;
    
    //foreach($form['field_product_category']['und']['#options'] as $i => $value){ //9 => Planner
    if($type!='news') { 
      $cur_terms = $form['field_'.$type.'_category']['und']['#options'];
      $new_terms = array();
        foreach($vendor->field_vendor_tags['und'] as $j => $term) { // 0 => { tid : 9}
          $tid = $term['tid'];
          if(array_key_exists( $tid, $cur_terms )) {
            $new_terms[$tid] = $cur_terms[$tid];
          } 
        }
      $form['field_'.$type.'_category']['und']['#options'] = $new_terms;
    }
    
    if($type=='product'){ dpm($form['field_'.$type.'_category']['und']);
      if( isset($_GET['category']) ) {
        $form['field_'.$type.'_category']['und']['#default_value'] = $_GET['category'];
        
      }
    }
    //$form_state['redirect'] = 'node/'.$vendor->nid.'/products';
    $form['#submit'][] = 'happywedding_node_form_submit';
    $form['actions']['submit']['#submit'][] = 'happywedding_node_form_submit';
  }
}
