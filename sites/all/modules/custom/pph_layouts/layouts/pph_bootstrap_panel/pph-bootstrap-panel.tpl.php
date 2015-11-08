<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>

<div class="panel panel-default <?php print $classes; ?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php if (!empty($heading)) : ?>
    <div class="panel-heading <?php print $heading_classes; ?>">
      <?php print $heading; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($body)) : ?>
    <div class="panel-body <?php print $body_classes; ?>">
      <?php print $body; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($footer)) : ?>
    <div class="panel-footer <?php print $footer_classes; ?>">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>
</div>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
