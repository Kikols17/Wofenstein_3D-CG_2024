#pragma once
#ifndef CUSTOMROOM_TYPES_H
#define CUSTOMROOM_TYPES_H

#include "customGameObject.h"
#include "customPhysicsObject.h"
#include "cg_extras.h"

#include "ofMain.h"



class customRoom_axis : public customPhysicsObject {
    // axis, only 3 vertices: x, y, z
    public:
        using customPhysicsObject::customPhysicsObject;

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_hallway : public customPhysicsObject {
    // hallway room, 1x1x1 block, door on each side
    
    public:
        using customPhysicsObject::customPhysicsObject;

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_Thallway : public customPhysicsObject {
    // T hallway room, 1x1x1 block, door on front left and right
    
    public:
        using customPhysicsObject::customPhysicsObject;

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_Lhallway : public customPhysicsObject {
    // L hallway room, 1x1x1 block, door on front and right
    
    public:
        using customPhysicsObject::customPhysicsObject;

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_Xhallway : public customPhysicsObject {
    // X hallway room, 1x1x1 block, door on all sides
    
    public:
        using customPhysicsObject::customPhysicsObject;

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_wall : public customPhysicsObject {
    // wall room, 1x1x1 block, no doors
    
    public:
        using customPhysicsObject::customPhysicsObject;

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_deadend : public customPhysicsObject {
    // deadend room, 1x1x1 block, one door on front
    
    public:
        using customPhysicsObject::customPhysicsObject;

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};



class customRoom_fightingroom : public customPhysicsObject {
    // fighting room, 5x1x5 block, 4 doors, one in the center of each wall
    
    public:
        using customPhysicsObject::customPhysicsObject;

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};



class customRoom_ramp : public customPhysicsObject {
    // ramp room, 1x1x1 block, no doors no walls, ramp from front to back
    
    public:
        using customPhysicsObject::customPhysicsObject;

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};



#endif