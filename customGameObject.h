#pragma once

#include "ofMain.h"

class customGameObject {

    public:
        customGameObject(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale);
        
        void update();

        void draw2D();
        void draw3D();


        ofVec3f position;
        ofVec3f rotation;
        ofVec3f scale;
        
};