<?php
/**
 * @file
 * happywedding.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function happywedding_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => 0,
  );
  // Exported language: th.
  $languages['th'] = array(
    'language' => 'th',
    'name' => 'Thai',
    'native' => 'ภาษาไทย',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'th',
    'weight' => 0,
  );
  return $languages;
}
