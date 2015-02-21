<?php
/**
 * @file
 * openlocal_user.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function openlocal_user_default_rules_configuration() {
  $items = array();
  $items['rules_ol_user_new_user_notification'] = entity_import('rules_config', '{ "rules_ol_user_new_user_notification" : {
      "LABEL" : "OL User: new user notification",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "openlocal" ],
      "REQUIRES" : [ "rules", "logintoboggan_rules" ],
      "ON" : { "logintoboggan_validated" : [] },
      "DO" : [
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "[site:name]: New user registered: [account:name]",
            "message" : "[account:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_ol_user_verify_address'] = entity_import('rules_config', '{ "rules_ol_user_verify_address" : {
      "LABEL" : "OL User Verify address",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "openlocal" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "OR" : [
            { "data_is_empty" : { "data" : [
                  "account:profile-ol-personal-info:field-ol-personal-address:postal-code"
                ]
              }
            },
            { "data_is_empty" : { "data" : [
                  "account:profile-ol-personal-info:field-ol-personal-address:thoroughfare"
                ]
              }
            }
          ]
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Please edit your \\u003Cb\\u003E\\u003Ca href=\\u0022\\/user\\/[account:uid]\\/edit\\/ol_personal_info\\u0022\\u003Euser profile personal info\\u003C\\/a\\u003E\\u003C\\/b\\u003E and enter your street in \\u0022Address 1\\u0022 and your postcode, just to help us show you really local, relevant information." } }
      ]
    }
  }');
  return $items;
}
