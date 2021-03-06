<div class="container collapsed-user-block">
  <nav role="navigation">
    <a href="#login-collapse" class="btn btn-login pull-right" data-toggle="collapse">
      <div class="title"><?php echo $title; ?></div>
    </a>
    <?php if ($lang_dropdown): ?>
      <div class="lang-drop">
        <?php print $lang_dropdown; ?>
      </div>
    <?php endif; ?>
  </nav>
  <div id="login-collapse" class="collapse row login-collapse" style="clear:both;">
    <?php if (user_is_logged_in()): ?>
      <div class="containment col-xs-12">
        <?php echo $content; ?>
      </div>
    <?php else: ?>
      <div class="containment">
        <div class="login col-xs-12 col-sm-6 col-lg-6 col-sm-push-6">
          <div class="container-inner">
            <h2><?php print $content['login']['title'] ?></h2>
            <div class="login-content-wrapper">
             <?php print $content['login']['content'] ?>
            </div>
          </div>
        </div>
        <div class="register col-xs-12 col-sm-6 col-lg-6 col-sm-pull-6">
          <div class="container-inner">
            <h2><?php print $content['register']['title'] ?></h2>
            <div class="register-content-wrapper">
              <?php print $content['register']['content'] ?>
            </div>
          </div>
        </div>
      </div>
    <?php endif; ?>
  </div>
</div>
