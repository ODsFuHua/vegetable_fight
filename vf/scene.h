#ifndef _SCENE_H_
#define _SCENE_H_

#include <graphics.h>

class Scene
{
public:
    Scene() = default;
    ~Scene() = default;
//virtual void虚函数 在其他地方继承后可以自己再写函数功能
    virtual void on_enter() {}
    virtual void on_update() {}
    virtual void on_draw() {}
    virtual void on_input(const ExMessage& msg) {}
    virtual void on_exit() {}

private:

};


#endif