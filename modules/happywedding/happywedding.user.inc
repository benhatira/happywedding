<?php


//function happywedding_form_user_login_alter( &$form, &$form_state, $form_id)
//{
//  dpm($form);
//    $form['name']['#attributes']['placeholder'] = t( 'Email' );
//    $form['pass']['#attributes']['placeholder'] = t( 'Password' );
//}

//function happywedding_form_photo_node_form_alter(&$form, &$form_state, $form_id) {
function happywedding_form_user_login_block_alter( &$form, &$form_state, $form_id)
{
  //dpm($form);
  $form['name']['#title_display'] = 'invisible';
  $form['name']['#attributes']['placeholder'] = t( 'EMAIL' );
  $form['pass']['#title_display'] = 'invisible';
  $form['pass']['#attributes']['placeholder'] = t( 'PASSWORD' );
}


function happywedding_form_user_register_form_alter( &$form, &$form_state, $form_id)
{
 
  $form['account']['name']['#title_display'] = 'invisible';
  $form['account']['name']['#type'] = 'textfield';
  //$form['account']['name']['#value'] = '';
  $form['account']['name']['#description'] = '';
  $form['account']['name']['#attributes']['placeholder'] = t( 'USERNAME' );
  $form['account']['name']['#weight'] = 10;
  $form['account']['mail']['#title_display'] = 'invisible';
  $form['account']['mail']['#attributes']['placeholder'] = t( 'EMAIL' );
  $form['account']['mail']['#description'] = '';
  $form['account']['pass']['#title_display'] = 'invisible';
  $form['account']['pass']['#description'] = '';
  $form['account']['pass']['#attributes']['placeholder'] = t( 'PASSWORD' );
  $form['field_first_name'][LANGUAGE_NONE][0]['value']['#title_display'] = 'invisible';
  $form['field_first_name'][LANGUAGE_NONE][0]['value']['#attributes']['placeholder'] = t( 'FIRST NAME' );
  $form['field_first_name'][LANGUAGE_NONE][0]['value']['#attributes']['class'][] = 'half';
  $form['field_last_name'][LANGUAGE_NONE][0]['value']['#title_display'] = 'invisible';
  $form['field_last_name'][LANGUAGE_NONE][0]['value']['#attributes']['placeholder'] = t( 'LAST NAME' );
  $form['field_last_name'][LANGUAGE_NONE][0]['value']['#attributes']['class'][] = 'half';
  $form['#after_build'] = array('_happywedding_user_profile_form_alter');
  
}

function happywedding_form_user_profile_form_alter(&$form, $form_state) {
// The language selector is only displayed if there is more than one language.
     //echo "<!--<pre>";print_r($form);echo "</pre>-->";
///  if (drupal_multilingual()) {
      //    if (count(element_children($form['locale'])) > 1) {
      //      $form['locale']['language']['#access'] = FALSE;
      //    }
      //    else {
    //echo $form['locale'];
  $form['#after_build'] = array('_happywedding_user_profile_form_alter');
  dpm($form);
}

function _happywedding_user_profile_form_alter(&$form, $form_state) {
// The language selector is only displayed if there is more than one language.
///  if (drupal_multilingual()) {
      //    if (count(element_children($form['locale'])) > 1) {
      //      $form['locale']['language']['#access'] = FALSE;
      //    }
      //    else {
    //echo $form['locale'];
  dpm($form);
      $form['locale']['#access'] = FALSE;
  return $form;
//    }
//  }
}
//function happywedding_email_registration_name($edit, $account){
//  //echo '<pre>';print_r($account);echo '</pre>';
//  //exit;
//}
//function happywedding_form_alter( &$form, &$form_state, $form_id )
//{
//  //$form->id
//  //dpm($form);
//  //  $form['name']['#attributes']['placeholder'] = t( 'Email' );
//  //  $form['pass']['#attributes']['placeholder'] = t( 'Password' );
//}