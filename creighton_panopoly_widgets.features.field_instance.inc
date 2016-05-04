<?php
/**
 * @file
 * creighton_panopoly_widgets.features.field_instance.inc
 *
 * Anywhere you see a default value it needs to match whats being initialized in the template for preview
 */

/**
 * Implements hook_field_default_field_instances().
 */
function creighton_panopoly_widgets_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'fieldable_panels_pane-fpp_facebook_feed-field_facebook_page_url'.
  $field_instances['fieldable_panels_pane-fpp_facebook_feed-field_facebook_page_url'] = array(
    'bundle' => 'fpp_facebook_feed',
    'default_value' => array(
      0 => array(
        'value' => 'https://www.facebook.com/CreightonBasketball/',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'preview' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_facebook_page_url',
    'label' => 'Facebook Page URL',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-fpp_facebook_feed-field_fb_allow_messages'.
  $field_instances['fieldable_panels_pane-fpp_facebook_feed-field_fb_allow_messages'] = array(
    'bundle' => 'fpp_facebook_feed',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'preview' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_fb_allow_messages',
    'label' => 'Allow Messages',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-fpp_facebook_feed-field_fb_hide_cover'.
  $field_instances['fieldable_panels_pane-fpp_facebook_feed-field_fb_hide_cover'] = array(
    'bundle' => 'fpp_facebook_feed',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'preview' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_fb_hide_cover',
    'label' => 'Hide Cover',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => -3,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-fpp_facebook_feed-field_fb_show_events'.
  $field_instances['fieldable_panels_pane-fpp_facebook_feed-field_fb_show_events'] = array(
    'bundle' => 'fpp_facebook_feed',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'preview' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_fb_show_events',
    'label' => 'Show Events',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => -1,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-fpp_facebook_feed-field_fb_show_facepile'.
  $field_instances['fieldable_panels_pane-fpp_facebook_feed-field_fb_show_facepile'] = array(
    'bundle' => 'fpp_facebook_feed',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'preview' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_fb_show_facepile',
    'label' => 'Show Facepile',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-fpp_facebook_feed-field_fb_show_timeline'.
  $field_instances['fieldable_panels_pane-fpp_facebook_feed-field_fb_show_timeline'] = array(
    'bundle' => 'fpp_facebook_feed',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'preview' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_fb_show_timeline',
    'label' => 'Show Timeline',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => -2,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-fpp_twitter_follow-field_twitter_account_name'.
  $field_instances['fieldable_panels_pane-fpp_twitter_follow-field_twitter_account_name'] = array(
    'bundle' => 'fpp_twitter_follow',
    'default_value' => array(
      0 => array(
        'value' => '@creighton',
      ),
    ),
    'deleted' => 0,
    'description' => 'The twitter account name associated with your account. Example: @twittername',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_twitter_account_name',
    'label' => 'Twitter account name',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-fpp_twitter_follow-field_twitter_large_button'.
  $field_instances['fieldable_panels_pane-fpp_twitter_follow-field_twitter_large_button'] = array(
    'bundle' => 'fpp_twitter_follow',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Creates a larger twitter follow button.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_twitter_large_button',
    'label' => 'Large follow button',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => -1,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-fpp_twitter_follow-field_twitter_show_count'.
  $field_instances['fieldable_panels_pane-fpp_twitter_follow-field_twitter_show_count'] = array(
    'bundle' => 'fpp_twitter_follow',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Adds current number of followers next to the Follow button.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_twitter_show_count',
    'label' => 'Show Count',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => -3,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-fpp_twitter_follow-field_twitter_show_screen_name'.
  $field_instances['fieldable_panels_pane-fpp_twitter_follow-field_twitter_show_screen_name'] = array(
    'bundle' => 'fpp_twitter_follow',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Adds the Twitter screen name inside the Follow button.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_twitter_show_screen_name',
    'label' => 'Show screen name',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => -2,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-fpp_twitter_feed-field_twitter_embed_code'.
  $field_instances['fieldable_panels_pane-fpp_twitter_feed-field_twitter_embed_code'] = array(
    'bundle' => 'fpp_twitter_feed',
    'default_value' => array(
      0 => array(
        'value' => '<a class="twitter-timeline" href="https://twitter.com/erniegoss" data-widget-id="700718552228057088">Tweets by @erniegoss</a><script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?\'http\':\'https\';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+"://platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_twitter_embed_code',
    'label' => 'Twitter embed code',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processin g' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-fpp_twitter_feed-field_twitter_tweet_count'.
  $field_instances['fieldable_panels_pane-fpp_twitter_feed-field_twitter_tweet_count'] = array(
    'bundle' => 'fpp_twitter_feed',
    'default_value' => array(
      0 => array(
        'value' => 3,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_twitter_tweet_count',
    'label' => 'Tweet count',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -3,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-fpp_qualtrics_form-field_qualtrics_survey_link'.
  $field_instances['fieldable_panels_pane-fpp_qualtrics_form-field_qualtrics_survey_link'] = array(
    'bundle' => 'fpp_qualtrics_form',
    'default_value' => array(
      0 => array(
        'value' => 'https://blueq.co1.qualtrics.com/SE/?SID=SV_bDgOU9wRtJ7mWaN',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_qualtrics_survey_link',
    'label' => 'Qualtrics survey link',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -3,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-fpp_slate_form-field_slate_embed_code'.
  $field_instances['fieldable_panels_pane-fpp_slate_form-field_slate_embed_code'] = array(
    'bundle' => 'fpp_slate_form',
    'default_value' => array(
      0 => array(
        'value' => '<div id="form_f0806b3c-5c17-4a98-8e13-34e36cb81661">Loading...</div><script>/*<![CDATA[*/var script = document.createElement(\'script\'); script.async = 1; script.src = \'https://choose.creighton.edu/register/?id=f0806b3c-5c17-4a98-8e13-34e36cb81661&output=embed&div=form_f0806b3c-5c17-4a98-8e13-34e36cb81661\' + ((location.search.length > 1) ? \'&\' + location.search.substring(1) : \'\'); var s = document.getElementsByTagName(\'script\')[0]; s.parentNode.insertBefore(script, s);/*]]>*/</script>')
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_slate_embed_code',
    'label' => 'Slate Embed Code',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Allow Messages');
  t('Facebook Page URL');
  t('Hide Cover');
  t('Show Events');
  t('Show Facepile');
  t('Show Timeline');
  t('Adds current number of followers next to the Follow button.');
  t('Adds the Twitter screen name inside the Follow button.');
  t('Creates a larger twitter follow button.');
  t('Large follow button');
  t('Show Count');
  t('Show screen name');
  t('The twitter account name associated with your account. Example: @twittername');
  t('Twitter account name');
  t('Tweet count');
  t('Twitter embed code');
  t('Copy and paste your Qualtrics embed code into this field.');
  t('Embed Slate web forms in the sidebar.');
  t('Qualtrics survey link');
  t('Slate Embed Code');

  return $field_instances;
}
