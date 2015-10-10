<?php
/**
 * @file
 * jdrupal_starter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jdrupal_starter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}
