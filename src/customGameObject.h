#pragma once

#include "customMaterials.h"

#include "ofMain.h"

class customGameObject {

    public:
        customGameObject(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, ofImage *_texture, struct custommaterial *_material);
        
        virtual void update();

        virtual void draw2D();
        virtual void draw3D();


        ofVec3f position;
        ofVec3f rotation;
        ofVec3f scale;

        ofVec3f color;
        ofImage *texture;
        struct custommaterial *material;
        
};