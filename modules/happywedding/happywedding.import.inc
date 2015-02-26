<?php

function happywedding_vendors_import(){
  //isset($_REQUEST['name']) ? $name = $_REQUEST['name'] : $name = '';
  if(isset($_POST['upload-submit'])) {
    //print_r($_FILES);
    $file_path = $_FILES['vendor-data']['tmp_name'];
    $handle = @fopen($file_path,"r"); 
  	if ($handle) {
  	   $i = 0;
  	   $vendor_array = array();
  	   $output_result = '<div style="font-size:14px;">';
       //$csv = fgetcsv($handle);print_r($csv);exit;
  	   while (!feof($handle)) { 
  	     $vendor = fgetcsv($handle);//fgets($handle, 4096); 
  	     if($i>0) {
  	       //$vendor = explode(",",$record);
  	       if(isset($vendor[1])) {
             //0no. ,1name, 2url, 3facebook, 4location, 5contact_name, 6contact_tel, 7contact_email
//  	         $vendor_name = $vendor[1];//strtolower(preg_replace('/\(.*\)/','',$sale[1]));
//  	         $vendor_url = $vendor[2];
//             $vendor_facebook = $vendor[3];
//             $vendor_location = $vendor[4];
//  	         $user_phone = str_replace('-','',$sale[4]);
  	         $vendor_data = array(
               "name" => $vendor[1],
               "url" => $vendor[2],
               "facebook" => $vendor[3],
               "location" => $vendor[4],
               "contact_name" => $vendor[5],
               "contact_tel" => $vendor[6],
               "contact_email" => $vendor[7]
    	     );
    	     print_r($vendor_data);//exit;
    	     $result = _vendors_create($vendor_data);
    	     $output_result .= $result.'<br>';//break;
  	         //$vendor_array[] = $vendor_data;
	       }
		 }
  		 $i++;
  	   } 
  	   $output_result .= '</div>';
  	   fclose($handle);
  	   echo $output_result;
  	   //echo "<pre>";print_r($vendor_array);echo "</pre>";
       exit;
  	}
  }else {
    $output = '<form enctype="multipart/form-data" target="upload-result" method="POST" action="/admin/vendors/import">';
//    $output .= 'Region : <select id="sale-region" name="sale-region" class="form-select"><option value="c" selected="selected">ภาคกลาง</option><option value="n" >ภาคเหนือ</option><option value="s">ภาคใต้</option><option value="e">ภาคตะวันออก</option><option value="ne">ภาคตะวันออกเฉียงเหนือ</option><option value="w">ภาคตะวันตก</option></select><br>';
    $output .= 'File : <br>';    
    $output .= '<input type="file" name="vendor-data" class="form-file"><input name="upload-submit" type="submit" class="form-submit" value="Upload"></form>';
    //$output .= 'Ex: <a href="/example/sales-import.csv">Example.csv</a>';
    $output .= '<iframe id="upload-result" name="upload-result" style="height:400px;width:100%;overflow:auto;border:none;"><iframe>';
    return $output;
  }
  



}

