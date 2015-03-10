<?php
/**
 * @file
 * happywedding.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function happywedding_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function happywedding_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function happywedding_flag_default_flags() {
  $flags = array();
  // Exported flag: "Bookmark".
  $flags['bookmark'] = array(
    'entity_type' => 'node',
    'title' => 'Bookmark',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Favorite',
    'flag_long' => 'Save this to view it later',
    'flag_message' => 'Saved',
    'unflag_short' => 'Unsave',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'happywedding',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "is_new".
  $flags['is_new'] = array(
    'entity_type' => 'comment',
    'title' => 'is_new',
    'global' => 1,
    'types' => array(
      0 => 'comment_node_vendor',
    ),
    'flag_short' => ' read',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'New',
    'unflag_long' => '',
    'unflag_message' => ' ',
    'unflag_denied_text' => ' ',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'happywedding',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function happywedding_image_default_styles() {
  $styles = array();

  // Exported image style: front_gallery.
  $styles['front_gallery'] = array(
    'name' => 'front_gallery',
    'label' => 'front gallery (260x245)',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 260,
          'height' => 245,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_slideshow.
  $styles['front_slideshow'] = array(
    'name' => 'front_slideshow',
    'label' => 'Front slideshow (800x400)',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_photo.
  $styles['gallery_photo'] = array(
    'name' => 'gallery_photo',
    'label' => 'Gallery Photo (170x170)',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 170,
          'height' => 170,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: general_thumbnail.
  $styles['general_thumbnail'] = array(
    'name' => 'general_thumbnail',
    'label' => 'General Thumbnail (100x100)',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_photo.
  $styles['news_photo'] = array(
    'name' => 'news_photo',
    'label' => 'News photo (260x210)',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 260,
          'height' => 210,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sidebar__70x70_.
  $styles['sidebar__70x70_'] = array(
    'name' => 'sidebar__70x70_',
    'label' => 'Sidebar (70x70)',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 70,
          'height' => 70,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sidebar_announce.
  $styles['sidebar_announce'] = array(
    'name' => 'sidebar_announce',
    'label' => 'Sidebar announce (230x230)',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 254,
          'height' => 237,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: tips_thumbnail.
  $styles['tips_thumbnail'] = array(
    'name' => 'tips_thumbnail',
    'label' => 'Tip Thumbnail (247x278)',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 248,
          'height' => 278,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: user_avatar.
  $styles['user_avatar'] = array(
    'name' => 'user_avatar',
    'label' => 'User avatar (150x150)',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: vendor_thumbnail.
  $styles['vendor_thumbnail'] = array(
    'name' => 'vendor_thumbnail',
    'label' => 'Vendor thumbnail (231x146)',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 231,
          'height' => 146,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function happywedding_node_info() {
  $items = array(
    'ad' => array(
      'name' => t('Ad'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'inquiry' => array(
      'name' => t('Inquiry'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'photo' => array(
      'name' => t('Photo'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vendor' => array(
      'name' => t('Vendor'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_themekey_features_rule_chain().
 */
