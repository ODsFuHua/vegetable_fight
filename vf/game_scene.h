#include "scene.h"
#include <iostream>
#include "scene_manager.h"

extern SceneManager scene_manager;

class GameScene:public Scene
{
public:
    GameScene() = default;
    ~GameScene() = default;

    virtual void on_enter()
    {
        std::cout<<"进入游戏场景"<<std::endl;
    }
    virtual void on_update(int delta) 
    {
        std::cout<<"更新游戏场景"<<std::endl;
    }
    virtual void on_draw() 
    {
        outtextxy(10,10,_T("22222"));
    }
    virtual void on_input(const ExMessage& msg) 
    {
        if(msg.message == WM_KEYDOWN)
        {
            scene_manager.switch_to(SceneManager::SceneType::Menu);
        }
    }

    virtual void on_exit() 
    {
        std::cout<<"退出游戏场景"<<std::endl;
    }

    private:
};