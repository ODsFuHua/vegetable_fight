#ifndef _MENU_SCENE_H_
#define _MENU_SCENE_H_
#include <tchar.h>
#include "scene.h"
#include "scene_manager.h"
#include <iostream>

extern SceneManager scene_manager;

class MenuScene:public Scene //Menuscene类继承自scene基类
{
public:
    MenuScene() = default;
    ~MenuScene() = default;

    virtual void on_enter()
    {
        std::cout<<"进入主菜单"<<std::endl;
    }
    virtual void on_update() 
    {
        std::cout<<"更新主菜单"<<std::endl;
    }
    virtual void on_draw() 
    {
        outtextxy(10,10,_T("11111"));
    }
    virtual void on_input(const ExMessage& msg) 
    {
        if(msg.message == WM_KEYDOWN)
        {
            scene_manager.switch_to(SceneManager::SceneType::Game);
        }
    }

    virtual void on_exit() 
    {
        std::cout<<"退出主菜单"<<std::endl;
    }

private:

};

#endif