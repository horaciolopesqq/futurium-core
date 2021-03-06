<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Three Columns Tower'),
  'category' => t('Bootstrap'),
  'icon' => 'bootstrap_threecol_tower.png',
  'theme' => 'bootstrap_threecol_tower',
  'admin css' => 'bootstrap-threecol-tower.admin.css',
  'regions' => array(
    'row1l' => t('Column Left'),
    'row1c' => t('Column Center'),
    'row1r' => t('Column Right'),
    'row2l' => t('Column Left'),
    'row2c' => t('Column Center'),
    'row2r' => t('Column Right'),
    'row3l' => t('Column Left'),
    'row3c' => t('Column Center'),
    'row3r' => t('Column Right'),
    'row4l' => t('Column Left'),
    'row4c' => t('Column Center'),
    'row4r' => t('Column Right'),
    'row5l' => t('Column Left'),
    'row5c' => t('Column Center'),
    'row5r' => t('Column Right'),
  ),
);
