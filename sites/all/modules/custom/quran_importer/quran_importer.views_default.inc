<?php
/**
 * @file
 * quran_importer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function quran_importer_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'quran';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'quran';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'quran';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Please Select Sura';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'sura_name';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['path'] = 'quran';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'quran';
  $handler->display->display_options['menu']['name'] = 'features';
  $export['quran'] = $view;

  $view = new view();
  $view->name = 'quran_english';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'quran-english';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'The Holy Quran-القرآن الكريم';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '32';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_sura_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: MediaFront Player */
  $handler->display->display_options['header']['mediafront_player']['id'] = 'mediafront_player';
  $handler->display->display_options['header']['mediafront_player']['table'] = 'views';
  $handler->display->display_options['header']['mediafront_player']['field'] = 'mediafront_player';
  $handler->display->display_options['header']['mediafront_player']['mediafront_preset'] = 'quran_player';
  /* Field: Content: content_ar */
  $handler->display->display_options['fields']['field_content_ar']['id'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['table'] = 'field_data_field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['field'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['label'] = '';
  $handler->display->display_options['fields']['field_content_ar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_content_ar']['alter']['text'] = '<h2>[field_content_ar] </h2>';
  $handler->display->display_options['fields']['field_content_ar']['element_label_colon'] = FALSE;
  /* Field: Content: Content_en */
  $handler->display->display_options['fields']['field_content_en']['id'] = 'field_content_en';
  $handler->display->display_options['fields']['field_content_en']['table'] = 'field_data_field_content_en';
  $handler->display->display_options['fields']['field_content_en']['field'] = 'field_content_en';
  $handler->display->display_options['fields']['field_content_en']['label'] = '';
  $handler->display->display_options['fields']['field_content_en']['element_label_colon'] = FALSE;
  /* Field: Content: alafasy */
  $handler->display->display_options['fields']['field_alafasy']['id'] = 'field_alafasy';
  $handler->display->display_options['fields']['field_alafasy']['table'] = 'field_data_field_alafasy';
  $handler->display->display_options['fields']['field_alafasy']['field'] = 'field_alafasy';
  $handler->display->display_options['fields']['field_alafasy']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_alafasy']['type'] = 'mediafront_player';
  $handler->display->display_options['fields']['field_alafasy']['settings'] = array(
    'preset' => 'quran_player',
  );
  /* Field: Content: Ayah_chapter_number */
  $handler->display->display_options['fields']['field_ayah_chapter_number']['id'] = 'field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['table'] = 'field_data_field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['field'] = 'field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ayah_chapter_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Ayahid */
  $handler->display->display_options['fields']['field_ayahid']['id'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['table'] = 'field_data_field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['field'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ayahid']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: content_en_tr */
  $handler->display->display_options['fields']['field_content_en_tr']['id'] = 'field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['table'] = 'field_data_field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['field'] = 'field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['exclude'] = TRUE;
  /* Field: Content: sura name */
  $handler->display->display_options['fields']['field_sura_name']['id'] = 'field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['table'] = 'field_data_field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['field'] = 'field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['label'] = '';
  $handler->display->display_options['fields']['field_sura_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sura_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sura_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: content_en_tr */
  $handler->display->display_options['fields']['field_content_en_tr_1']['id'] = 'field_content_en_tr_1';
  $handler->display->display_options['fields']['field_content_en_tr_1']['table'] = 'field_data_field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr_1']['field'] = 'field_content_en_tr';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'quran' => 'quran',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Please Select Sura';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['group_info']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['group_info']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'sura_name';
  /* Filter criterion: Content: Ayahid (field_ayahid) */
  $handler->display->display_options['filters']['field_ayahid_value']['id'] = 'field_ayahid_value';
  $handler->display->display_options['filters']['field_ayahid_value']['table'] = 'field_data_field_ayahid';
  $handler->display->display_options['filters']['field_ayahid_value']['field'] = 'field_ayahid_value';
  $handler->display->display_options['filters']['field_ayahid_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ayahid_value']['expose']['operator_id'] = 'field_ayahid_value_op';
  $handler->display->display_options['filters']['field_ayahid_value']['expose']['label'] = 'Ayahid (field_ayahid)';
  $handler->display->display_options['filters']['field_ayahid_value']['expose']['operator'] = 'field_ayahid_value_op';
  $handler->display->display_options['filters']['field_ayahid_value']['expose']['identifier'] = 'field_ayahid_value';
  $handler->display->display_options['filters']['field_ayahid_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_ayahid_value']['group_info']['label'] = 'Select Juz form the list';
  $handler->display->display_options['filters']['field_ayahid_value']['group_info']['identifier'] = 'field_ayahid_value';
  $handler->display->display_options['filters']['field_ayahid_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Juz 8',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '900',
        'max' => '1041',
      ),
    ),
    2 => array(
      'title' => 'Juz 9',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '1042',
        'max' => '1200',
      ),
    ),
    3 => array(
      'title' => 'Juz 22',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '3564',
        'max' => '3732',
      ),
    ),
    4 => array(
      'title' => 'Juz 7',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '751',
        'max' => '899',
      ),
    ),
    5 => array(
      'title' => 'Juz 6',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '642',
        'max' => '750',
      ),
    ),
    6 => array(
      'title' => 'Juz 4',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '386',
        'max' => '516',
      ),
    ),
    7 => array(
      'title' => 'Juz 5',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '517',
        'max' => '641',
      ),
    ),
    8 => array(
      'title' => 'Juz 23',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '3733',
        'max' => '4089',
      ),
    ),
    9 => array(
      'title' => 'Juz 24',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '4090',
        'max' => '4264',
      ),
    ),
    10 => array(
      'title' => 'Juz 29',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '5242',
        'max' => '5672',
      ),
    ),
    11 => array(
      'title' => 'Juz 30',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '5673',
        'max' => '6236',
      ),
    ),
    12 => array(
      'title' => 'Juz 28',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '4105',
        'max' => '5241',
      ),
    ),
    13 => array(
      'title' => 'Juz 27',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '4706',
        'max' => '4104',
      ),
    ),
    14 => array(
      'title' => 'Juz 25',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '4265',
        'max' => '4510',
      ),
    ),
    15 => array(
      'title' => 'Juz 26',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '4511',
        'max' => '4705',
      ),
    ),
    16 => array(
      'title' => 'Juz 3',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '253',
        'max' => '385',
      ),
    ),
    17 => array(
      'title' => 'Juz 2',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '142',
        'max' => '252',
      ),
    ),
    18 => array(
      'title' => 'Juz 10',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '1201',
        'max' => '1327',
      ),
    ),
    19 => array(
      'title' => 'Juz 12',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '1479',
        'max' => '1648',
      ),
    ),
    20 => array(
      'title' => 'Juz 13',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '1649',
        'max' => '1802',
      ),
    ),
    21 => array(
      'title' => 'Juz 1',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '1',
        'max' => '141',
      ),
    ),
    22 => array(
      'title' => 'Juz 15',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '2030',
        'max' => '2214',
      ),
    ),
    23 => array(
      'title' => 'Juz 14',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '1803',
        'max' => '2029',
      ),
    ),
    24 => array(
      'title' => 'Juz 13',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '1649',
        'max' => '1802',
      ),
    ),
    25 => array(
      'title' => 'Juz 12',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '1479',
        'max' => '1648',
      ),
    ),
    26 => array(
      'title' => 'Juz 16',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '2215',
        'max' => '2483',
      ),
    ),
    27 => array(
      'title' => 'Juz 17',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '2484',
        'max' => '2673',
      ),
    ),
    28 => array(
      'title' => 'Juz 21',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '3386',
        'max' => '3563',
      ),
    ),
    29 => array(
      'title' => 'Juz 20',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '3215',
        'max' => '3385',
      ),
    ),
    30 => array(
      'title' => 'Juz 19',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '2858',
        'max' => '3214',
      ),
    ),
    31 => array(
      'title' => 'Juz 18',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '2674',
        'max' => '2857',
      ),
    ),
    32 => array(
      'title' => 'Juz 11',
      'operator' => 'between',
      'value' => array(
        'value' => '',
        'min' => '1328',
        'max' => '1478',
      ),
    ),
  );
  /* Filter criterion: Content: content_en_tr (field_content_en_tr) */
  $handler->display->display_options['filters']['field_content_en_tr_value']['id'] = 'field_content_en_tr_value';
  $handler->display->display_options['filters']['field_content_en_tr_value']['table'] = 'field_data_field_content_en_tr';
  $handler->display->display_options['filters']['field_content_en_tr_value']['field'] = 'field_content_en_tr_value';
  $handler->display->display_options['filters']['field_content_en_tr_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_content_en_tr_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_content_en_tr_value']['expose']['operator_id'] = 'field_content_en_tr_value_op';
  $handler->display->display_options['filters']['field_content_en_tr_value']['expose']['label'] = 'Search Ayah in Latin(Sound)';
  $handler->display->display_options['filters']['field_content_en_tr_value']['expose']['description'] = 'For example bismi';
  $handler->display->display_options['filters']['field_content_en_tr_value']['expose']['operator'] = 'field_content_en_tr_value_op';
  $handler->display->display_options['filters']['field_content_en_tr_value']['expose']['identifier'] = 'field_content_en_tr_value';
  $handler->display->display_options['filters']['field_content_en_tr_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Ayah_chapter_number (field_ayah_chapter_number) */
  $handler->display->display_options['filters']['field_ayah_chapter_number_value']['id'] = 'field_ayah_chapter_number_value';
  $handler->display->display_options['filters']['field_ayah_chapter_number_value']['table'] = 'field_data_field_ayah_chapter_number';
  $handler->display->display_options['filters']['field_ayah_chapter_number_value']['field'] = 'field_ayah_chapter_number_value';
  $handler->display->display_options['filters']['field_ayah_chapter_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ayah_chapter_number_value']['expose']['operator_id'] = 'field_ayah_chapter_number_value_op';
  $handler->display->display_options['filters']['field_ayah_chapter_number_value']['expose']['label'] = 'Search Ayah Number';
  $handler->display->display_options['filters']['field_ayah_chapter_number_value']['expose']['operator'] = 'field_ayah_chapter_number_value_op';
  $handler->display->display_options['filters']['field_ayah_chapter_number_value']['expose']['identifier'] = 'field_ayah_chapter_number_value';
  $handler->display->display_options['filters']['field_ayah_chapter_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Yusuf Ali */
  $handler = $view->new_display('page', 'Yusuf Ali', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_sura_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_content_en' => 'field_content_en',
    'field_content_ar' => 'field_content_ar',
    'field_alafasy' => 'field_alafasy',
    'field_ayah_chapter_number' => 'field_ayah_chapter_number',
    'field_ayahid' => 'field_ayahid',
    'field_sura_name' => 'field_sura_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_content_en' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_content_ar' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_alafasy' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ayah_chapter_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ayahid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sura_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Content_en */
  $handler->display->display_options['fields']['field_content_en']['id'] = 'field_content_en';
  $handler->display->display_options['fields']['field_content_en']['table'] = 'field_data_field_content_en';
  $handler->display->display_options['fields']['field_content_en']['field'] = 'field_content_en';
  $handler->display->display_options['fields']['field_content_en']['label'] = '';
  $handler->display->display_options['fields']['field_content_en']['element_label_colon'] = FALSE;
  /* Field: Content: content_ar */
  $handler->display->display_options['fields']['field_content_ar']['id'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['table'] = 'field_data_field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['field'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['label'] = '';
  $handler->display->display_options['fields']['field_content_ar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_content_ar']['alter']['text'] = '<h2>[field_content_ar] </h2>';
  $handler->display->display_options['fields']['field_content_ar']['element_label_colon'] = FALSE;
  /* Field: Content: alafasy */
  $handler->display->display_options['fields']['field_alafasy']['id'] = 'field_alafasy';
  $handler->display->display_options['fields']['field_alafasy']['table'] = 'field_data_field_alafasy';
  $handler->display->display_options['fields']['field_alafasy']['field'] = 'field_alafasy';
  $handler->display->display_options['fields']['field_alafasy']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_alafasy']['type'] = 'mediafront_player';
  $handler->display->display_options['fields']['field_alafasy']['settings'] = array(
    'preset' => 'quran_player',
  );
  /* Field: Content: Ayah_chapter_number */
  $handler->display->display_options['fields']['field_ayah_chapter_number']['id'] = 'field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['table'] = 'field_data_field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['field'] = 'field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ayah_chapter_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Ayahid */
  $handler->display->display_options['fields']['field_ayahid']['id'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['table'] = 'field_data_field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['field'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ayahid']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: sura name */
  $handler->display->display_options['fields']['field_sura_name']['id'] = 'field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['table'] = 'field_data_field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['field'] = 'field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['label'] = '';
  $handler->display->display_options['fields']['field_sura_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sura_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sura_name']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['path'] = 'quran-english';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'quran_english';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Arabic-only */
  $handler = $view->new_display('page', 'Arabic-only', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_sura_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_content_ar' => 'field_content_ar',
    'field_alafasy' => 'field_alafasy',
    'field_ayah_chapter_number' => 'field_ayah_chapter_number',
    'field_ayahid' => 'field_ayahid',
    'field_content_en_tr' => 'field_content_en_tr',
    'field_sura_name' => 'field_sura_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_content_ar' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_alafasy' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ayah_chapter_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ayahid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_content_en_tr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sura_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: content_ar */
  $handler->display->display_options['fields']['field_content_ar']['id'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['table'] = 'field_data_field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['field'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['label'] = '';
  $handler->display->display_options['fields']['field_content_ar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_content_ar']['alter']['text'] = '<h2>[field_content_ar] </h2>';
  $handler->display->display_options['fields']['field_content_ar']['element_label_colon'] = FALSE;
  /* Field: Content: alafasy */
  $handler->display->display_options['fields']['field_alafasy']['id'] = 'field_alafasy';
  $handler->display->display_options['fields']['field_alafasy']['table'] = 'field_data_field_alafasy';
  $handler->display->display_options['fields']['field_alafasy']['field'] = 'field_alafasy';
  $handler->display->display_options['fields']['field_alafasy']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_alafasy']['type'] = 'mediafront_player';
  $handler->display->display_options['fields']['field_alafasy']['settings'] = array(
    'preset' => 'quran_player',
  );
  /* Field: Content: Ayah_chapter_number */
  $handler->display->display_options['fields']['field_ayah_chapter_number']['id'] = 'field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['table'] = 'field_data_field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['field'] = 'field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ayah_chapter_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Ayahid */
  $handler->display->display_options['fields']['field_ayahid']['id'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['table'] = 'field_data_field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['field'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ayahid']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: content_en_tr */
  $handler->display->display_options['fields']['field_content_en_tr']['id'] = 'field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['table'] = 'field_data_field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['field'] = 'field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['exclude'] = TRUE;
  /* Field: Content: sura name */
  $handler->display->display_options['fields']['field_sura_name']['id'] = 'field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['table'] = 'field_data_field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['field'] = 'field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['label'] = '';
  $handler->display->display_options['fields']['field_sura_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sura_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sura_name']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['path'] = 'Arabic';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Quran-Arabic';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: English Saxeeh */
  $handler = $view->new_display('page', 'English Saxeeh', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_content_ar' => 'field_content_ar',
    'field_alafasy' => 'field_alafasy',
    'field_ayah_chapter_number' => 'field_ayah_chapter_number',
    'field_ayahid' => 'field_ayahid',
    'field_content_en_tr' => 'field_content_en_tr',
    'field_content_en_si' => 'field_content_en_si',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_content_ar' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_alafasy' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ayah_chapter_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ayahid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_content_en_tr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_content_en_si' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: content_en_si */
  $handler->display->display_options['fields']['field_content_en_si']['id'] = 'field_content_en_si';
  $handler->display->display_options['fields']['field_content_en_si']['table'] = 'field_data_field_content_en_si';
  $handler->display->display_options['fields']['field_content_en_si']['field'] = 'field_content_en_si';
  $handler->display->display_options['fields']['field_content_en_si']['label'] = '';
  $handler->display->display_options['fields']['field_content_en_si']['element_label_colon'] = FALSE;
  /* Field: Content: content_ar */
  $handler->display->display_options['fields']['field_content_ar']['id'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['table'] = 'field_data_field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['field'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['label'] = '';
  $handler->display->display_options['fields']['field_content_ar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_content_ar']['alter']['text'] = '<h2>[field_content_ar] </h2>';
  $handler->display->display_options['fields']['field_content_ar']['element_label_colon'] = FALSE;
  /* Field: Content: alafasy */
  $handler->display->display_options['fields']['field_alafasy']['id'] = 'field_alafasy';
  $handler->display->display_options['fields']['field_alafasy']['table'] = 'field_data_field_alafasy';
  $handler->display->display_options['fields']['field_alafasy']['field'] = 'field_alafasy';
  $handler->display->display_options['fields']['field_alafasy']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_alafasy']['type'] = 'mediafront_player';
  $handler->display->display_options['fields']['field_alafasy']['settings'] = array(
    'preset' => 'quran_player',
  );
  /* Field: Content: Ayah_chapter_number */
  $handler->display->display_options['fields']['field_ayah_chapter_number']['id'] = 'field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['table'] = 'field_data_field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['field'] = 'field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ayah_chapter_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Ayahid */
  $handler->display->display_options['fields']['field_ayahid']['id'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['table'] = 'field_data_field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['field'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ayahid']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: content_en_tr */
  $handler->display->display_options['fields']['field_content_en_tr']['id'] = 'field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['table'] = 'field_data_field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['field'] = 'field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['exclude'] = TRUE;
  $handler->display->display_options['path'] = 'Quran-Saxiix';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Quran-Saxiih';
  $handler->display->display_options['menu']['description'] = 'Saxiih English';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: English Literal */
  $handler = $view->new_display('page', 'English Literal', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_sura_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_content_en_tr_1' => 'field_content_en_tr_1',
    'field_content_ar' => 'field_content_ar',
    'field_alafasy' => 'field_alafasy',
    'field_ayah_chapter_number' => 'field_ayah_chapter_number',
    'field_ayahid' => 'field_ayahid',
    'field_content_en_tr' => 'field_content_en_tr',
    'field_sura_name' => 'field_sura_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_content_en_tr_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_content_ar' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_alafasy' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ayah_chapter_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ayahid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_content_en_tr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sura_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: content_en_tr */
  $handler->display->display_options['fields']['field_content_en_tr_1']['id'] = 'field_content_en_tr_1';
  $handler->display->display_options['fields']['field_content_en_tr_1']['table'] = 'field_data_field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr_1']['field'] = 'field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr_1']['label'] = '';
  $handler->display->display_options['fields']['field_content_en_tr_1']['element_label_colon'] = FALSE;
  /* Field: Content: content_ar */
  $handler->display->display_options['fields']['field_content_ar']['id'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['table'] = 'field_data_field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['field'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['label'] = '';
  $handler->display->display_options['fields']['field_content_ar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_content_ar']['alter']['text'] = '<h2>[field_content_ar] </h2>';
  $handler->display->display_options['fields']['field_content_ar']['element_label_colon'] = FALSE;
  /* Field: Content: alafasy */
  $handler->display->display_options['fields']['field_alafasy']['id'] = 'field_alafasy';
  $handler->display->display_options['fields']['field_alafasy']['table'] = 'field_data_field_alafasy';
  $handler->display->display_options['fields']['field_alafasy']['field'] = 'field_alafasy';
  $handler->display->display_options['fields']['field_alafasy']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_alafasy']['type'] = 'mediafront_player';
  $handler->display->display_options['fields']['field_alafasy']['settings'] = array(
    'preset' => 'quran_player',
  );
  /* Field: Content: Ayah_chapter_number */
  $handler->display->display_options['fields']['field_ayah_chapter_number']['id'] = 'field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['table'] = 'field_data_field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['field'] = 'field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ayah_chapter_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Ayahid */
  $handler->display->display_options['fields']['field_ayahid']['id'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['table'] = 'field_data_field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['field'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ayahid']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: content_en_tr */
  $handler->display->display_options['fields']['field_content_en_tr']['id'] = 'field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['table'] = 'field_data_field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['field'] = 'field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['exclude'] = TRUE;
  /* Field: Content: sura name */
  $handler->display->display_options['fields']['field_sura_name']['id'] = 'field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['table'] = 'field_data_field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['field'] = 'field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['label'] = '';
  $handler->display->display_options['fields']['field_sura_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sura_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sura_name']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['path'] = 'English-literal';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'quran-in-english';
  $handler->display->display_options['menu']['description'] = 'Quran in Literal English';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Recitaion Sudays */
  $handler = $view->new_display('page', 'Recitaion Sudays', 'page_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_sura_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_content_ar' => 'field_content_ar',
    'field_ayah_chapter_number' => 'field_ayah_chapter_number',
    'field_ayahid' => 'field_ayahid',
    'field_sura_name' => 'field_sura_name',
    'field_assudais' => 'field_assudais',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_content_ar' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ayah_chapter_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ayahid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sura_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_assudais' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: content_en_tr */
  $handler->display->display_options['fields']['field_content_en_tr']['id'] = 'field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['table'] = 'field_data_field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['field'] = 'field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['label'] = '';
  $handler->display->display_options['fields']['field_content_en_tr']['element_label_colon'] = FALSE;
  /* Field: Content: content_ar */
  $handler->display->display_options['fields']['field_content_ar']['id'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['table'] = 'field_data_field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['field'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['label'] = '';
  $handler->display->display_options['fields']['field_content_ar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_content_ar']['alter']['text'] = '<h2>[field_content_ar] </h2>';
  $handler->display->display_options['fields']['field_content_ar']['element_label_colon'] = FALSE;
  /* Field: Content: Ayah_chapter_number */
  $handler->display->display_options['fields']['field_ayah_chapter_number']['id'] = 'field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['table'] = 'field_data_field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['field'] = 'field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ayah_chapter_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Ayahid */
  $handler->display->display_options['fields']['field_ayahid']['id'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['table'] = 'field_data_field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['field'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ayahid']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: sura name */
  $handler->display->display_options['fields']['field_sura_name']['id'] = 'field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['table'] = 'field_data_field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['field'] = 'field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['label'] = '';
  $handler->display->display_options['fields']['field_sura_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sura_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sura_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: assudais */
  $handler->display->display_options['fields']['field_assudais']['id'] = 'field_assudais';
  $handler->display->display_options['fields']['field_assudais']['table'] = 'field_data_field_assudais';
  $handler->display->display_options['fields']['field_assudais']['field'] = 'field_assudais';
  $handler->display->display_options['fields']['field_assudais']['label'] = '';
  $handler->display->display_options['fields']['field_assudais']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_assudais']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_assudais']['type'] = 'mediafront_player';
  $handler->display->display_options['fields']['field_assudais']['settings'] = array(
    'preset' => 'quran_player',
  );
  $handler->display->display_options['path'] = 'sudays';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'quran-sudays';
  $handler->display->display_options['menu']['description'] = 'Quran in recitation by sudays';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Recitaion Almuqaily */
  $handler = $view->new_display('page', 'Recitaion Almuqaily', 'page_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_content_ar' => 'field_content_ar',
    'field_ayah_chapter_number' => 'field_ayah_chapter_number',
    'field_ayahid' => 'field_ayahid',
    'field_sura_name' => 'field_sura_name',
    'field_almuaiqly' => 'field_almuaiqly',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_content_ar' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ayah_chapter_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ayahid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sura_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_almuaiqly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: content_en_tr */
  $handler->display->display_options['fields']['field_content_en_tr']['id'] = 'field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['table'] = 'field_data_field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['field'] = 'field_content_en_tr';
  $handler->display->display_options['fields']['field_content_en_tr']['label'] = '';
  $handler->display->display_options['fields']['field_content_en_tr']['element_label_colon'] = FALSE;
  /* Field: Content: content_ar */
  $handler->display->display_options['fields']['field_content_ar']['id'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['table'] = 'field_data_field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['field'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['label'] = '';
  $handler->display->display_options['fields']['field_content_ar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_content_ar']['alter']['text'] = '<h2>[field_content_ar] </h2>';
  $handler->display->display_options['fields']['field_content_ar']['element_label_colon'] = FALSE;
  /* Field: Content: Ayah_chapter_number */
  $handler->display->display_options['fields']['field_ayah_chapter_number']['id'] = 'field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['table'] = 'field_data_field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['field'] = 'field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ayah_chapter_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Ayahid */
  $handler->display->display_options['fields']['field_ayahid']['id'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['table'] = 'field_data_field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['field'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ayahid']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: sura name */
  $handler->display->display_options['fields']['field_sura_name']['id'] = 'field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['table'] = 'field_data_field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['field'] = 'field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['label'] = '';
  $handler->display->display_options['fields']['field_sura_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sura_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sura_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: almuaiqly */
  $handler->display->display_options['fields']['field_almuaiqly']['id'] = 'field_almuaiqly';
  $handler->display->display_options['fields']['field_almuaiqly']['table'] = 'field_data_field_almuaiqly';
  $handler->display->display_options['fields']['field_almuaiqly']['field'] = 'field_almuaiqly';
  $handler->display->display_options['fields']['field_almuaiqly']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_almuaiqly']['type'] = 'mediafront_player';
  $handler->display->display_options['fields']['field_almuaiqly']['settings'] = array(
    'preset' => 'quran_player',
  );
  $handler->display->display_options['path'] = 'Almuqaily';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Almuqaily';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Arabic-only */
  $handler = $view->new_display('page', 'Arabic-only', 'page_6');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_sura_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Ayah_chapter_number */
  $handler->display->display_options['fields']['field_ayah_chapter_number']['id'] = 'field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['table'] = 'field_data_field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['field'] = 'field_ayah_chapter_number';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['label'] = '';
  $handler->display->display_options['fields']['field_ayah_chapter_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ayah_chapter_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: content_ar */
  $handler->display->display_options['fields']['field_content_ar']['id'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['table'] = 'field_data_field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['field'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['label'] = '';
  $handler->display->display_options['fields']['field_content_ar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_content_ar']['alter']['text'] = '<h2>[field_content_ar] </h2>';
  $handler->display->display_options['fields']['field_content_ar']['element_label_colon'] = FALSE;
  /* Field: Content: Ayahid */
  $handler->display->display_options['fields']['field_ayahid']['id'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['table'] = 'field_data_field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['field'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['label'] = '';
  $handler->display->display_options['fields']['field_ayahid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ayahid']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: sura name */
  $handler->display->display_options['fields']['field_sura_name']['id'] = 'field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['table'] = 'field_data_field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['field'] = 'field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['label'] = '';
  $handler->display->display_options['fields']['field_sura_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sura_name']['element_label_colon'] = FALSE;
  /* Field: Content: Content_en */
  $handler->display->display_options['fields']['field_content_en']['id'] = 'field_content_en';
  $handler->display->display_options['fields']['field_content_en']['table'] = 'field_data_field_content_en';
  $handler->display->display_options['fields']['field_content_en']['field'] = 'field_content_en';
  $handler->display->display_options['fields']['field_content_en']['label'] = '';
  $handler->display->display_options['fields']['field_content_en']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'quran' => 'quran',
  );
  $handler->display->display_options['path'] = 'random-ayah';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Quran-Arabic';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_sura_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_ayahid' => 'field_ayahid',
    'field_sura_name' => 'field_sura_name',
    'field_content_ar' => 'field_content_ar',
    'field_chapter_number' => 'field_chapter_number',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_ayahid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sura_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_content_ar' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_chapter_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Ayahid */
  $handler->display->display_options['fields']['field_ayahid']['id'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['table'] = 'field_data_field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['field'] = 'field_ayahid';
  $handler->display->display_options['fields']['field_ayahid']['label'] = 'Ayah Number';
  $handler->display->display_options['fields']['field_ayahid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ayahid']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: sura name */
  $handler->display->display_options['fields']['field_sura_name']['id'] = 'field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['table'] = 'field_data_field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['field'] = 'field_sura_name';
  $handler->display->display_options['fields']['field_sura_name']['label'] = '';
  $handler->display->display_options['fields']['field_sura_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sura_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sura_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: content_ar */
  $handler->display->display_options['fields']['field_content_ar']['id'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['table'] = 'field_data_field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['field'] = 'field_content_ar';
  $handler->display->display_options['fields']['field_content_ar']['label'] = '';
  $handler->display->display_options['fields']['field_content_ar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_content_ar']['alter']['text'] = '<h2>[field_content_ar] </h2>';
  $handler->display->display_options['fields']['field_content_ar']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_content_ar']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_content_ar']['element_label_colon'] = FALSE;
  /* Field: Content: chapter_number */
  $handler->display->display_options['fields']['field_chapter_number']['id'] = 'field_chapter_number';
  $handler->display->display_options['fields']['field_chapter_number']['table'] = 'field_data_field_chapter_number';
  $handler->display->display_options['fields']['field_chapter_number']['field'] = 'field_chapter_number';
  $handler->display->display_options['fields']['field_chapter_number']['label'] = 'Sura No';
  $handler->display->display_options['fields']['field_chapter_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chapter_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'quran' => 'quran',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'quran-random';
  $export['quran_english'] = $view;

  return $export;
}
