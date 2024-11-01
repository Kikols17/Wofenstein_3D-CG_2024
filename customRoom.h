#pragma once

#include "customGameObject.h"

#include "ofMain.h"

class customRoom : public customGameObject {
    
    public:
        customRoom(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale);
        
        void update();

        void draw2D();
        void draw3D();
    
};