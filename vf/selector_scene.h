#ifndef _SELECTOR_SCENE_H_
#define _SELECTOR_SCENE_H_

#include "scene.h"
#include "scene_manager.h"

class SelectorScene:public Scene
{
public:
    SelectorScene() = default;
    ~SelectorScene() = default;

    virtual void on_enter()
    {
    }
    virtual void on_update()
    {
    }
    virtual void on_draw()
    {
    }
    virtual void on_input(const ExMessage& msg)
    {
    }

private:

};

#endif // _SELECTOR_SCENE_H_