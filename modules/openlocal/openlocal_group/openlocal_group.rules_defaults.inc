<?php
/**
 * @file
 * openlocal_group.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function openlocal_group_default_rules_configuration() {
  $items = array();
  $items['rules_ol_group_assign_role'] = entity_import('rules_config', '{ "rules_ol_group_assign_role" : {
      "LABEL" : "OL Group: Assign role",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "openlocal" ],
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "og_user_insert" : [] },
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "og-membership:group" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "og-membership:group" ],
            "type" : { "value" : { "ol_group" : "ol_group" } }
          }
        },
        { "og_user_has_permission" : {
            "permission" : "administer group",
            "group" : [ "account:og-user-node:0" ],
            "account" : [ "account" ]
          }
        }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "7" : "7" } } } }
      ]
    }
  }');
  return $items;
}