function happywedding_themekey_features_rule_chain() {
if (!defined('THEMEKEY_PAGECACHE_UNSUPPORTED')) {
    define('THEMEKEY_PAGECACHE_UNSUPPORTED', 0);
    define('THEMEKEY_PAGECACHE_SUPPORTED', 1);
    define('THEMEKEY_PAGECACHE_TIMEBASED', 2);
  }
$rules = array(
  0 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'bo/vendor',
      'theme' => 'rubik',
      'enabled' => 1,
      'wildcards' => array(),
      'module' => 'happywedding',
    ),
    'string' => '"drupal:path = bo/vendor >>> rubik"',
    'childs' => array(),
  ),
  1 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'bo/vendor/%wildcard',
      'theme' => 'rubik',
      'enabled' => 1,
      'wildcards' => array(
        2 => 'wildcard',
      ),
      'module' => 'happywedding',
    ),
    'string' => '"drupal:path = bo/vendor/%wildcard >>> rubik"',
    'childs' => array(),
  ),
  2 => array(
    'rule' => array(
      'property' => 'user:role',
      'operator' => '=',
      'value' => 'vendor',
      'theme' => 'rubik',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'happywedding',
    ),
    'string' => '"user:role = vendor >>> rubik"',
    'childs' => array(
      0 => array(
        'rule' => array(
          'property' => 'drupal:path',
          'operator' => '=',
          'value' => 'node/add/%',
          'theme' => 'rubik',
          'enabled' => 1,
          'wildcards' => array(),
          'module' => 'happywedding',
        ),
        'string' => '"drupal:path = node/add/% >>> rubik"',
        'childs' => array(),
      ),
      1 => array(
        'rule' => array(
          'property' => 'drupal:path',
          'operator' => '=',
          'value' => 'node/%/edit',
          'theme' => 'rubik',
          'enabled' => 1,
          'wildcards' => array(),
          'module' => 'happywedding',
        ),
        'string' => '"drupal:path = node/%/edit >>> rubik"',
        'childs' => array(),
      ),
      2 => array(
        'rule' => array(
          'property' => 'drupal:path',
          'operator' => '=',
          'value' => 'user',
          'theme' => 'rubik',
          'enabled' => 1,
          'wildcards' => array(),
          'module' => 'happywedding',
        ),
        'string' => '"drupal:path = user >>> rubik"',
        'childs' => array(),
      ),
      3 => array(
        'rule' => array(
          'property' => 'drupal:path',
          'operator' => '=',
          'value' => 'user/%',
          'theme' => 'rubik',
          'enabled' => 1,
          'wildcards' => array(),
          'module' => 'happywedding',
        ),
        'string' => '"drupal:path = user/% >>> rubik"',
        'childs' => array(),
      ),
      4 => array(
        'rule' => array(
          'property' => 'drupal:path',
          'operator' => '=',
          'value' => 'user/%/edit',
          'theme' => 'rubik',
          'enabled' => 1,
          'wildcards' => array(),
          'module' => 'happywedding',
        ),
        'string' => '"drupal:path = user/%/edit >>> rubik"',
        'childs' => array(),
      ),
    ),
  ),
  3 => array(
    'rule' => array(
      'property' => 'user:role',
      'operator' => '~',
      'value' => '/operator|admin|editor/',
      'theme' => 'ThemeKeyAdminTheme',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'happywedding',
    ),
    'string' => '"user:role ~ /operator|admin|editor/ >>> ThemeKeyAdminTheme"',
    'childs' => array(
      0 => array(
        'rule' => array(
          'property' => 'drupal:path',
          'operator' => '=',
          'value' => 'node/%/%/%',
          'theme' => 'ThemeKeyAdminTheme',
          'enabled' => 1,
          'wildcards' => array(),
          'module' => 'happywedding',
        ),
        'string' => '"drupal:path = node/%/%/% >>> ThemeKeyAdminTheme"',
        'childs' => array(),
      ),
      1 => array(
        'rule' => array(
          'property' => 'drupal:path',
          'operator' => '=',
          'value' => 'node/%/%',
          'theme' => 'ThemeKeyAdminTheme',
          'enabled' => 1,
          'wildcards' => array(),
          'module' => 'happywedding',
        ),
        'string' => '"drupal:path = node/%/% >>> ThemeKeyAdminTheme"',
        'childs' => array(),
      ),
    ),
  ),
  4 => array(
    'rule' => array(
      'property' => 'themekey_compat:module_system_triggers_theme',
      'operator' => '=',
      'value' => 'static',
      'theme' => 'default',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'happywedding',
    ),
    'string' => '"themekey_compat:module_system_triggers_theme = static >>> triggered"',
    'childs' => array(),
  ),
);

return $rules;
}
