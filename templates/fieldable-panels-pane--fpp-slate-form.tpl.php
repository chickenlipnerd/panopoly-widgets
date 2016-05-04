<?php
/**
 * @file
 * Template file for Fieldable Panels Panes widget used to embed Slate web forms.
 * TODO - Create the appropriate rendering from the embed code inserted by the user.
 */

// Example Slate embed forms
//<div id="form_3d350997-f455-4ed6-af01-31e1acafb912">Loading...</div><script async="async" src="https://choose.creighton.edu/register/?id=3d350997-f455-4ed6-af01-31e1acafb912&amp;output=embed&amp;div=form_3d350997-f455-4ed6-af01-31e1acafb912">/**/</script>
//
//<div id="form_f0806b3c-5c17-4a98-8e13-34e36cb81661">Loading...</div><script>/*<![CDATA[*/var script = document.createElement('script'); script.async = 1; script.src = 'https://choose.creighton.edu/register/?id=f0806b3c-5c17-4a98-8e13-34e36cb81661&output=embed&div=form_f0806b3c-5c17-4a98-8e13-34e36cb81661' + ((location.search.length > 1) ? '&' + location.search.substring(1) : ''); var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(script, s);/*]]>*/</script>
  $slate_embed_code_default = '<div id="form_f0806b3c-5c17-4a98-8e13-34e36cb81661">Loading...</div><script>/*<![CDATA[*/var script = document.createElement(\'script\'); script.async = 1; script.src = \'https://choose.creighton.edu/register/?id=f0806b3c-5c17-4a98-8e13-34e36cb81661&output=embed&div=form_f0806b3c-5c17-4a98-8e13-34e36cb81661\' + ((location.search.length > 1) ? \'&\' + location.search.substring(1) : \'\'); var s = document.getElementsByTagName(\'script\')[0]; s.parentNode.insertBefore(script, s);/*]]>*/</script>';
  $slate_embed_code = isset($content['field_slate_embed_code']) ? htmlspecialchars_decode($content['field_slate_embed_code'][0]['#markup']) : htmlspecialchars_decode($slate_embed_code_default); // required field
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <!--<div id="form_f0806b3c-5c17-4a98-8e13-34e36cb81661">Loading...</div>-->
  <script>
    ///*<![CDATA[*/
    //var script = document.createElement('script');
//
    //script.async = 1;
    //script.src = 'https://choose.creighton.edu/register/?id=f0806b3c-5c17-4a98-8e13-34e36cb81661&output=embed&div=form_f0806b3c-5c17-4a98-8e13-34e36cb81661'
    //  + ((location.search.length > 1) ? '&'
    //  + location.search.substring(1) : '');
//
    //var s = document.getElementsByTagName('script')[0];
    //s.parentNode.insertBefore(script, s);
    ///*]]>*/
  </script>
  <?php print $slate_embed_code; ?>
</div>
