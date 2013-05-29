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

projects[local_foodhub][type] = module
projects[local_foodhub][download][type] = git
projects[local_foodhub][download][url] = /Users/pmackay/dev/openlocal/local_foodhub
projects[local_foodhub][download][branch] = master

; TODO: remove

;includes[debut_location] = "http://drupalcode.org/project/debut_location.git/blob_plain/refs/heads/7.x-1.x:/debut_location.make.inc"



; The Panopoly Foundation

projects[panopoly_core][version] = 1.0-rc4
projects[panopoly_core][subdir] = panopoly

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





