api = 2
core = 7.x

; Include Build Kit install profile makefile via URL
includes[] = http://drupalcode.org/project/buildkit.git/blob_plain/refs/heads/7.x-2.x:/drupal-org.make

;--------------------
; Build Kit overrides
;--------------------

; Notices on admin/index
; http://drupal.org/node/999582
; projects[rubik][patch][999582] = http://drupal.org/files/issues/999582-1_notices.patch


;--------------------
; Additional Contrib
;--------------------

projects[boxes][subdir] = contrib
projects[boxes][version] = 1.0-beta2

;projects[markdown][subdir] = contrib
;projects[markdown][version] = 1.0-beta1

; Creates invalid HTML with preformatted blocks.
; http://drupal.org/node/684554
; projects[markdown][patch][684554] = http://drupal.org/files/issues/markdown-684554.patch

;--------------------
; Contrib Utilities
;--------------------
projects[backup_migrate][subdir] = "contrib"
projects[admin_menu][subdir] = "contrib"

projects[pathauto][subdir] = "contrib"
projects[token][subdir] = "contrib"
projects[globalredirect][subdir] = "contrib"


projects[webform][subdir] = "contrib"

projects[typogrify][subdir] = "contrib"
projects[layoutstudio_extras][subdir] = "contrib"
projects[browserclass][subdir] = "contrib"
; projects[securesite][subdir] = "contrib"

projects[ctools][subdir] = "contrib"


;DEV VERSION OF PURL - still to do correct download
;git clone --branch 7.x-1.x http://git.drupal.org/sandbox/webflo/1179340.git





; Contrib modules
projects[advanced_help][subdir] = contrib
projects[advanced_help][version] = 1.0-beta1
projects[entity][subdir] = contrib
projects[entity][version] = 1.0-beta8
projects[features][subdir] = contrib
projects[features][version] = 1.0-beta2
projects[features][patch][http://drupal.org/files/issues/features_views_fix-drush-make-1097560-53.patch] = http://drupal.org/files/issues/features_views_fix-drush-make-1097560-53.patch
projects[libraries][subdir] = contrib
projects[libraries][version] = 1.0
projects[media][subdir] = contrib
projects[media][version] = 1.0-beta4
projects[styles][subdir] = contrib
projects[styles][version] = 2.0-alpha5
projects[wysiwyg][subdir] = contrib
; Need dev until 2.1 is posted and http://drupal.org/node/1034476 is in stable.
projects[wysiwyg][version] = 2.x-dev
projects[wysiwyg][patch][] = http://drupal.org/files/issues/624018-138-wysiwyg-entity-exportables.patch


;projects[single_page_website][subdir] = "contrib"

; DESIGN CUSTOMIZATION
projects[sweaver][subdir] = "contrib"
projects[sweaver][version] = "1.x-dev"
projects[fontyourface][subdir] = "contrib"
projects[fontyourface][version] = "1.x-dev"

; SOCIAL STUFF
projects[twitter_pull][subdir] = "contrib"
projects[addthis][subdir] = "contrib"
projects[addthis][version] = "2.1-beta1"

; ANALYTICS STUFF
projects[oauth][subdir] = "contrib"
projects[chart][subdir] = "contrib"
projects[google_analytics_reports][subdir] = "contrib"
projects[google_analytics][subdir] = "contrib"

;UI
projects[editablefields][subdir] = "contrib"

; FEATURES MODULES
projects[features][subdir] = "contrib"
projects[features_plumber][subdir] = "contrib"
projects[features_override][subdir] = "contrib"
projects[record_feature][subdir] = "contrib"
projects[strongarm][subdir] = "contrib"
projects[context][subdir] = "contrib"
projects[uuid_features][subdir] = "contrib"
projects[uuid][subdir] = "contrib"
projects[defaultcontent][version] = "1.0-alpha4"
projects[defaultcontent][subdir] = "contrib"
projects[spaces][subdir] = "contrib"
projects[spaces][version] = "1.x-dev"

; SEO & SEM
projects[page_title][subdir] = "contrib"
projects[xmlsitemap][subdir] = "contrib"
projects[site_verify][subdir] = "contrib"


; Fields API
projects[references][subdir] = "contrib"
projects[email][subdir] = "contrib"
projects[link][subdir] = "contrib"
projects[field_group][subdir] = "contrib"
projects[date][subdir] = "contrib"
;projects[calendar][subdir] = "contrib"

; Views/Display
projects[views][subdir] = "contrib"
projects[views_bulk_operations][subdir] = "contrib"
projects[views_slideshow][subdir] = "contrib"
projects[views_slideshow][version] = "3.0-alpha1"
;projects[views_attach][subdir] = "contrib"

;projects[semanticviews][subdir] = "contrib"
;projects[panels][subdir] = "contrib"
;projects[lightbox2][subdir] = "contrib"

; THEMES			
projects[layoutstudio][type] = "theme"
projects[rubik][type] = "theme"
projects[tao][type] = "theme"

projects[tao][subdir] = contrib
projects[rubik][subdir] = contrib


;--------------------
; Development
;--------------------

projects[coder][subdir] = contrib
projects[coder][version] = 1.0-beta6
projects[devel][subdir] = "contrib"

; LIBRARIES

; CKEditor
;libraries[ckeditor][download][type] = "get"
;libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.5.2/ckeditor_3.5.2.tar.gz"
;libraries[ckeditor][directory_name] = "ckeditor"

libraries[colorbox][download][type] = "get"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/zipball/v1.3.16"
libraries[colorbox][directory_name] = "colorbox"

libraries[jquerycycle][download][type] = "get"
libraries[jquerycycle][download][url] = "https://raw.github.com/malsup/cycle/master/jquery.cycle.lite.js"
libraries[jquerycycle][directory_name] = "jquery.cycle"

libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.x-dev.tar.gz"