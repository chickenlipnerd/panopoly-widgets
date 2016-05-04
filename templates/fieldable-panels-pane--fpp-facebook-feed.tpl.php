<?php
/**
 * @file
 * Template for Fieldable Panels Pane display of facebook feed.
 * TODO - refactor as much javascript move into ../creighton-panopoly-widgets.js
 */

  $fb_url             = isset($content['field_facebook_page_url'][0]['#markup']) ? $content['field_facebook_page_url'][0]['#markup'] : "https://www.facebook.com/CreightonBasketball/" ;
  $fb_hide_cover      = isset($content['field_fb_hide_cover'][0]['#markup']) ? $content['field_fb_hide_cover'][0]['#markup'] : "true";
  $fb_option_facepile = isset($content['field_fb_show_facepile'][0]['#markup']) ? $content['field_fb_show_facepile'][0]['#markup'] : "false";
  $fb_tab_options     = $content['field_fb_show_timeline'][0]['#markup'] == "true" ? "timeline" : "";

  if ($content['field_fb_show_events'][0]['#markup'] == "true") {
    $fb_tab_options .= (strlen($fb_tab_options) > 0) ? ",events": "events";
  }

  if($content['field_fb_allow_messages'][0]['#markup'] == "true") {
    $fb_tab_options .= (strlen($fb_tab_options) > 0) ? ",messages": "messages";
  }

//dpm($content);
?>
<script>

    var fb_root_el = null;

    if (!document.getElementById('fb-root')) {
        fb_root_el = document.createElement("div");
        fb_root_el.setAttribute('id', 'fb-root');//  .id = "fb-root";
        document.body.insertBefore(fb_root_el, document.body.firstElementChild);
    }

    window.fbAsyncInit = function() {

        FB.init({
          xfbml      : true,
          version    : 'v2.5',
          //channelUrl : '//dev-rickspanopoly.pantheon.io/sites/channel.html'
        });
    };

    (function(d, s, id){
        var js, fjs = d.getElementsByTagName(s)[0];
        if (d.getElementById(id)) {return;}
        js = d.createElement(s); js.id = id;
        js.src = "//connect.facebook.net/en_US/sdk.js";
        fjs.parentNode.insertBefore(js, fjs);
    }(document, 'script', 'facebook-jssdk'));
</script>

<?php if (strlen($fb_url) > 0) : ?>
    <div class="fb-page"
      data-href="<?php print $fb_url; ?>"
      <?php if (strlen($fb_tab_options) > 0) : ?>
      data-tabs="<?php print $fb_tab_options; ?>"
      <?php endif; ?>
      data-width=500
      data-small-header="true"
      data-adapt-container-width="true"
      data-hide-cover="<?php print $fb_hide_cover; ?>"
      data-show-facepile="<?php print $fb_option_facepile; ?>">
      <div class="fb-xfbml-parse-ignore">
        <blockquote cite="<?php print $fb_url; ?>">
            <a href="<?php print $fb_url; ?>">Go to my facebook feed.</a>
        </blockquote>
      </div>
    </div>

<?php else: ?>
    <p>Error: facebook URL is required, but not provided.</p>
<?php endif; ?>
