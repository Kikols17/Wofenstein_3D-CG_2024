#pragma once
#ifndef CUSTOMROOM_H
#define CUSTOMROOM_H

#include "customGameObject.h"

#include "ofMain.h"

class customRoom : public customGameObject {
    
    public:
        using customGameObject::customGameObject;
        
        void update();

        void draw2D();
        void draw3D();
    
};



#endif