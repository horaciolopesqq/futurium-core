<?php

/**
 * @file
 * Display Suite 3 column 25/50/25 template.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="ds-3col <?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <<?php print $left_wrapper ?> class="col col-lg-2 group-left<?php print $left_classes;?>">
    <?php print $left; ?>
  </<?php print $left_wrapper ?>>

  <<?php print $middle_wrapper ?> class="col col-lg-6 group-middle<?php print $middle_classes;?>">
    <?php print $middle; ?>
  </<?php print $middle_wrapper ?>>

  <<?php print $right_wrapper ?> class="col col-lg-4 group-right<?php print $right_classes;?>">
    <?php print $right; ?>
  </<?php print $right_wrapper ?>>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>