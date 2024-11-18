#pragma once
#ifndef CUSTOMROOM_TYPES_H
#define CUSTOMROOM_TYPES_H

#include "customGameObject.h"
#include "customPhysicsObjectStatic.h"
#include "cg_extras.h"

#include "ofMain.h"



class customRoom_axis : public customPhysicsObjectStatic {
    // axis, only 3 vertices: x, y, z
    public:
        using customPhysicsObjectStatic::customPhysicsObjectStatic;

        using customPhysicsObjectStatic::update;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_hallway : public customPhysicsObjectStatic {
    // hallway room, 1x1x1 block, door on each side
    
    public:
        customRoom_hallway(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale);

        using customPhysicsObjectStatic::update;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_Thallway : public customPhysicsObjectStatic {
    // T hallway room, 1x1x1 block, door on front left and right
    
    public:
        customRoom_Thallway(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale);

        using customPhysicsObjectStatic::update;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_Lhallway : public customPhysicsObjectStatic {
    // L hallway room, 1x1x1 block, door on front and right
    
    public:
        customRoom_Lhallway(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale);

        using customPhysicsObjectStatic::update;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_Xhallway : public customPhysicsObjectStatic {
    // X hallway room, 1x1x1 block, door on all sides
    
    public:
        customRoom_Xhallway(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale);

        using customPhysicsObjectStatic::update;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_wall : public customPhysicsObjectStatic {
    // wall room, 1x1x1 block, no doors
    
    public:
        customRoom_wall(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale);

        using customPhysicsObjectStatic::update;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_deadend : public customPhysicsObjectStatic {
    // deadend room, 1x1x1 block, one door on front
    
    public:
        customRoom_deadend(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale);

        using customPhysicsObjectStatic::update;

        void draw2D() override;
        void draw3D() override;
    
};



class customRoom_fightingroom : public customPhysicsObjectStatic {
    // fighting room, 5x1x5 block, 4 doors, one in the center of each wall
    
    public:
        customRoom_fightingroom(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale);

        using customPhysicsObjectStatic::update;

        void draw2D() override;
        void draw3D() override;
    
};



class customRoom_ramp : public customPhysicsObjectStatic {
    // ramp room, 1x1x1 block, no doors no walls, ramp from front to back
    
    public:
        using customPhysicsObjectStatic::customPhysicsObjectStatic;

        using customPhysicsObjectStatic::update;

        void draw2D() override;
        void draw3D() override;
    
};



class customRoom_door : public customPhysicsObjectStatic {
    // door room, 1x1x1 block, door on front
    
    public:
        customRoom_door(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale);

        using customPhysicsObjectStatic::update;

        void draw2D() override;
        void draw3D() override;
    
};



#endif