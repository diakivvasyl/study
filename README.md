
## Requirement
- GIT
- Composer
- Drush

## Setup environment

Add following lines using your database access data to `sites/default/settings.local.php`:
```
$databases['default']['default'] = [
  'database' => 'database_name',
  'username' => 'database_user',
  'password' => 'database_password',
  'host' => 'localhost',
  'port' => '3306',
  'driver' => 'mysql',
  'prefix' => '',
  'collation' => 'utf8mb4_general_ci',
];
```
Create public files directory: `mkdir -m 777 sites/default/files/`
Create private files directory: `mkdir -m 777 sites/default/files/private`
Install project
To generate sub-theme use: `.\theme.sh` 

## Usage
* To install a Javascript Bower library, use: `composer require bower-asset/[bower-library-name]:[version]`
* To install a Javascript NPM library, use: `composer require npm-asset/[bower-library-name]:[version]`
* To apply patch for drupal project add following lines to `composer.patches.json`:
```
"name/[project-name]": {
      "[patch-description]": "[patch-path]"
}
```
