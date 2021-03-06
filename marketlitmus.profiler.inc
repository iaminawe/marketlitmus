; -----------------------------------------------------------------------------
;                             Introduction
; -----------------------------------------------------------------------------
; Well, this is it! An example Profiler include, showing you how to create your 
; own Install profiles easily. This file uses Drupal's info format, which is 
; very similar to PHP's own ini format, however you can use nested arrays in 
; Drupal's version, which comes in handy for lots of stuff, as you'll see below.
;
; "Wait, you said this would be easy, what is all this stuff?"
;
; There aren't really any mandatory things here, but if you don't put anything 
; in here, your install profile won't do much. :) Don't get overwhelmed, just
; go slow and make a few changes here and there till you get the hang of
; what's happening.
;
; I've tried to create examples for every piece of functionality below, but to 
; get a quick breakdown of what's currently available, here's a list of all the 
; parent items:
;
; - modules
; - modules-unset (This comes in handy for Sub Profiler includes, as you can 
;                 unset modules that are set by the base Profiler include here)
; - features
; - features-unset (@see modules-unset)
; - roles
; - users
; - input-formats
; - variables
; - permissions
; - node-types
; - nodes
; - menus
; - menu-items
; - blocks
; -----------------------------------------------------------------------------

name = Market Litmus
core = 7.x
theme = marketlitmus


; -----------------------------------------------------------------------------
; You could specify this as a base Profiler include by using the following in
; your own Install profile's Profiler include. Then everything in this file
; would be merged with your Profiler include:
; -----------------------------------------------------------------------------
;base = marketlitmus


; -----------------------------------------------------------------------------
;                                  Modules
; -----------------------------------------------------------------------------
; Break out your modules into separate arrays, 'code' and 'contrib' as follows.
; You can create your own arrays as well, such as 'custom'. Any other arrays
; will get installed at the same time as all contrib modules do.
; -----------------------------------------------------------------------------
modules[core][] = block
modules[core][] = contextual_links
modules[core][] = dashboard
modules[core][] = filter
modules[core][] = help
modules[core][] = menu
modules[core][] = image
modules[core][] = overlay
modules[core][] = node
modules[core][] = path
modules[core][] = system
modules[core][] = user
modules[core][] = toolbar
modules[core][] = admin

modules-unset[core]=contact

; Contrib
;modules[contrib][] = admin_menu
;modules[contrib][] = date_api
modules[contrib][] = token
modules[contrib][] = globalredirect
modules[contrib][] = fieldgroup
modules[contrib][] = email
modules[contrib][] = link
modules[contrib][] = nodereference
modules[contrib][] = references
modules[contrib][] = number
modules[contrib][] = optionwidgets
modules[contrib][] = text
modules[contrib][] = views
modules[contrib][] = views_ui
modules[contrib][] = views_exporter
modules[contrib][] = advanced_help
modules[contrib][] = features
modules[contrib][] = pathauto
modules[contrib][] = pathauto
modules[contrib][] = backup_migrate
modules[contrib][] = transliteration
modules[contrib][] = views_bulk_operations
modules[contrib][] = compact_forms
modules[contrib][] = jcarousel

;modules[contrib][] = sweaver
modules[contrib][] = fontyourface
modules[contrib][] = editablefields





; -----------------------------------------------------------------------------
;                                  Features
; -----------------------------------------------------------------------------
; Specify features thusly:

features-unset[]=simple_config

features[] = admin_settings
features[] = wysiwyg_feature
features[] = home_feature
features[] = about_page
features[] = calls_to_action
features[] = product_features
features[] = product_features_defaultcontent
features[] = spotlight_banner
features[] = spotlight_defaultcontent




; -----------------------------------------------------------------------------
;                                   Roles
; -----------------------------------------------------------------------------
; Roles are kinda tricky, because the role ids are what makes them work, yet 
; role ids are given in the order in which the roles are created. For this 
; reason there are two ways of specifying roles here. You can either just make 
; an array of roles with the values being the name of the role, or you can make 
; the value be a nested array and specify the role id manually. Take care when 
; using this latter method. Role id's 1 and 2 are reserved in Drupal.
;
; Note how a text key ('admin' & 'publisher') is used in both instances. This 
; isn't strictly necessary, as you could just empty brackets (roles[] = Admin),
; however if you create a Sub-Profiler include based off this include, you 
; wouldn't have a way of overriding these values if you needed to. Best to use 
; text keys just in case.
; -----------------------------------------------------------------------------

; METHOD 1
;roles[admin] = Admin

; METHOD 2
;roles[manager][rid] = 3
;roles[manager][name] = Manager


; -----------------------------------------------------------------------------
;                                   Users
; -----------------------------------------------------------------------------
; Keep in mind when adding users like this that you are proceeding at your own
; risk. You are writing *in plain text* certain data that could compromise your 
; site. The password field you specify for any user should be an md5 hashed 
; password. I guess that gives you at least one measure of security.
;
; One other thing to note here is that there's this (handy) quirk in Drupal's 
; install API in that you can bypass the configuration form during installation
; (where you'd normally set up user 1 credentials and the site name and such).
; To do this you need to specify credentials for user 1 and also specify the
; site name and site email variables (@see Variables below). 
; -----------------------------------------------------------------------------

;users[superduper][uid]    = 1
;users[superduper][name]   = admin
;users[superduper][mail]   = admin@admin
;users[superduper][pass]   = 10aa208e7e9e257a3f4fe66d1acf84e8
;users[superduper][roles]  = Admin, Manager
;users[superduper][status] = 1

;users[siteadmin][uid]    = 2
;users[siteadmin][name]   = sitemanager
;users[siteadmin][mail]   = changeme@changeme
;users[siteadmin][pass]   = 10aa208e7e9e257a3f4fe66d1acf84e8
;users[siteadmin][roles]  = Manager
;users[siteadmin][status] = 1


; -----------------------------------------------------------------------------
;                                Input Formats
; -----------------------------------------------------------------------------
; Input formats get a little tricky because of these deep nested arrays. The
; first level of the array is just an internal machine name of the filter. You 
; can set this to anything you like, but don't leave empty brackets, or you'll 
; be sorry ;).
;
; For each input format you can set name, roles, filters, allowed-html, wysiwyg 
; (for use with the Wysiwyg API module), and default (set this to 1 on the 
; input format you want to be the default input format).
;
; The filters array is a little tricky as you need to know the 'delta' of each
; input filter, and the module that exposes that filter. Once you know that, 
; the structure is then [filters][MODULE][DELTA] = WEIGHT
;
; The roles key is just a comma separated list of the roles that have access to
; this input format. Be sure to use the correct name exactly!
;
; So if you thought filters was confusing, wysiwyg is even more so. Hopefully
; the example I've outlined below will bring clarity.
; -----------------------------------------------------------------------------



