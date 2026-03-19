#pragma once
#include <graphics.h>
#include <Atlas.h>
#include <tools.h>

IMAGE img_menu_background;
IMAGE img_vs;
IMAGE img_1P;
IMAGE img_2P;
IMAGE img_1P_control_desc;
IMAGE img_2P_control_desc;
IMAGE img_gravestone_left;
IMAGE img_gravestone_right;
IMAGE img_selector_tip;
IMAGE img_selector_background;
IMAGE img_1P_selector_botton_up_left;
IMAGE img_1P_selector_botton_up_right;
IMAGE img_1P_selector_botton_down_left;
IMAGE img_1P_selector_botton_down_right;
IMAGE img_2P_selector_botton_up_left;
IMAGE img_2P_selector_botton_up_right;
IMAGE img_2P_selector_botton_down_left;
IMAGE img_2P_selector_botton_down_right;
IMAGE img_peashooter_selector_background_left;
IMAGE img_peashooter_selector_background_right;
IMAGE img_sunflower_selector_background_left;
IMAGE img_sunflower_selector_background_right;

IMAGE img_sky;
IMAGE img_hills;
IMAGE img_platform_large;
IMAGE img_platform_small;

IMAGE img_1P_cursor;
IMAGE img_2P_cursor;

Atlas atlas_peashooter_stand_left;
Atlas atlas_peashooter_stand_right;
Atlas atlas_peashooter_run_left;
Atlas atlas_peashooter_run_right;
Atlas atlas_peashooter_ex_left;
Atlas atlas_peashooter_ex_right;
Atlas atlas_peashooter_die_left;
Atlas atlas_peashooter_die_right;

Atlas atlas_sunflower_stand_left;
Atlas atlas_sunflower_stand_right;
Atlas atlas_sunflower_run_left;
Atlas atlas_sunflower_run_right;
Atlas atlas_sunflower_ex_left;
Atlas atlas_sunflower_ex_right;
Atlas atlas_sunflower_die_left;
Atlas atlas_sunflower_die_right;

IMAGE img_pea;
Atlas atlas_pea_break;
Atlas atlas_sun;
Atlas atlas_sun_explode;
Atlas atlas_sun_ex;
Atlas atlas_sun_ex_explode;
Atlas atlas_sun_text;

Atlas atlas_run_effect;
Atlas atlas_jump_effect;
Atlas atlas_land_effect;

IMAGE img_1P_win;
IMAGE img_2P_win;
IMAGE img_win_background;

IMAGE img_peashooter_avatar;
IMAGE img_sunflower_avatar;

inline void load_resource() {
	AddFontResourceEx(_T("art_resource/IPix.ttf"), FR_PRIVATE, NULL);

	loadimage(&img_menu_background, _T("art_resource/menu_background.png"));
	loadimage(&img_VS, _T("art_resource/VS.png"));
	loadimage(&img_1P, _T("art_resource/1P.png"));
	loadimage(&img_2P, _T("art_resource/2P.png"));
	loadimage(&img_gravestone_left, _T("art_resource/gravestone.png"));
	flip_image(&img_gravestone_right, &img_gravestone_left);
	loadimage(&img_selector_tip, _T("art_resource/selector_tip.png"));
	loadimage(&img_selector_background, _T("art_resource/selector_background.png"));
	loadimage(&img_1P_selector_botton_up_left, _T("art_resource/selector_botton_up.png"));
	
}