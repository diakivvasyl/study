<?php
/**
 * @file
 * Drupal Study Drush commands.
 */

use Drush\Log\LogLevel;
use Leafo\ScssPhp\Compiler;

/**
 * Implements hook_drush_command().
 */
function study_drush_command() {
  $items['styles'] = [
    'description' => dt('Compile CSS stylesheets from SCSS.'),
  ];
  return $items;
}

/**
 * Generates CSS stylesheets from SCSS.
 */
function drush_study_styles() {
  $compiler = new Compiler();
  $compiler->setImportPaths(__DIR__ . '/scss');
  $css = $compiler->compile('@import "style.scss";');
  $file = fopen(__DIR__ . '/css/style.css', 'w');
  if (fwrite($file, $css)) {
    drush_log(dt('Styles was compiled successfully.'), LogLevel::SUCCESS);
  }
  else {
    drush_log(dt('Could not create a file with compiled styles.'), LogLevel::WARNING);
  }
  fclose($file);
}

