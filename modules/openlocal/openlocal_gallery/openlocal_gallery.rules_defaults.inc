<?php
/**
 * @file
 * openlocal_gallery.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function openlocal_gallery_default_rules_configuration() {
  $items = array();
  $items['rules_ol_gallery_notify_new'] = entity_import('rules_config', '{ "rules_ol_gallery_notify_new" : {
      "LABEL" : "OL Gallery: notify new",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "openlocal" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--ol_gallery" : { "bundle" : "ol_gallery" } },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "[site:name] New gallery created: [node:title]",
            "message" : "See [node:url]"
          }
        }
      ]
    }
  }');
  return $items;
}
