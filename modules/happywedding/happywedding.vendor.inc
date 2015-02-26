<?php

//*****************************************
//             Report render
//*****************************************
function _happywedding_bo_vendor_set_title(){
  $nid = arg(2);
  if(arg(0)=='node') $nid = arg(1);
  $vendor = node_load($nid);
  $title = $vendor->title;
  drupal_set_title($title);
  return $vendor;
}
function happywedding_bo_vendor_report($nid){
  _happywedding_bo_vendor_set_title();
  return 'this is report';
}

function happywedding_bo_vendor_contactus($nid){
  _happywedding_bo_vendor_set_title();
  $block = module_invoke('webform', 'block_view', 'client-block-1');
  return render($block['content']);
}

//*****************************************
//              Landing Page Redirect
//*****************************************
function happywedding_bo_vendor_redirect(){
  global $user;
  $output = '';
  if (in_array('vendor', $user->roles)) {

    $result = db_select('node', 'n')
    ->fields('n')
    ->condition('uid', $user->uid, '=')
    ->condition('type', 'vendor', '=')
    ->execute()
    ->fetchAssoc();
    //dpm($result);
    if($result){
      $url = 'bo/vendor/'.$result['nid'];
      drupal_goto($url);
    } else {
      $output = 'No Vendor Data.';
    }
    return $output;
  } else {
    drupal_access_denied();
    //$output .= 'This is for vendor';
  }//return $output;
}



//*****************************************
//              Dashboard Render
//*****************************************
function happywedding_bo_vendor_dashboard(){
  global $user;
  $vendor = _happywedding_bo_vendor_set_title();
  $output = '';
  
  //*********** new reviews
  $view = views_get_view('vendor_reviews');
  //dpm($view);dpm($vendor);
  $view->set_display('comment_is_new');
  $view->set_arguments(array($vendor->nid));
  // change the amount of items to show
  //$view->set_items_per_page(4);
  //$view->pre_execute();
  $view->execute();
  $output = "<div class='register-date'>Registered Date " . date('d/m/Y',$user->created) . '<br></div>';
  $output .= "<div class='last-access-date'>Last access " . _humanTiming($user->access) . ' ago<br></div>';
  $output .= '<div class="new-reviews"><a href="/bo/vendor/'.$vendor->nid.'/reviews">' . $view->total_rows . ' New Reviews</a></div>';
  
  //********* current plan
  $field = field_info_field('field_vendor_plan');
  $labels = $field['settings']['allowed_values'];
  $output .= '<div class="field-vendor-plan">Current Plan : ';
  if($vendor->field_vendor_plan[LANGUAGE_NONE]) {
    $output .= '<span>' . $labels[$vendor->field_vendor_plan[LANGUAGE_NONE][0]["value"]] .' </span>';
  }
  $output .= '</div>';
  
  // ********* category
  $tids = array();
  foreach( $vendor->field_vendor_tags[LANGUAGE_NONE] as $key => $term){
    $tids[] = $term['tid'];
  };
  $terms = taxonomy_term_load_multiple($tids, array() );
  //dpm($terms);
  $output .= '<div class="field-category">Category : ';
  foreach( $terms as $key => $term){
    //dpm($term);
    if(!_get_tag_parent($term->tid))
    $output .= '<span>' . $term->name .' </span>';
  };
  $output .= '</div>';
  
  //************ location
  $output .= '<div class="field-location">Location : ';
  if($vendor->field_location[LANGUAGE_NONE]) {
    $output .= '<span>' . $vendor->field_location[LANGUAGE_NONE][0]["province_name"] .' </span>';
  }
  $output .= '</div>';
  
  //************ count page views
  $counter = db_select('node_counter', 'n')
    ->fields('n')
    ->condition('nid', $vendor->nid, '=')
    //->condition('type', 'vendor', '=')
    ->execute()
    ->fetchAssoc();
  
  $output .= '<div class="page-views">Page views : ';
  $output .= '<span>' . $counter['totalcount'] .' </span>';
  $output .= '</div>';
  
  //************ count saved user
  $view = views_get_view('vendor_saved_user');
  //$view->set_display('comment_is_new');
  $view->set_arguments(array($vendor->nid));
  $view->execute();
  $output .= "<div class='total-save'>Saves : " . $view->total_rows . '</div>';
  return $output;
}

//*****************************************
//              Dashboard Render
//*****************************************
function _is_tag_exists($node_tags, $tid){
  $exist = false;
  foreach($node_tags as $key => $tag) {
    if($tag["tid"]==$tid) {
      $exist = true;
    }
  }
  return $exist;
}
function _get_tag_parent($tid){
  $term = false;
  $parents = taxonomy_get_parents($tid);
  if(count($parents)>0){
    foreach($parents as $key => $parent) {
      $term = $parent;
    }
  }
  return $term;
}

