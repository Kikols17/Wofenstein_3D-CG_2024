#pragma once
#ifndef CUSTOMROOM_TYPES_H
#define CUSTOMROOM_TYPES_H

#include "customGameObject.h"
#include "customPhysicsObjectStatic.h"

#include "cg_extras.h"
#include "cg_drawing_extras.h"

#include "ofMain.h"



class customRoom_axis : public customPhysicsObjectStatic {
    // axis, only 3 vertices: x, y, z
    public:
        customRoom_axis(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color);

        using customPhysicsObjectStatic::update;

        void draw2D() override;
        void draw3D() override;
    
};


class customRoom_Xhallway : public customPhysicsObjectStatic {
    // X hallway room, 1x1x1 block, door on all sides
    
    public:
        customRoom_Xhallway(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color);

        using customPhysicsObjectStatic::update;

        void draw2D() override;
        void draw3D() override;
    
};


class customRoom_wall : public customPhysicsObjectStatic {
    // wall room, 1x1x1 block, no doors
    
    public:
        customRoom_wall(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color);

        using customPhysicsObjectStatic::update;

        void draw2D() override;
        void draw3D() override;
    
};


class customRoom_door : public customPhysicsObjectStatic {
    // door
    
    public:
        customRoom_door(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color);

        void update() override;

        void draw2D() override;
        void draw3D() override;

        using customPhysicsObjectStatic::position;
        using customPhysicsObjectStatic::rotation;
        using customPhysicsObjectStatic::scale;


        bool open = false;
        GLfloat open_percent = 0.0f;
    
};



class customRoom_end : public customPhysicsObjectStatic {
    // end room, 1x1x1 block, no doors
    
    public:
        customRoom_end(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color);

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};



#endif