; -----------------------------------------------------------------------------
;                                  Variables
; -----------------------------------------------------------------------------
; These variables should be pretty self explanatory, as they are just an array
; of key value pairs for items in the variable table. Nested arrays also can 
; crop up here, since variables can be arrays.
;
; Also, make note of the site_name and site_mail variables below. These 
; variables need to be set if you want to bypass the Configuration form during 
; installation (@see Users for more information on how this is accomplished).
; -----------------------------------------------------------------------------
variables[site_name] = Market Litmus 
;variables[site_mail] = gregg@iaminawe.com

variables[site_footer] = Market Litmus Footer
;variables[site_frontpage] = node/1
variables[theme_settings][toggle_node_info_page] = 0


; -----------------------------------------------------------------------------
;                                 Permissions
; -----------------------------------------------------------------------------
permissions[access administration pages] = Admin,Manager
permissions[access content] = anonymous user,authenticated user
permissions[access user profiles] = Admin
permissions[administer menu] = Admin,Manager
permissions[administer nodes] = Admin,Manager
permissions[administer site configuration] = Admin
permissions[administer users] = Admin
permissions[change own username] = authenticated user
permissions[create page content] = Admin,Manager
permissions[create users] = Admin
permissions[delete any page content] = Admin,Manager
permissions[delete own page content] = Admin,Manager
permissions[edit any page content] = Admin,Manager
permissions[flush imagecache] = Admin
permissions[notify of path changes] = Admin,Manager
permissions[search content] = anonymous user


; -----------------------------------------------------------------------------
;                                 Nodes types
; -----------------------------------------------------------------------------
;node-types[page][type] = page
;node-types[page][name] = Page
;node-types[page][has_body] = 1
;node-types[page][body_label] = Body
;node-types[page][module] = node
;node-types[page][description] = A <em>page</em> is simply what it sounds like - it's a page on your website.
;node-types[page][custom] = 1
;node-types[page][modified] = 1
;node-types[page][locked] = 0
;node-types[page][help] = ''
;node-types[page][min_word_count] = ''


; -----------------------------------------------------------------------------
;                                    Nodes
; -----------------------------------------------------------------------------
;nodes[front][type] = page
;nodes[front][title] = Isn't Profiler nifty?
;nodes[front][uid] = 2
;nodes[front][body] = <p>Donec vel ipsum elit. In rutrum, ante at fringilla pharetra, mi justo fermentum risus; eget commodo est mi lobortis augue. Proin fringilla malesuada semper. Ut velit sapien, condimentum vel faucibus ut, aliquam quis dui? Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Vivamus vulputate fringilla enim, non convallis nibh lacinia at. Etiam fermentum, lectus ac sagittis volutpat, est augue tincidunt mi, et consectetur orci nisi sit amet sapien. Ut nisi nunc, molestie quis sollicitudin at, dignissim eget nisl? Sed vitae sem lectus. Curabitur viverra laoreet magna. Sed eget sapien tellus, eu tempor purus. Proin dignissim, lacus vitae venenatis porttitor, justo libero rhoncus felis, nec dictum nisl mi vitae nisi. Maecenas tincidunt eros at turpis sollicitudin nec viverra enim condimentum. Sed nec enim justo. In tristique risus dui; ac egestas mi. Proin at arcu sed enim eleifend ornare eu at arcu. Curabitur ullamcorper, ipsum eu imperdiet pharetra, mauris lorem hendrerit metus, in consectetur mauris est iaculis eros. Quisque euismod hendrerit metus ullamcorper tempus! Cras gravida ornare arcu vitae commodo. In hac habitasse platea turpis duis.</p>


; -----------------------------------------------------------------------------
;                                   Menus
; -----------------------------------------------------------------------------

; Create a new menu called Footer Links.
menus[menu-footer-links][title] = Footer Links

; Now add some Menu items to existing menus.
menu-items[login][link_path]  = user/login
menu-items[login][link_title] = Login
menu-items[login][weight]     = 10
menu-items[login][menu_name]  = menu-footer-links

menu-items[logout][link_path]  = logout
menu-items[logout][link_title] = Logout
menu-items[logout][weight]     = 10
menu-items[logout][menu_name]  = menu-footer-links

menu-items[front][link_path]  = <front>
menu-items[front][link_title] = Home
menu-items[front][weight]     = -10
menu-items[front][menu_name]  = primary-links


; -----------------------------------------------------------------------------
;                                   Blocks
; -----------------------------------------------------------------------------
blocks[menu-menu-footer-links][module] = menu
blocks[menu-menu-footer-links][delta] = menu-footer-links
blocks[menu-menu-footer-links][region] = right

