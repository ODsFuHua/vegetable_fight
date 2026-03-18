#ifndef _MENU_SCENE_H_
#define _MENU_SCENE_H_

#include "scene.h"


#include <iostream>
class MenuScene : public Scene //Menuscene类继承自scene基类
{
public:
    MenuScene() = default;
    ~MenuScene() = default;

    virtual void on_enter() 
    {
        std::cout << "进入主菜单"<< std:endl;
    }
    virtual void on_update() {}
    virtual void on_draw() {}
    virtual void on_input(const Exmessage& msg) {}
    virtual void on_exit() {}

private:

};

#endif