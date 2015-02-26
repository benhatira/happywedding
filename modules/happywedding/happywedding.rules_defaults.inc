<?php
/**
 * @file
 * happywedding.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function happywedding_default_rules_configuration() {
  $items = array();
  $items['rules_flag_new_comment'] = entity_import('rules_config', '{ "rules_flag_new_comment" : {
      "LABEL" : "Flag new comment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "flag", "comment" ],
      "ON" : { "comment_insert--comment_node_vendor" : { "bundle" : "comment_node_vendor" } },
      "DO" : [
        { "flag_flagcomment" : {
            "flag" : "is_new",
            "comment" : [ "comment" ],
            "flagging_user" : [ "site:current-user" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_user_login'] = entity_import('rules_config', '{ "rules_user_login" : {
      "LABEL" : "User login",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "NOT user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "6" : "6" } } } }
      ],
      "DO" : [ { "redirect" : { "url" : "\\u003Cfront\\u003E" } } ]
    }
  }');
  $items['rules_vendor_login'] = entity_import('rules_config', '{ "rules_vendor_login" : {
      "LABEL" : "Vendor Login",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-1",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "6" : "6" } } } }
      ],
      "DO" : [ { "redirect" : { "url" : "bo\\/vendor\\/redirect" } } ]
    }
  }');
  return $items;
}
