<?php
/**
 * @file
 * openlocal_issue.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function openlocal_issue_default_rules_configuration() {
  $items = array();
  $items['rules_ol_issue_notify_new_item'] = entity_import('rules_config', '{ "rules_ol_issue_notify_new_item" : {
      "LABEL" : "OL Issue: notify new item",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "openlocal" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--ol_issue" : { "bundle" : "ol_issue" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ol_issue" : "ol_issue" } }
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "New issue created: [node:title]",
            "message" : "A new issue has just been created. Take a look at [node:url]."
          }
        }
      ]
    }
  }');
  $items['rules_ol_issue_update_notify'] = entity_import('rules_config', '{ "rules_ol_issue_update_notify" : {
      "LABEL" : "OL Issue: update notify",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "openlocal" ],
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : {
        "node_update--ol_issue" : { "bundle" : "ol_issue" },
        "comment_insert--comment_node_ol_issue" : { "bundle" : "comment_node_ol_issue" }
      },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "ol_issue" : "ol_issue" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "[site:name]: Issue update: [revision:title]",
            "message" : "This issue has been updated, please check any changes at [revision:url].",
            "language" : [ "" ]
          }
        },
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "[site:name]: Issue update: [revision:title]",
            "message" : "This issue has been updated, please check any changes at [revision:url]."
          }
        }
      ]
    }
  }');
  return $items;
}
