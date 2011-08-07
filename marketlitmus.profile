<?php

/**
 * @file
 *
 * An Install profile for Market Litmus that uses the Profiler module. Edit the 
 * marketlitmus.profiler.inc file
 */

    !function_exists('profiler_v2') ? require_once('libraries/profiler/profiler.inc') : FALSE;
    profiler_v2('marketlitmus');



/**
 * Return a description of the profile for the initial installation screen. 
 * Profiler also calls this function for details about your Profiler include.
 *
 * @return
 *   An array with keys 'name' and 'description' describing this profile,
 *   and optional 'language' to override the language selection for
 *   language-specific profiles. Profiler also looks to 'path' to discover 
 *   the path of the Profiler include.
 */

function marketlitmus_profile_details() {
  return array(
    'name' => 'Market Litmus Test Profile',
    'description' => 'The Market Litmus Install profile that uses Profiler.',
    'path' => dirname(__FILE__),
  );
}



/**
 * Return an array of the modules to be enabled when this profile is installed.
 *
 * @return
 *   An array of modules to enable.

 */
function marketlitmus_profile_modules() {
  return profiler_profile_modules('marketlitmus');
}


/**
 * Return a list of tasks that this profile supports.
 *
 * @return
 *   A keyed array of tasks the profile will perform during the final stage. The 
 *   keys of the array will be used internally, while the values will be 
 *   displayed to the user in the installer task list.
 */

function marketlitmus_profile_task_list() {
  return profiler_profile_task_list('marketlitmus');
}


/**
 * Perform any final installation tasks for this profile.
 *
 * @param $task
 *   The current $task of the install system. When hook_profile_tasks() is first 
 *   called, this is 'profile'.
 * @param $url
 *   Complete URL to be used for a link or form action on a custom page, if 
 *   providing any, to allow the user to proceed with the installation.
 *
 * @return
 *   An optional HTML string to display to the user. Only used if you modify 
 *   the $task, otherwise discarded.
 */

function marketlitmus_profile_tasks(&$task, $url) {
  profiler_profile_tasks('marketlitmus', $task, $url);
}


