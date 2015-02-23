<?php
/**
 * @file
 * Template for a One row (top) 2 column panel layout.
 *
 * This template provides a one row top across two column panel display
 * layout, with no linked css.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['top': Content in the top row.
 *   - $content['left']: Content in the left column.
 *   - $content['right']: Content in the right column.
 */
?>
<div class="panel-display panel-1row-2col" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel panel-1row-2col-row-top hero-image">
    <?php print $content['top']; ?>
  </div>
  <div class="panel-panel panel-1row-2col-col-first l-region--content">
    <?php print $content['left']; ?>
  </div>

  <aside class="panel-panel panel-1row-2col-col-last l-sidebar-second">
    <?php print $content['right']; ?>
  </aside>
</div>
