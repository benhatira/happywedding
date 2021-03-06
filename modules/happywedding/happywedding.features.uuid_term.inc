<?php
/**
 * @file
 * happywedding.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function happywedding_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'sdf',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0bca9ffd-7828-45e0-9e99-f7eeaf440f1e',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Others',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 11,
    'uuid' => '10b9d27c-d5eb-4564-b439-fc2bd2c18a34',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '3ca558b7-957d-4ca6-a399-6069a4b952ac',
    ),
  );
  $terms[] = array(
    'name' => 'Bridesmaid Dress',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '147dafd8-732b-4738-923b-48b4b535e9ee',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '16bb6d66-60eb-4c2d-a1a0-cfae423fffac',
    ),
  );
  $terms[] = array(
    'name' => 'Dress',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '16bb6d66-60eb-4c2d-a1a0-cfae423fffac',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '985dece2-0d03-41c2-8c32-f5084184944c',
    ),
  );
  $terms[] = array(
    'name' => 'Beauty',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 49,
    'uuid' => '1717e9ae-69ed-44f5-8a03-9c8fa589efff',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'Wedding Dress',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1b39e96b-daec-49ce-b233-9e482f2f43ec',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '16bb6d66-60eb-4c2d-a1a0-cfae423fffac',
    ),
  );
  $terms[] = array(
    'name' => 'Mc',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '2393fc27-24e0-4612-9046-8582f70fbb93',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '3ca558b7-957d-4ca6-a399-6069a4b952ac',
    ),
  );
  $terms[] = array(
    'name' => 'Spa',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '2e3ed47b-44da-4345-9d2c-943a9f7709b0',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '1717e9ae-69ed-44f5-8a03-9c8fa589efff',
    ),
  );
  $terms[] = array(
    'name' => 'Restaurant',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '2e4dbbf0-ca7d-4223-b8cd-f8a6e433275a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '5124a101-7e93-4888-8238-9a32a64e2603',
    ),
  );
  $terms[] = array(
    'name' => 'Others',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '30541c5f-ce33-43b2-8dbf-584c52e38996',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '1717e9ae-69ed-44f5-8a03-9c8fa589efff',
    ),
  );
  $terms[] = array(
    'name' => 'Engagement Ring',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '3146199a-a2e7-4a79-9244-4fb4b01ee6de',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => 'c3618dd7-1a2c-4b71-858a-f8fa4142c1d2',
    ),
  );
  $terms[] = array(
    'name' => 'Western',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '3c45db15-c645-4a3d-978d-c18ddedc3536',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '9e90c3a8-6758-4812-bbb7-f9c87be1ecd7',
    ),
  );
  $terms[] = array(
    'name' => 'Others',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 52,
    'uuid' => '3ca558b7-957d-4ca6-a399-6069a4b952ac',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'Muslim',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '3ffcdd39-e1b1-4089-bb5a-712fa7065a56',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '9e90c3a8-6758-4812-bbb7-f9c87be1ecd7',
    ),
  );
  $terms[] = array(
    'name' => 'Facial',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '409748b3-523f-45c5-9512-2956fa78c19c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '1717e9ae-69ed-44f5-8a03-9c8fa589efff',
    ),
  );
  $terms[] = array(
    'name' => 'Live Band',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '43408e34-ed13-4bb2-a9f0-603c8ee87490',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '3ca558b7-957d-4ca6-a399-6069a4b952ac',
    ),
  );
  $terms[] = array(
    'name' => 'Nail',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '4638c388-7e1c-4877-9d21-e1d158beb827',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '1717e9ae-69ed-44f5-8a03-9c8fa589efff',
    ),
  );
  $terms[] = array(
    'name' => 'Hotel',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4669d879-c2e0-48cd-bbb5-f0cbf7d73167',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '5124a101-7e93-4888-8238-9a32a64e2603',
    ),
  );
  $terms[] = array(
    'name' => 'venur',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4a505468-8f75-4674-a1ce-9d24559d2f61',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Groom Attire',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '4c3139ab-2c85-4143-9b59-9e6baa709ebc',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '16bb6d66-60eb-4c2d-a1a0-cfae423fffac',
    ),
  );
  $terms[] = array(
    'name' => 'Venue',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 47,
    'uuid' => '5124a101-7e93-4888-8238-9a32a64e2603',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'Europe',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '538b9ffd-9f91-42aa-b7a0-f418e16d1633',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => 'ab12cfeb-9c2f-4598-b2b7-16ffa619635f',
    ),
  );
  $terms[] = array(
    'name' => 'Convention Center',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '555fd8a3-effa-4416-a3b2-9d636a87e006',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '5124a101-7e93-4888-8238-9a32a64e2603',
    ),
  );
  $terms[] = array(
    'name' => 'Hair',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5631e86c-cac3-4ec8-a467-e6827ca0b83d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '1717e9ae-69ed-44f5-8a03-9c8fa589efff',
    ),
  );
  $terms[] = array(
    'name' => 'Thai',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '64d1e561-e111-46d3-a5a9-702a1f50a77d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '9e90c3a8-6758-4812-bbb7-f9c87be1ecd7',
    ),
  );
  $terms[] = array(
    'name' => 'Mother Of The Bride Dress',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '68c403bb-de21-4e35-9ace-004157506772',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '16bb6d66-60eb-4c2d-a1a0-cfae423fffac',
    ),
  );
  $terms[] = array(
    'name' => 'Others',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '6ec805ad-ea21-44b3-bdfb-dced1293b3a4',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '985dece2-0d03-41c2-8c32-f5084184944c',
    ),
  );
  $terms[] = array(
    'name' => 'Chinese',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '7c20edfe-689b-46aa-9b78-a783af5f5530',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '9e90c3a8-6758-4812-bbb7-f9c87be1ecd7',
    ),
  );
  $terms[] = array(
    'name' => 'Car Rental',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '7d22ed19-b7c0-4cbd-bdea-84c954b9a145',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '3ca558b7-957d-4ca6-a399-6069a4b952ac',
    ),
  );
  $terms[] = array(
    'name' => 'sdd',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '867c1dc8-757c-41ee-9ead-f4bbe9102caf',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'asdasd',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '871ce353-9c85-47bd-b1d3-1c80f408471f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Buffet',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '886f4dfe-002c-432a-9f9b-9a4a4582b596',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => 'f27ad6d5-3ffb-41e9-a03d-db4698b3a621',
    ),
  );
  $terms[] = array(
    'name' => 'ss',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8b365498-1848-42bd-a09d-bbb45959f01c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Chinese',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '8c6cb340-5503-46ba-9c6c-f8c697d46ed1',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => 'f27ad6d5-3ffb-41e9-a03d-db4698b3a621',
    ),
  );
  $terms[] = array(
    'name' => 'Presentation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => '8ecf81ff-b5a7-4505-be16-b0d42d60723d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '3ca558b7-957d-4ca6-a399-6069a4b952ac',
    ),
  );
  $terms[] = array(
    'name' => 'Invitation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 9,
    'uuid' => '9135f91a-f076-4795-9da1-1443f56db177',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '3ca558b7-957d-4ca6-a399-6069a4b952ac',
    ),
  );
  $terms[] = array(
    'name' => 'Fashion',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 48,
    'uuid' => '985dece2-0d03-41c2-8c32-f5084184944c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'asd',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '98c623a4-1fe1-4303-b59e-f6d8a0e101d9',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Makeup',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '9c538ad5-918c-473f-8d74-f6fd414d6f4e',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '1717e9ae-69ed-44f5-8a03-9c8fa589efff',
    ),
  );
  $terms[] = array(
    'name' => 'Gift',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '9d34c5d1-f1c7-40b1-bbe8-63f80c94365f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '3ca558b7-957d-4ca6-a399-6069a4b952ac',
    ),
  );
  $terms[] = array(
    'name' => 'Planner',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 46,
    'uuid' => '9e90c3a8-6758-4812-bbb7-f9c87be1ecd7',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'Cocktail',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a59d6bb1-eb68-4155-bb43-f191e5e361d9',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => 'f27ad6d5-3ffb-41e9-a03d-db4698b3a621',
    ),
  );
  $terms[] = array(
    'name' => 'Honeymoon',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 51,
    'uuid' => 'ab12cfeb-9c2f-4598-b2b7-16ffa619635f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'Others',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => 'ac18edfe-9256-4dd0-95f2-160e56485c77',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => 'ab12cfeb-9c2f-4598-b2b7-16ffa619635f',
    ),
  );
  $terms[] = array(
    'name' => 'Flower',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => 'ae09d4ca-075b-4c17-a368-bc614319db16',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '3ca558b7-957d-4ca6-a399-6069a4b952ac',
    ),
  );
  $terms[] = array(
    'name' => 'Videography',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'b0335991-7573-448d-9f4d-e4903f281cd6',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '3ca558b7-957d-4ca6-a399-6069a4b952ac',
    ),
  );
  $terms[] = array(
    'name' => 'Others',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'b2c9c1f6-c54f-493b-8bb0-bb1ad4bdda73',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '5124a101-7e93-4888-8238-9a32a64e2603',
    ),
  );
  $terms[] = array(
    'name' => 'Souvenir',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 10,
    'uuid' => 'bff153aa-009f-486d-94f6-dce983af6365',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '3ca558b7-957d-4ca6-a399-6069a4b952ac',
    ),
  );
  $terms[] = array(
    'name' => 'Ring',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'c3618dd7-1a2c-4b71-858a-f8fa4142c1d2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '985dece2-0d03-41c2-8c32-f5084184944c',
    ),
  );
  $terms[] = array(
    'name' => 'Dj',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'c48b5b85-f4f3-4059-be8c-76df78b98d7a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '3ca558b7-957d-4ca6-a399-6069a4b952ac',
    ),
  );
  $terms[] = array(
    'name' => 'Indian',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => 'c6f993da-6b41-4c5a-a011-86a42cca1242',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '9e90c3a8-6758-4812-bbb7-f9c87be1ecd7',
    ),
  );
  $terms[] = array(
    'name' => 'white',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ca959d28-aba7-48e3-bbd5-1a464ac6683c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Wedding Ring',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'caada175-d26e-4ddb-9ec8-52427e9d73ce',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => 'c3618dd7-1a2c-4b71-858a-f8fa4142c1d2',
    ),
  );
  $terms[] = array(
    'name' => 'Asia',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'd296f033-ef70-46c2-bc37-6c2f59344627',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => 'ab12cfeb-9c2f-4598-b2b7-16ffa619635f',
    ),
  );
  $terms[] = array(
    'name' => 'sdfsdf',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd8053b89-ee51-40cf-992e-a4cbef90c377',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'USA',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'e04a9de3-eabc-45f6-8b8a-a026bce08e3d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => 'ab12cfeb-9c2f-4598-b2b7-16ffa619635f',
    ),
  );
  $terms[] = array(
    'name' => 't',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e2748187-edea-4c63-8386-f2755080fff7',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Good morning',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e567aa00-9737-4376-93e9-c8e107c9e7eb',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Shoes',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'ee7eaa58-9edb-41a8-9bdd-bb6d3728ef6f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '985dece2-0d03-41c2-8c32-f5084184944c',
    ),
  );
  $terms[] = array(
    'name' => 'Photographer',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ef28aae5-ae3b-472b-9c20-86444232ef21',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '3ca558b7-957d-4ca6-a399-6069a4b952ac',
    ),
  );
  $terms[] = array(
    'name' => 'Catering',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 50,
    'uuid' => 'f27ad6d5-3ffb-41e9-a03d-db4698b3a621',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'Thailand',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f920c869-c474-4397-a6c7-55a0eea4d239',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => 'ab12cfeb-9c2f-4598-b2b7-16ffa619635f',
    ),
  );
  $terms[] = array(
    'name' => 'Fitness',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => 'f980708d-418f-4a46-bce6-dbb5d77409d7',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'categories',
    'parent' => array(
      0 => '1717e9ae-69ed-44f5-8a03-9c8fa589efff',
    ),
  );
  return $terms;
}
