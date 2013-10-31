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


; Local modules

;projects[local_foodhub][version] = contrib
;projects[local_foodhub][type] = module
;projects[local_foodhub][subdir] = openlocal
;projects[local_foodhub][download][type] = git
;projects[local_foodhub][download][url] = /Users/pmackay/dev/openlocal/local_foodhub
;projects[local_foodhub][download][branch] = master


; The Panopoly Foundation

projects[panopoly_core][version] = 1.0-rc5
projects[panopoly_core][subdir] = panopoly

projects[panopoly_images][version] = 1.0-rc5
projects[panopoly_images][subdir] = panopoly

projects[panopoly_theme][version] = 1.0-rc5
projects[panopoly_theme][subdir] = panopoly

projects[panopoly_magic][version] = 1.0-rc5
projects[panopoly_magic][subdir] = panopoly

projects[panopoly_widgets][version] = 1.0-rc5
projects[panopoly_widgets][subdir] = panopoly

projects[panopoly_admin][version] = 1.0-rc5
projects[panopoly_admin][subdir] = panopoly

projects[panopoly_users][version] = 1.0-rc5
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset

projects[panopoly_pages][version] = 1.0-rc5
projects[panopoly_pages][subdir] = panopoly

projects[panopoly_wysiwyg][version] = 1.0-rc5
projects[panopoly_wysiwyg][subdir] = panopoly

projects[panopoly_search][version] = 1.0-rc5
projects[panopoly_search][subdir] = panopoly


; Panopoly apps

projects[panopoly_news][version] = 1.0-rc2
projects[panopoly_news][subdir] = panopoly

projects[panopoly_faq][version] = 2.x-dev
projects[panopoly_faq][subdir] = panopoly


; Development / maintenance

projects[masquerade][version] = 1.0-rc5
projects[masquerade][subdir] = contrib


; Debut

projects[debut_blog][version] = 2.x-dev
projects[debut_blog][subdir] = debut

projects[debut_comment][version] = 2.x-dev
projects[debut_comment][subdir] = debut

projects[debut_forum][version] = 2.x-dev
projects[debut_forum][subdir] = debut

projects[debut_seo][version] = 2.x-dev
projects[debut_seo][subdir] = debut

projects[debut_social][version] = 2.x-dev
projects[debut_social][subdir] = debut

projects[apps_compatible][subdir] = contrib
projects[apps_compatible][version] = 1.0-alpha3
projects[better_exposed_filters][subdir] = contrib
projects[better_exposed_filters][version] = 3.0-beta3
;projects[debut_location][subdir] = contrib
;projects[debut_location][version] = 1.0-alpha2


; OpenLocal dependencies

projects[advpoll][version] = 3.x-dev
projects[advpoll][subdir] = contrib

projects[colorbox][version] = 2.4
projects[colorbox][subdir] = contrib

projects[draggableviews][version] = 2.0
projects[draggableviews][subdir] = contrib

projects[geocoder][version] = 1.2
projects[geocoder][subdir] = contrib

projects[honeypot][version] = 1.15
projects[honeypot][subdir] = contrib

projects[leaflet][version] = 1.0-beta3
projects[leaflet][subdir] = contrib

projects[leaflet_more_maps][version] = 1.7
projects[leaflet_more_maps][subdir] = contrib

projects[mass_contact][version] = 1.0-beta3
projects[mass_contact][subdir] = contrib

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

projects[registration][version] =	1.2
projects[registration][subdir] = contrib

projects[privatemsg][version] = 1.4
projects[privatemsg][subdir] = contrib

projects[votingapi][version] = 2.11
projects[votingapi][subdir] = contrib

projects[webform][version] = 3.19
projects[webform][subdir] = contrib

projects[workbench][version] = 1.2
projects[workbench][subdir] = contrib

projects[workbench_moderation][version] = 1.3
projects[workbench_moderation][subdir] = contrib

;projects[][version] =
;projects[][subdir] = contrib


; OpenLocal

;projects[local_campaign][version] = 2.x-dev
;projects[local_campaign][subdir] = debut

;projects[debut_poll][version] = 2.x-dev
;projects[debut_poll][subdir] = debut

;projects[debut_survey][version] = 2.x-dev
;projects[debut_survey][subdir] = debut


; Libraries

libraries[leaflet][download][type] = get
libraries[leaflet][download][url] = http://leaflet-cdn.s3.amazonaws.com/build/leaflet-0.6.4.zip
libraries[leaflet][destination] = libraries

libraries[colorbox][download][type] = get
libraries[colorbox][download][url] = https://github.com/jackmoore/colorbox/archive/1.x.zip
libraries[colorbox][destination] = libraries


; Themes

projects[adaptivetheme][version] = 3.1
