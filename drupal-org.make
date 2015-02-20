; This file describes the core project requirements for OpenLocal 7.x. Several
; patches against Drupal core and their associated issue numbers have been
; included here for reference.
;
; Use this file to build a full distro including Drupal core (with patches) and
; the OpenLocal install profile using the following command:
;
;     $ drush make distro.make [directory]

api = 2
core = 7.x


; The Panopoly Foundation

projects[panopoly_core][version] = 1.17
projects[panopoly_core][subdir] = panopoly
;projects[panopoly_core][patch][1962642] = https://drupal.org/files/1962642-defaultconfig.undefinedindex-2.patch

projects[panopoly_images][version] = 1.17
projects[panopoly_images][subdir] = panopoly

projects[panopoly_theme][version] = 1.17
projects[panopoly_theme][subdir] = panopoly

projects[panopoly_magic][version] = 1.17
projects[panopoly_magic][subdir] = panopoly

projects[panopoly_widgets][version] = 1.17
projects[panopoly_widgets][subdir] = panopoly

projects[panopoly_admin][version] = 1.17
projects[panopoly_admin][subdir] = panopoly

projects[panopoly_users][version] = 1.17
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset

projects[panopoly_pages][version] = 1.17
projects[panopoly_pages][subdir] = panopoly

projects[panopoly_wysiwyg][version] = 1.17
projects[panopoly_wysiwyg][subdir] = panopoly

projects[panopoly_search][version] = 1.17
projects[panopoly_search][subdir] = panopoly


; Development / maintenance

projects[masquerade][version] = 1.17
projects[masquerade][subdir] = contrib


; OpenLocal dependencies

projects[advagg][version] = 2.7
projects[advagg][subdir] = contrib

projects[addressfield][version] = 1.0-beta4
projects[addressfield][subdir] = contrib

projects[autocomplete_deluxe][version] = 2.0-beta3
projects[autocomplete_deluxe][subdir] = contrib

projects[commentaccess][version] = 1.1
projects[commentaccess][subdir] = contrib

projects[context][version] = 3.1
projects[context][subdir] = contrib

projects[eck][version] = 2.0-rc2
projects[eck][subdir] = contrib

projects[entityreference_view_widget][version] = 2.0-rc6
projects[entityreference_view_widget][subdir] = contrib

projects[eu_cookie_compliance][version] = 1.14
projects[eu_cookie_compliance][subdir] = contrib

projects[calendar][version] = 3.4
projects[calendar][subdir] = contrib

projects[colorbox][version] = 2.4
projects[colorbox][subdir] = contrib

projects[draggableviews][version] = 2.0
projects[draggableviews][subdir] = contrib

projects[email][version] = 1.2
projects[email][subdir] = contrib

projects[field_collection][version] = 1.0-beta5
projects[field_collection][subdir] = contrib

projects[flag][version] = 3.5
projects[flag][subdir] = contrib

projects[geofield][version] = 2.0
projects[geofield][subdir] = contrib

projects[geocoder][version] = 1.2
projects[geocoder][subdir] = contrib

projects[geo_filter][version] = 1.1
projects[geo_filter][subdir] = contrib

projects[geophp][version] = 1.7
projects[geophp][subdir] = contrib

projects[honeypot][version] = 1.15
projects[honeypot][subdir] = contrib

projects[imagefield_focus][version] = 1.0
projects[imagefield_focus][subdir] = contrib

projects[leaflet][version] = 1.0-beta3
projects[leaflet][subdir] = contrib

projects[leaflet_more_maps][version] = 1.7
projects[leaflet_more_maps][subdir] = contrib

projects[mailchimp][version] = 2.12
projects[mailchimp][subdir] = contrib

projects[mass_contact][version] = 1.0-beta3
projects[mass_contact][subdir] = contrib

projects[maxlength][version] = 3.0
projects[maxlength][subdir] = contrib

projects[nodequeue][version] = 2.0-beta1
projects[nodequeue][subdir] = contrib

projects[multiupload_filefield_widget][version] = 1.13
projects[multiupload_filefield_widget][subdir] = contrib

projects[multiupload_imagefield_widget][version] = 1.3
projects[multiupload_imagefield_widget][subdir] = contrib

projects[og][version] = 2.3
projects[og][subdir] = contrib

projects[og_extras][version] = 1.1
projects[og_extras][subdir] = contrib

projects[connector][version] = 1.0-beta2
projects[connector][subdir] = contrib

projects[oauthconnector][version] = 1.0-beta2
projects[oauthconnector][subdir] = contrib

projects[http_client][version] = 2.4
projects[http_client][subdir] = contrib

projects[nice_menus][version] = 2.5
projects[nice_menus][subdir] = contrib

projects[oauth][version] = 3.1
projects[oauth][subdir] = contrib

projects[office_hours][version] = 1.3
projects[office_hours][subdir] = contrib

projects[entityreference_prepopulate][version] = 1.3
projects[entityreference_prepopulate][subdir] = contrib

;projects[responsive_menus][version] =
;projects[responsive_menus][subdir] = contrib

projects[radioactivity][version] = 2.9
projects[radioactivity][subdir] = contrib

projects[references][version] =	2.1
projects[references][subdir] = contrib

projects[registration][version] =	1.2
projects[registration][subdir] = contrib

projects[rules][version] = 2.6
projects[rules][subdir] = contrib

projects[privatemsg][version] = 1.4
projects[privatemsg][subdir] = contrib

projects[simplenews][version] = 1.1
projects[simplenews][subdir] = contrib

projects[site_map][version] = 1.0
projects[site_map[subdir] = contrib

projects[smtp][version] = 1.2
projects[smtp][subdir] = contrib

projects[views_slideshow][version] = 3.1
projects[views_slideshow][subdir] = contrib

projects[votingapi][version] = 2.11
projects[votingapi][subdir] = contrib

projects[webform][version] = 3.19
projects[webform][subdir] = contrib

projects[workbench][version] = 1.2
projects[workbench][subdir] = contrib

projects[workbench_moderation][version] = 1.3
projects[workbench_moderation][subdir] = contrib
projects[workbench_moderation][patch][1285090] = https://drupal.org/files/playnicewithpanels-1285090-22.patch


; Migration

;projects[migrate][version] = 2.5
;projects[migrate][subdir] = contrib

;projects[migrate_d2d][version] = 2.0
;projects[migrate_d2d][subdir] = contrib

;projects[migrate_extras][version] = 2.5
;projects[migrate_extras][subdir] = contrib

;projects[migrate_rpforum][version] = 1.0
;projects[migrate_rpforum][subdir] = contrib
;projects[migrate_rpforum][type] = module
;projects[migrate_rpforum][download][type] = git
;projects[migrate_rpforum][download][url] = https://github.com/pmackay/migrate_rpforum.git
;projects[migrate_rpforum][download][revision] = 8c18fbb


; Libraries

libraries[colorbox][download][type] = get
libraries[colorbox][download][url] = https://github.com/jackmoore/colorbox/archive/1.x.zip
libraries[colorbox][destination] = libraries

libraries[leaflet][download][type] = get
libraries[leaflet][download][url] = http://leaflet-cdn.s3.amazonaws.com/build/leaflet-0.6.4.zip
libraries[leaflet][destination] = libraries




; Themes

;projects[adaptivetheme][version] = 3.1
