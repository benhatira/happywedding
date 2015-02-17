<?php

//*****************************************
//             Report render
//*****************************************
function happywedding_bo_vendor_report($nid){
  $nid = arg(2);
  if($nid=='report') $nid = arg(1);
  $vendor = node_load($nid);
  $title = $vendor->title;
  drupal_set_title($title);
  return 'this is report';
}

function happywedding_bo_vendor_contactus($nid){
  $block = module_invoke('webform', 'block_view', 'client-block-107');
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
    dpm($result);
    if($result){
      $url = '/bo/vendor/'.$result['nid'];
      drupal_goto($url);
    } else {
      $output = 'No Vendor Data.';
    }
  }
  $output .= 'This is for vendor';
  return $output;
}



//*****************************************
//              Dashboard Render
//*****************************************
function happywedding_bo_vendor_dashboard(){
  global $user;
  $output = '';
  $nid = arg(2);
  if($nid=='') $nid = arg(1);
  $vendor = node_load($nid);
  //dpm($vendor->title);
  $title = $vendor->title;
  drupal_set_title($title);
  
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