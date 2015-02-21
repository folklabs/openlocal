<?php
/**
 * @file
 * openlocal_resource.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function openlocal_resource_default_rules_configuration() {
  $items = array();
  $items['rules_ol_resource_notify_new'] = entity_import('rules_config', '{ "rules_ol_resource_notify_new" : {
      "LABEL" : "OL Resource: notify new",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "openlocal" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--ol_resource" : { "bundle" : "ol_resource" } },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "[[site:name]] New resource created: [node:title]",
            "message" : "See [node:url]"
          }
        }
      ]
    }
  }');
  return $items;
}
