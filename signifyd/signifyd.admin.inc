<?php

function signifyd_admin_settings($form, &$form_state) {
  $form = array();
  $form['signifyd_api_key'] = array(
    '#type'          => 'textfield',
    '#title'         => t('API Key'),
    '#default_value' => variable_get('signifyd_api_key', ''),
    '#required'      => TRUE,
  );
  $form['signifyd_api_url'] = array(
    '#type'          => 'textfield',
    '#title'         => t('API URL'),
    '#default_value' => variable_get('signifyd_api_URL', 'https://api.signifyd.com/v2'),
    '#required'      => TRUE,
  );

  return system_settings_form($form);
}
