#pragma once
#ifndef CUSTOMROOM_H
#define CUSTOMROOM_H

#include "customGameObject.h"

#include "ofMain.h"

class customRoom : public customGameObject {
    
    public:
        using customGameObject::customGameObject;
        
        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};



#endif