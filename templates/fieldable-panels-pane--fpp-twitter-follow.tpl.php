<?php
/**
 * @file
 * Template for Fieldable Panels Pane display of twitter follow button.
 */

  $twitter_acct_name = "creighton";
  if (isset($content['field_twitter_account_name'][0]['#markup'])) {
    if ($content['field_twitter_account_name'][0]['#markup'] !== "") {
      $twitter_acct_name = $content['field_twitter_account_name'][0]['#markup'];
    }
  }

  $twitter_show_count       = $content['field_twitter_show_count'][0]['#markup'] == "true" ? "true" : "false";
  $twitter_show_screen_name = $content['field_twitter_show_screen_name'][0]['#markup'] == "true" ? "true" : "false";
  $twitter_opt_large_btn    = $content['field_twitter_large_button'][0]['#markup'] == "true" ? "large" : "small";

  $twitter_acct_name = str_replace("@", "", $twitter_acct_name);
  $twitter_acct_name = str_replace(" ", "", $twitter_acct_name); // Trim blank spaces

  $twttr_config_data = array(
    '<a class="twitter-follow-button" href="https://twitter.com/' . $twitter_acct_name,
    '" data-show-count="' . $twitter_show_count,
    '" data-show-screen-name="' . $twitter_show_screen_name,
    '" data-size="' . $twitter_opt_large_btn . '">Follow @' . t($twitter_acct_name) . '</a>'
  );

  //$twitter_config_data = json_encode($twttr_config_data);
?>
<?php if (strlen($twitter_acct_name) > 0) : ?>
  <?php print implode($twttr_config_data); ?>
<?php else: ?>
  <?php if (isset($_POST["twitter-submit"])) : ?>
    <p style="color:red;">Error: Twitter account name (@twittername) is required, but was not provided.</p>
  <?php endif; ?>
<?php endif; ?>
