#pragma once

#include "customGameObject.h"
#include "customRoom.h"

#include "ofMain.h"



class customRoom_hallway : public customRoom {
    // hallway room, 1x1x1 block, door on each side
    
    public:
        using customRoom::customRoom;

        void update();

        void draw2D();
        void draw3D();
    
};

class customRoom_Thallway : public customRoom {
    // T hallway room, 1x1x1 block, door on front left and right
    
    public:
        using customRoom::customRoom;

        void update();

        void draw2D();
        void draw3D();
    
};

class customRoom_Lhallway : public customRoom {
    // L hallway room, 1x1x1 block, door on front and right
    
    public:
        using customRoom::customRoom;

        void update();

        void draw2D();
        void draw3D();
    
};

class customRoom_Xhallway : public customRoom {
    // X hallway room, 1x1x1 block, door on all sides
    
    public:
        using customRoom::customRoom;

        void update();

        void draw2D();
        void draw3D();
    
};

class customRoom_wall : public customRoom {
    // wall room, 1x1x1 block, no doors
    
    public:
        using customRoom::customRoom;

        void update();

        void draw2D();
        void draw3D();
    
};

class customRoom_deadend : public customRoom {
    // deadend room, 1x1x1 block, one door on front
    
    public:
        using customRoom::customRoom;

        void update();

        void draw2D();
        void draw3D();
    
};



class customRoom_fightingroom : public customRoom {
    // fighting room, 5x1x5 block, 4 doors, one in the center of each wall
    
    public:
        using customRoom::customRoom;

        void update();

        void draw2D();
        void draw3D();
    
};