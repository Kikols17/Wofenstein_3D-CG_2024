#pragma once
#ifndef CUSTOMROOM_TYPES_H
#define CUSTOMROOM_TYPES_H

#include "customGameObject.h"
#include "customGameObject.h"
#include "cg_extras.h"

#include "ofMain.h"



class customRoom_axis : public customGameObject {
    // axis, only 3 vertices: x, y, z
    public:
        using customGameObject::customGameObject;

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_hallway : public customGameObject {
    // hallway room, 1x1x1 block, door on each side
    
    public:
        using customGameObject::customGameObject;

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_Thallway : public customGameObject {
    // T hallway room, 1x1x1 block, door on front left and right
    
    public:
        using customGameObject::customGameObject;

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_Lhallway : public customGameObject {
    // L hallway room, 1x1x1 block, door on front and right
    
    public:
        using customGameObject::customGameObject;

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_Xhallway : public customGameObject {
    // X hallway room, 1x1x1 block, door on all sides
    
    public:
        using customGameObject::customGameObject;

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_wall : public customGameObject {
    // wall room, 1x1x1 block, no doors
    
    public:
        using customGameObject::customGameObject;

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};

class customRoom_deadend : public customGameObject {
    // deadend room, 1x1x1 block, one door on front
    
    public:
        using customGameObject::customGameObject;

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};



class customRoom_fightingroom : public customGameObject {
    // fighting room, 5x1x5 block, 4 doors, one in the center of each wall
    
    public:
        using customGameObject::customGameObject;

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
};



#endif