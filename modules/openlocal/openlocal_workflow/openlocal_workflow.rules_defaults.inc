<?php
/**
 * @file
 * openlocal_core.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function openlocal_core_default_rules_configuration() {
  $items = array();
  $items['rules_ol_core_item_needs_moderation'] = entity_import('rules_config', '{ "rules_ol_core_item_needs_moderation" : {
      "LABEL" : "OL Core: Item needs moderation",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "openlocal" ],
      "REQUIRES" : [ "rules", "workbench_moderation" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "Item needing moderation: [node:title]",
            "message" : "State changed from [previous-state:value] to [new-state:value].\\r\\n\\r\\n[node:url]"
          }
        }
      ]
    }
  }');
  return $items;
}
