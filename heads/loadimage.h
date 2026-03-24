#pragma once
#include <graphics.h>
#include <Atlas.h>
#include <tools.h>
#pragma comment(lib,"Winmm.lib")

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
	loadimage(&img_gravestone_right, _T("art_resource/gravestone.png"));
	flip_image(&img_gravestone_right, &img_gravestone_left);
	loadimage(&img_selector_tip, _T("art_resource/selector_tip.png"));
	loadimage(&img_selector_background, _T("art_resource/selector_background.png"));
	loadimage(&img_1P_selector_botton_up_right, _T("art_resource/1P_selector_botton_up.png"));
	flip_image(&img_1P_selector_botton_up_right, &img_1P_selector_botton_up_left);
	loadimage(&img_1P_selector_botton_down_right, _T("art_resource/1P_selector_botton_down.png"));
	flip_image(&img_1P_selector_botton_down_right, &img_1P_selector_botton_down_left);
	loadimage(&img_2P_selector_botton_up_right, _T("art_resource/2P_selector_botton_up.png"));
	flip_image(&img_2P_selector_botton_up_right, &img_2P_selector_botton_up_left);
	loadimage(&img_2P_selector_botton_down_right, _T("art_resource/2P_selector_botton_down.png"));
	flip_image(&img_2P_selector_botton_down_right, &img_2P_selector_botton_down_left);
	loadimage(&img_peashooter_selector_background_right, _T("art_resource/peashooter_selector_background.png"));
	flip_image(&img_peashooter_selector_background_right, &img_peashooter_selector_background_left);
	loadimage(&img_sunflower_selector_background_right, _T("art_resource/sunflower_selector_background.png"));
	flip_image(&img_sunflower_selector_background_right, &img_sunflower_selector_background_left);

	loadimage(&img_sky, _T("art_resource/sky.png"));
	loadimage(&img_hills, _T("art_resource/hills.png"));
	loadimage(&img_platform_large, _T("art_resource/platform_large.png"));
	loadimage(&img_platform_small, _T("art_resource/platform_small.png"));
	loadimage(&img_1P_cursor, _T("art_resource/1P_cursor.png"));
	loadimage(&img_2P_cursor, _T("art_resource/2P_cursor.png"));

	atlas_peashooter_stand_right.load_from_file(_T("art_resource/peashooter_stand_%d.png"), 9);
	flip_atlas(atlas_peashooter_stand_right, atlas_peashooter_stand_left);
	atlas_peashooter_run_right.load_from_file(_T("art_resource/peashooter_run_%d.png"), 5);
	flip_atlas(atlas_peashooter_run_right, atlas_peashooter_run_left);
	atlas_peashooter_ex_right.load_from_file(_T("art_resource/peashooter_ex_%d.png"), 3);
	flip_atlas(atlas_peashooter_ex_right, atlas_peashooter_ex_left);
	atlas_peashooter_die_right.load_from_file(_T("art_resource/peashooter_die_%d.png"), 4);
	flip_atlas(atlas_peashooter_die_right, atlas_peashooter_die_left);

	atlas_sunflower_stand_right.load_from_file(_T("art_resource/sunflower_stand_%d.png"), 8);
	flip_atlas(atlas_sunflower_stand_right, atlas_sunflower_stand_left);
	atlas_sunflower_run_right.load_from_file(_T("art_resource/sunflower_run_%d.png"), 5);
	flip_atlas(atlas_sunflower_run_right, atlas_sunflower_run_left);
	atlas_sunflower_ex_right.load_from_file(_T("art_resource/sunflower_ex_%d.png"), 9);
	flip_atlas(atlas_sunflower_ex_right, atlas_sunflower_ex_left);
	atlas_sunflower_die_right.load_from_file(_T("art_resource/sunflower_die_%d.png"), 2);
	flip_atlas(atlas_sunflower_die_right, atlas_sunflower_die_left);

	loadimage(&img_pea, _T("art_resource/pea.png"));
	atlas_pea_break.load_from_file(_T("art_resource/pea_break_%d.png"), 3);
	atlas_sun.load_from_file(_T("art_resource/sun_%d.png"), 5);
	atlas_sun_explode.load_from_file(_T("art_resource/sun_explode_%d.png"), 5);
	atlas_sun_ex.load_from_file(_T("art_resource/sun_ex_%d.png"), 5);
	atlas_sun_ex_explode.load_from_file(_T("art_resource/sun_ex_explode_%d.png"), 5);
	atlas_sun_text.load_from_file(_T("art_resource/sun_text_%d.png"), 6);

	atlas_run_effect.load_from_file(_T("art_resource/run_effect_%d.png"), 4);
	atlas_jump_effect.load_from_file(_T("art_resource/jump_effect_%d.png"), 5);
	atlas_land_effect.load_from_file(_T("art_resource/land_effect_%d.png"), 2);

	loadimage(&img_1P_win, _T("art_resource/1P_win.png"));
	loadimage(&img_2P_win, _T("art_resource/2P_win.png"));
	loadimage(&img_win_background, _T("art_resource/win_background.png"));

	loadimage(&img_peashooter_avatar, _T("art_resource/peashooter_avatar.png"));
	loadimage(&img_sunflower_avatar, _T("art_resource/sunflower_avatar.png"));

	mciSendString(_T("art_resource/bgm_game.mp3 alias bgm_game"), NULL, 0, NULL);
	mciSendString(_T("art_resource/bgm_menu.mp3 alias bgm_menu"), NULL, 0, NULL);
	mciSendString(_T("art_resource/pea_break_1.mp3 alias pea_break_1"), NULL, 0, NULL);
	mciSendString(_T("art_resource/pea_break_2.mp3 alias pea_break_2"), NULL, 0, NULL);
	mciSendString(_T("art_resource/pea_break_3.mp3 alias pea_break_3"), NULL, 0, NULL);
	mciSendString(_T("art_resource/pea_shoot_1.mp3 alias pea_shoot_1"), NULL, 0, NULL);
	mciSendString(_T("art_resource/pea_shoot_2.mp3 alias pea_shoot_2"), NULL, 0, NULL);
	mciSendString(_T("art_resource/pea_shoot_ex.mp3 alias pea_shoot_ex"), NULL, 0, NULL);
	mciSendString(_T("art_resource/sun_explode.mp3 alias sun_explode_2"), NULL, 0, NULL);
	mciSendString(_T("art_resource/sun_explode_ex.mp3 alias sun_explode_ex"), NULL, 0, NULL);
	mciSendString(_T("art_resource/sun_text.mp3 alias sun_text"), NULL, 0, NULL);
	mciSendString(_T("art_resource/ui_confirm.wav alias ui_confirm"), NULL, 0, NULL);
	mciSendString(_T("art_resource/ui_switch.wav alias ui_switch"), NULL, 0, NULL);
	mciSendString(_T("art_resource/ui_win.wav alias ui_win"), NULL, 0, NULL);

}