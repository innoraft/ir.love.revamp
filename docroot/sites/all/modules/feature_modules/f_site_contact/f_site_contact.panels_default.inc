<?php
/**
 * @file
 * f_site_contact.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function f_site_contact_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'ir_locations';
  $mini->category = '';
  $mini->admin_title = 'Ir locations';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Ir Locations',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'ir-location-wrapper',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'location_header' => NULL,
      'jaipur_location' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Our locations';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Location Header',
      'title' => '',
      'body' => '<p>Our Locations</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['center'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Kolkata Map',
      'title' => '',
      'body' => '<iframe frameborder="0" scrolling="no" marginheight="0" marginwidth="0" src="https://maps.google.co.in/maps?f=q&amp;source=s_q&amp;hl=en&amp;geocode=&amp;q=Innoraft+Solutions+Private+Limited,+1,+British+India+Street,+Chowringhee+North,+Kolkata,+West+Bengal+700069&amp;aq=0&amp;oq=Innoraft+Solutions,+1+British+India+Street+Kolkata+-+700069&amp;sll=22.568188,88.350699&amp;sspn=0.011849,0.019741&amp;t=m&amp;ie=UTF8&amp;hq=Innoraft+Solutions+Private+Limited,&amp;hnear=1,+Abdul+Hamid+St,+Chowringhee+North,+Bow+Barracks,+Kolkata,+West+Bengal+700069&amp;ll=22.568168,88.35072&amp;spn=0.01387,0.018239&amp;z=15&amp;iwloc=A&amp;output=embed"></iframe><br /><small><a href="https://maps.google.co.in/maps?f=q&amp;source=embed&amp;hl=en&amp;geocode=&amp;q=Innoraft+Solutions+Private+Limited,+1,+British+India+Street,+Chowringhee+North,+Kolkata,+West+Bengal+700069&amp;aq=0&amp;oq=Innoraft+Solutions,+1+British+India+Street+Kolkata+-+700069&amp;sll=22.568188,88.350699&amp;sspn=0.011849,0.019741&amp;t=m&amp;ie=UTF8&amp;hq=Innoraft+Solutions+Private+Limited,&amp;hnear=1,+Abdul+Hamid+St,+Chowringhee+North,+Bow+Barracks,+Kolkata,+West+Bengal+700069&amp;ll=22.568168,88.35072&amp;spn=0.01387,0.018239&amp;z=15&amp;iwloc=A" target="_blank">Get directions here.</a></small>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ir-location ir-map',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['center'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Kolkata Address',
      'title' => '',
      'body' => '<div class="ir-address-1">Innoraft Solutions
1, British India Street
Room 711, 7th Floor
Kolkata - 700069
West Bengal, India
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ir-location ir-addesss',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['center'][2] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jaipur Map',
      'title' => '',
      'body' => '<iframe frameborder="0" scrolling="no" marginheight="0" marginwidth="0" src="https://maps.google.co.in/maps?f=q&amp;source=s_q&amp;hl=en&amp;geocode=&amp;q=Chitrakoot+Scheme,+Rajasthan+302021&amp;aq=0&amp;oq=ChitrJaipur,+Rajasthan+302021&amp;sll=26.922476,75.805362&amp;sspn=0.022882,0.039482&amp;t=m&amp;ie=UTF8&amp;hq=&amp;hnear=Chitrakoot+Scheme,+Jaipur,+Rajasthan&amp;ll=26.902553,75.735712&amp;spn=0.02679,0.036478&amp;z=14&amp;iwloc=A&amp;output=embed"></iframe><br /><small><a href="https://maps.google.co.in/maps?f=q&amp;source=embed&amp;hl=en&amp;geocode=&amp;q=Chitrakoot+Scheme,+Rajasthan+302021&amp;aq=0&amp;oq=ChitrJaipur,+Rajasthan+302021&amp;sll=26.922476,75.805362&amp;sspn=0.022882,0.039482&amp;t=m&amp;ie=UTF8&amp;hq=&amp;hnear=Chitrakoot+Scheme,+Jaipur,+Rajasthan&amp;ll=26.902553,75.735712&amp;spn=0.02679,0.036478&amp;z=14&amp;iwloc=A" target="_blank">Get directions here.</a></small>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ir-location ir-map',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['center'][3] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jaipur Address',
      'title' => '',
      'body' => '<div class="ir-address-2">3/283, Chitrakoot Yojna 
Near Pratap Stadium 
Jaipur, 302021</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ir-location ir-address',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['center'][4] = 'new-5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2';
  $mini->display = $display;
  $export['ir_locations'] = $mini;

  return $export;
}
