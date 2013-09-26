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
projects[local_foodhub][type] = module
projects[local_foodhub][subdir] = openlocal
projects[local_foodhub][download][type] = git
projects[local_foodhub][download][url] = /Users/pmackay/dev/openlocal/local_foodhub
projects[local_foodhub][download][branch] = master

; TODO: remove

;includes[debut_location] = "http://drupalcode.org/project/debut_location.git/blob_plain/refs/heads/7.x-1.x:/debut_location.make.inc"


; The Panopoly Foundation

projects[panopoly_core][version] = 1.0-rc4
projects[panopoly_core][subdir] = panopoly

projects[apps_compatible][subdir] = contrib
projects[apps_compatible][version] = 1.0-alpha3
projects[better_exposed_filters][subdir] = contrib
projects[better_exposed_filters][version] = 3.0-beta3
projects[debut_location][subdir] = contrib
projects[debut_location][version] = 1.0-alpha2


projects[panopoly_images][version] = 1.0-rc4
projects[panopoly_images][subdir] = panopoly

projects[panopoly_theme][version] = 1.0-rc4
projects[panopoly_theme][subdir] = panopoly

projects[panopoly_magic][version] = 1.0-rc4
projects[panopoly_magic][subdir] = panopoly

projects[panopoly_widgets][version] = 1.0-rc4
projects[panopoly_widgets][subdir] = panopoly

projects[panopoly_admin][version] = 1.0-rc4
projects[panopoly_admin][subdir] = panopoly

projects[panopoly_users][version] = 1.0-rc4
projects[panopoly_users][subdir] = panopoly


; The Panopoly Toolset

projects[panopoly_pages][version] = 1.0-rc4
projects[panopoly_pages][subdir] = panopoly

projects[panopoly_wysiwyg][version] = 1.0-rc4
projects[panopoly_wysiwyg][subdir] = panopoly

projects[panopoly_search][version] = 1.0-rc4
projects[panopoly_search][subdir] = panopoly
projects[panopoly_search][patch][1976178] = http://drupal.org/files/1976178-disable-solr-on-pantheon-1.patch


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

projects[debut_event][version] = 2.x-dev
projects[debut_event][subdir] = debut

projects[debut_forum][version] = 2.x-dev
projects[debut_forum][subdir] = debut

projects[debut_seo][version] = 2.x-dev
projects[debut_seo][subdir] = debut

projects[debut_social][version] = 2.x-dev
projects[debut_social][subdir] = debut


; OpenLocal dependencies

projects[features][version] = 2.0-rc3
projects[features][subdir] = contrib

projects[mass_contact][version] = 1.0-beta3
projects[mass_contact][subdir] = contrib

projects[og][version] = 2.3
projects[og][subdir] = contrib

projects[connector][version] = 1.0-beta2
projects[connector][subdir] = contrib

projects[oauthconnector][version] = 1.0-beta2
projects[oauthconnector][subdir] = contrib

projects[http_client][version] = 2.4
projects[http_client][subdir] = contrib

projects[oauth][version] = 3.1
projects[oauth][subdir] = contrib

projects[office_hours][version] = 1.3
projects[office_hours][subdir] = contrib


; OpenLocal

;projects[local_campaign][version] = 2.x-dev
;projects[local_campaign][subdir] = debut

;projects[debut_poll][version] = 2.x-dev
;projects[debut_poll][subdir] = debut

;projects[debut_survey][version] = 2.x-dev
;projects[debut_survey][subdir] = debut