function _vendors_create($vendor){
  global $user;
  try {

    $node = new stdClass();
    $node->title = $vendor["name"];
    $node->type = "vendor";
    node_object_prepare($node); // Sets some defaults. Invokes hook_prepare() and hook_node_prepare().
    $node->language = 'en'; // Or e.g. 'en' if locale is enabled
    $node->uid = $user->uid; 
    $node->status = 1; //(1 or 0): published or not
    $node->promote = 0; //(1 or 0): promoted to front page
    $node->comment = 0; // 0 = comments disabled, 1 = read only, 2 = read/write
    #$node->body[$node->language][0]['value'] = $vendor['aboutus'];
    
    $node->field_url[LANGUAGE_NONE][]['value'] = $vendor['url'];
    $node->field_facebook[LANGUAGE_NONE][]['value'] = $vendor['facebook'];
      
    $node->field_contact_email[LANGUAGE_NONE][]['value'] = $vendor['contact_email'];
    $node->field_contact_tel[LANGUAGE_NONE][]['value'] = $vendor['contact_tel'];
    $node->field_contact_name[LANGUAGE_NONE][]['value'] = $vendor['contact_name'];
    
    #set vendor category
    if(isset($vendor['category'])) {
      $categories = explode(",",$vendor['category']);
      foreach ($categories  as  $key => $category) {
        //TODO : get category hash from table  trim($category);
        $node->field_vendor_category[LANGUAGE_NONE][$key]['value'] = 0;
      }
    } else {
      #for test
      $node->field_vendor_category[LANGUAGE_NONE][]['value'] = 0;
    }
    
    #set location field
//    $location = array(
//        "country" => "th",
//        "province" => $vendor["location"]
//    );
//    $locationID = location_save($location);
//    echo "location = "
//      printr($location);
//    echo "location id = " . $locationID;
    if(isset($locationID)) {
      $node->field_location[LANGUAGE_NONE][]['lid'] = $locationID;
    }
    // Term reference (taxonomy) field
    //$node->field_product_tid[$node->language][]['tid'] = $form_state['values']['a taxonomy term id'];

    // Entity reference field
    //$node->field_customer_nid[$node->language][] = array(
    //  'target_id' => $form_state['values']['entity id'],
    //  'target_type' => 'node',
    //);
    // 'node' is default,
    // Other possible values are "user" and  "taxonomy_term" 

    $node = node_submit($node); // Prepare node for saving
    node_save($node);
    return "- <span style='color:green'>Success</span> : Vendor (".$node->title.") has created.";
  } catch (PDOException $e) {
    return "- <span style='display:none;><span style='color:red;'>Error</span> : Failed creating vendor (".$vendor['name'].") => ".$e->getMessage()."</span>";
    //print_r($e->getMessage());
  }
}

//function rank_sale_import(){
//  if($_POST['upload-submit']) {
//    //print_r($_FILES);
//    $file_path = $_FILES['sale-data']['tmp_name'];
//    $handle = @fopen($file_path,"r"); 
//  	if ($handle) {
//  	   $i = 0;
//  	   $sale_array = array();
//  	   $output_result = '<div style="font-size:14px;">';
//  	   while (!feof($handle)) { 
//  	     $record = fgets($handle, 4096); 
//  	     if($i>0) {
//  	       $sale = explode(",",$record);
//  	       if($sale[1]) {
//  	         $user_name = strtolower(preg_replace('/\(.*\)/','',$sale[1]));
//  	         $user_name_array = explode(" ",$user_name);
//  	         $user_name = substr($user_name_array[1], 0, 3) . '.' . $user_name_array[0];
//  	         $user_mail = $sale[2] ? $sale[2] : $user_name . '@blast.project';
//  	         $user_phone = str_replace('-','',$sale[4]);
//  	         $sale_data = array(
//    	         "fullname" => $sale[1],
//    	         "mail" => $user_mail,
//    	         "company" => $sale[3],
//    	         "region" => $_POST['sale-region'],
//    	         "username" => $user_name,
//    	         "phone" => $user_phone
//    	       );
//    	       //print_r($sale_data);//exit;
//    	       $result = _rank_sale_create($sale_data);
//    	       $output_result .= $result.'<br>';//exit;
//  	         $sale_array[] = $sale_data;
//	         }
//		     }
//  		   $i++;
//  	   } 
//  	   $output_result .= '</div>';
//  	   fclose($handle);
//  	   echo $output_result;
//  	   //echo "<pre>";print_r($sale_array);echo "</pre>";
//  	}
//  }else {
//    $output .= '<form enctype="multipart/form-data" target="upload-result" method="POST" action="/admin/sales/import?state=submit">';
//    $output .= 'Region : <select id="sale-region" name="sale-region" class="form-select"><option value="c" selected="selected">ภาคกลาง</option><option value="n" >ภาคเหนือ</option><option value="s">ภาคใต้</option><option value="e">ภาคตะวันออก</option><option value="ne">ภาคตะวันออกเฉียงเหนือ</option><option value="w">ภาคตะวันตก</option></select><br>';
//    $output .= 'File : <br>';    
//    $output .= '<input type="file" name="sale-data" class="form-file"><input name="upload-submit" type="submit" class"form-submit" value="Upload"></form>';
//    $output .= 'Ex: <a href="/example/sales-import.csv">Example.csv</a>';
//    $output .= '<iframe id="upload-result" style="height:400px;width:100%;overflow:auto;border:none;"><iframe>';
//  }
//  return $output;
//}
