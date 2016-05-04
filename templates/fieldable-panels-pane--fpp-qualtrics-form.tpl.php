<?php
/**
 * @file
 * Template file for Fieldable Panels Panes widget used to embed Qualtrics web forms.
 * TODO - Create the appropriate rendering from the qualtrics survey link entered by the user.
 * Needs better rendering if presented in a page. May need to refer to the API if one exists
 */

//<iframe class="submission" src="https://blueq.co1.qualtrics.com/jfe/form/SV_039q8BoAdfX2Djv?readerName=Lindsey&amp;readerEmail=houseguestpoetryeditor@gmail.com&amp;readByDate=Fri Mar 18 2016" width="100%" height="1100px" frameborder="0"></iframe>
  $qualtrics_survey_default = 'https://blueq.co1.qualtrics.com/SE/?SID=SV_bDgOU9wRtJ7mWaN';
  $qualtrics_survey_link = isset($content['field_qualtrics_survey_link']) ? $content['field_qualtrics_survey_link'][0]['#markup'] : $qualtrics_survey_default; // required field
?>
<div class="<?php print $classes . ' qualtrics-survey-link'; ?>"<?php print $attributes; ?>>
  <iframe class="submission"
    src="<?php print $qualtrics_survey_link; ?>"
    width="100%"
    height="500px"
    frameborder="0">
  </iframe>
</div>
<?php //krumo($content); ?>