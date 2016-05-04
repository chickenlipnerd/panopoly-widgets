<?php
/**
 * @file
 * Template for Fieldable Panels Pane display of twitter feed.
 */

  $twitter_embed_code_default = '<a class="twitter-timeline" href="https://twitter.com/erniegoss" '
                              . 'data-widget-id="700718552228057088">Tweets by @erniegoss</a> '
                              . '<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],'
                              . 'p=/^http:/.test(d.location)?\'http\':\'https\';if(!d.getElementById(id))'
                              . '{js=d.createElement(s);js.id=id;js.src=p+"://platform.twitter.com/widgets.js";'
                              . 'fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>';

  $twitter_embed_code         = isset($content['field_twitter_embed_code']) ? htmlspecialchars_decode($content['field_twitter_embed_code'][0]['#markup']) : $twitter_embed_code_default; // required field
  $twitter_tweet_count        = isset($content["field_twitter_tweet_count"]) ? $content["field_twitter_tweet_count"][0]['#markup'] : "3";

  $twitter_acct_name = "";
  $twitter_embed_code_scrubbed = "";
  $widget_id = "";
  $href_string = "";
  $aref_string = "";

  if (strlen($twitter_embed_code) > 0) {
    $twitter_embed_code_scrubbed = explode('<script>', $twitter_embed_code);  // remove script tag from twitter embed widget code
    $twitter_embed_code_scrubbed = $twitter_embed_code_scrubbed[0];

    $href_string = strstr($twitter_embed_code_scrubbed, '://');
    $href_string = substr($href_string, 3, strpos($href_string, '"')-3);
    $twitter_acct_name = substr(strstr($href_string, '/'), 1);
    $widget_id = strstr($twitter_embed_code_scrubbed, 'data-widget-id="');
    $widget_id = substr($widget_id, strlen('data-widget-id="'), strpos($widget_id, '"') - strlen('data-widget-id="'));
    $widget_id = substr($widget_id, 0, strpos($widget_id, '"'));
    $aref_string = strstr($twitter_embed_code_scrubbed, '>');
    $aref_string = substr($aref_string, 1, strpos($aref_string, '<')-1);

    //$twitter_embed_code_encoded = htmlspecialchars($twitter_embed_code_scrubbed);
    $twttr_config_data = array(
      '<a class="twitter-timeline"',
      ' href="https://twitter.com/' . $twitter_acct_name,
      '" data-widget-id="' . $widget_id,
      '" twitter-acct-name="' . $twitter_acct_name,
      '" data-tweet-limit="' . $twitter_tweet_count,
      '">' . $aref_string . '</a>',
    );
  }
?>
<div id="twitter-feed-container"></div>
<?php if (strlen($twitter_embed_code) > 0) : ?>
  <?php print implode($twttr_config_data); ?>
<?php else: ?>
  <?php if (isset($_POST["twitter-submit"])) : ?>
    <p style="color:red;">Error: Twitter account name (@twittername) is required, but was not provided.</p>
  <?php endif; ?>
<?php endif; ?>
