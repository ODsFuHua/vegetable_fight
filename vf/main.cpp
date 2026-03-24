#include <stdio.h>
#include "scene.h"
#include "menu_scene.h"
#include "game_scene.h"
#include "selector_scene.h"
#include "scene_manager.h"


Scene* menu_scene = nullptr;
Scene* game_scene = nullptr;
Scene* selector_scene = nullptr;

SceneManager scene_manager;


int main()
{
ExMessage msg;
const int FPS = 60;

initgraph(1280, 720, EW_SHOWCONSOLE);

BeginBatchDraw();
menu_scene = new MenuScene();
game_scene = new GameScene();
selector_scene = new SelectorScene();
Scene* scene = new MenuScene();

scene_manager.set_current_scene(menu_scene);

scene->on_enter();

while(true)
{
    DWORD frame_start_time = GetTickCount();

    while (peekmessage(&msg))
    {
        scene_manager.on_input(msg);

    }

    static DWORD last_tick_time = GetTickCount();
    DWORD current_tick_time = GetTickCount();
    DWORD delta_tick = current_tick_time - last_tick_time;
    scene_manager.on_update(delta_tick);
    last_tick_time = current_tick_time;

    cleardevice();
    scene_manager.on_draw();
    FlushBatchDraw();

    DWORD frame_end_time = GetTickCount();
    DWORD frame_delta_time = frame_end_time - frame_start_time;
    if (frame_delta_time < 1000/FPS)
        Sleep(1000/ FPS - frame_delta_time);
}

EndBatchDraw();

return 0;
    
}