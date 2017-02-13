<?php
/**
 * @file
 * Default template file for relation lists.
 */
?>
<?php if ($list): ?>
  <div class="relation-list">
    <div class="title">
      <h2><?php print $title ?></h2>
    </div>
    <div class="list">
      <?php print render($list); ?>
    </div>
    <div class="pager">
      <?php print render($pager); ?>
    </div>
  </div>
<?php endif; ?>