function happywedding_bo_vendor_categories(){
  $vendor = _happywedding_bo_vendor_set_title();
  $output = '';

  //dpm($vendor->field_vendor_tags["und"]);
  if(isset($_POST['subcategory-add'])) {
    if(!_is_tag_exists( $vendor->field_vendor_tags["und"],  $_POST['subcategory-add'])) {
      //dpm("add tid=" . $_POST['subcategory-add']);
      $vendor->field_vendor_tags["und"][] = array("tid" => $_POST['subcategory-add']);
      node_save($vendor);
    }
  }
  
  
  $tree = happywedding_get_terms_json_form_vocab("Categories");
  //dpm($tree);
  drupal_add_js(array('happywedding' => array('categories' => $tree)), array('type' => 'setting'));
  // render category
  $output = '<form action="" method="POST" class="views-exposed-form" >';
  $output .= '<div class="views-exposed-widget"><label>Category</label><select class="category-select" name="category-add">';
  $subcategory_list = array();
  
  foreach($vendor->field_vendor_tags["und"] as $key => $tag) {
    $term = taxonomy_term_load($tag["tid"]);
    $parent =  _get_tag_parent($tag["tid"]);
    if($parent) {
      
      //*********** new reviews
      $view = views_get_view('vendor_products');
      //dpm($view);dpm($vendor);
      $view->set_display('product_list');
      $view->set_arguments(array($vendor->nid));
      $view->exposed_input['category'] = array($term->tid);
      // change the amount of items to show
      //$view->set_items_per_page(4);
      //$view->pre_execute();
      $view->execute();
      $count =  $view->total_rows;
      //dpm($view);
      $subcategory_list[] = array(
        "main" => array("name" => $parent->name, "tid" => $parent->tid),
        "sub" => array("name" => $term->name, "tid" => $term->tid),
        "product" => array("count" => $count)
      );
    } else {
      $name = $term->name;
      $output .= '<option value="'.$tag["tid"].'">'.$name.'</option>';
    }

  }
  $output .= '</select></div>';
  
  // render subcategory
  $children = taxonomy_get_children($vendor->field_vendor_tags["und"][0]["tid"]);
  //dpm($children);
  $output .= '<div class="views-exposed-widget"><label>Sub-category</label><select class="subcategory-select" name="subcategory-add">';
  foreach($children as $key => $tag) {
    $term = taxonomy_term_load($tag->tid);
    $name = $term->name;
    $output .= '<option value="'.$tag->tid.'">'.$name.'</option>'  ;
  }
  $output .= '</select></div>';
  
  $output .= '<div class="views-exposed-widget"><button class="add-subcategory">Add</button></div>';
  $output .= '</form>';
  
  
/*  
  render product category table
  
  */
  //dpm($subcategory_list);
  $output .= _render_subcategory_list($subcategory_list, $vendor);
  
  return $output;
  
}

function _render_subcategory_list($subcategory_list, $vendor){
  if(arg(0)=='node')
    $base_path = '/node/';
  else
    $base_path = '/bo/vendor/';
  
  $output = '<table class="views-table cols-4">';
  $output .= '<thead><tr>
                  <th class="views-field">Category</th>
                  <th class="views-field">Sub-Category</th>
                  <th class="views-field"></th>
                  <th class="views-field"></th>
              </tr></thead><tbody>';
  foreach($subcategory_list as $key => $row) {
    $output .= '<tr><td class="views-field">'.$row["main"]["name"].'</td>';
    $output .= '<td class="views-field">'.$row["sub"]["name"].'</td>';
    //$output .= '<span>List('.$row["product"]["count"].')</span>';
    
    $output .= '<td class="views-field"><a href="'.$base_path.$vendor->nid.'/categories/products?category[]='.$row["main"]['tid'].'&category[]='.$row["sub"]['tid'].'"><button>List('.$row["product"]["count"].')</button></a></td>';
    
    
    $output .= '<td class="views-field"><a href="/node/add/product?vendor='.$vendor->nid.'&category[]='.$row["main"]['tid'].'&category[]='.$row["sub"]['tid'].'"><button>Add</button></a></td>';
    $output .= '</tr>';
  }
  
  $output .= '</tbody></table>';

/*    
          <tr class="odd views-row-first">
                  <td class="views-field views-field-field-photo">
                      </td>
                  <td class="views-field views-field-title">
            <a href="/content/asda">Asda</a>          </td>
                  <td class="views-field views-field-field-product-category">
            <a href="/categories/planner" typeof="skos:Concept" property="rdfs:label skos:prefLabel" datatype="">Planner</a>, <a href="/categories/western" typeof="skos:Concept" property="rdfs:label skos:prefLabel" datatype="">Western</a>          </td>
                  <td class="views-field views-field-field-price">
                      </td>
                  <td class="views-field views-field-field-tags">
                      </td>
                  <td class="views-field views-field-delete-node">
            <a href="/node/29/delete?destination=bo/vendor/2/products%3Fcategory%5B0%5D%3D42%26category%5B1%5D%3D13">delete</a>          </td>
                  <td class="views-field views-field-edit-node">
            <a href="/node/29/edit?destination=bo/vendor/2/products%3Fcategory%5B0%5D%3D42%26category%5B1%5D%3D13">edit</a>          </td>
              </tr>*/
 
  return $output;
}



function _humanTiming ($time)
{
    $time = time() - $time; // to get the time since that moment
    $tokens = array (
        31536000 => 'year',
        2592000 => 'month',
        604800 => 'week',
        86400 => 'day',
        3600 => 'hour',
        60 => 'minute',
        1 => 'second'
    );
    foreach ($tokens as $unit => $text) {
        if ($time < $unit) continue;
        $numberOfUnits = floor($time / $unit);
        return $numberOfUnits.' '.$text.(($numberOfUnits>1)?'s':'');
    }
}