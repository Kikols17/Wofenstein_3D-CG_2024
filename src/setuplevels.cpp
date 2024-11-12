#include "setuplevels.h"



void test_level(vector<shared_ptr<customGameObject>> &gameobjects) {

    // clear vector
    gameobjects.clear();


    // add rooms
    shared_ptr<customRoom_axis> axis = make_shared<customRoom_axis>( ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(axis);
    axis = make_shared<customRoom_axis>( ofVec3f(0, 0, -8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(axis);
    axis = make_shared<customRoom_axis>( ofVec3f(0, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(axis);
    axis = make_shared<customRoom_axis>( ofVec3f(0, 0, -16), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(axis);

    shared_ptr<customRoom_hallway> hallway = make_shared<customRoom_hallway>( ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);
    hallway = make_shared<customRoom_hallway>( ofVec3f(0, 0, -8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);
    hallway = make_shared<customRoom_hallway>( ofVec3f(0, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);
    hallway = make_shared<customRoom_hallway>( ofVec3f(0, 0, -16), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    shared_ptr<customRoom_Thallway> Thallway = make_shared<customRoom_Thallway>( ofVec3f(4, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Thallway);
    Thallway = make_shared<customRoom_Thallway>( ofVec3f(4, 0, -8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Thallway);
    Thallway = make_shared<customRoom_Thallway>( ofVec3f(4, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Thallway);
    Thallway = make_shared<customRoom_Thallway>( ofVec3f(4, 0, -16), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Thallway);

    shared_ptr<customRoom_Lhallway> Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(8, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);
    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(8, 0, -8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);
    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(8, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);
    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(8, 0, -16), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);


    shared_ptr<customRoom_Xhallway> Xhallway = make_shared<customRoom_Xhallway>( ofVec3f(12, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Xhallway);
    Xhallway = make_shared<customRoom_Xhallway>( ofVec3f(12, 0, -8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Xhallway);
    Xhallway = make_shared<customRoom_Xhallway>( ofVec3f(12, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Xhallway);
    Xhallway = make_shared<customRoom_Xhallway>( ofVec3f(12, 0, -16), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Xhallway);

    shared_ptr<customRoom_wall> wall = make_shared<customRoom_wall>( ofVec3f(16, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);
    wall = make_shared<customRoom_wall>( ofVec3f(16, 0, -8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);
    wall = make_shared<customRoom_wall>( ofVec3f(16, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);
    wall = make_shared<customRoom_wall>( ofVec3f(16, 0, -16), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);


    shared_ptr<customRoom_deadend> deadend = make_shared<customRoom_deadend>( ofVec3f(20, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(deadend);
    deadend = make_shared<customRoom_deadend>( ofVec3f(20, 0, -8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(deadend);
    deadend = make_shared<customRoom_deadend>( ofVec3f(20, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(deadend);
    deadend = make_shared<customRoom_deadend>( ofVec3f(20, 0, -16), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(deadend);

    shared_ptr<customRoom_fightingroom> fightingroom = make_shared<customRoom_fightingroom>( ofVec3f(28, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(fightingroom);
    fightingroom = make_shared<customRoom_fightingroom>( ofVec3f(28, 0, -16), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(fightingroom);
    fightingroom = make_shared<customRoom_fightingroom>( ofVec3f(28, 0, -28), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(fightingroom);
    fightingroom = make_shared<customRoom_fightingroom>( ofVec3f(28, 0, -40), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(fightingroom);

    shared_ptr<customRoom_ramp> ramp = make_shared<customRoom_ramp>( ofVec3f(36, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(ramp);
    ramp = make_shared<customRoom_ramp>( ofVec3f(36, 0, -8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(ramp);
    ramp = make_shared<customRoom_ramp>( ofVec3f(36, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(ramp);
    ramp = make_shared<customRoom_ramp>( ofVec3f(36, 0, -16), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(ramp);
}



void circular_level(vector<shared_ptr<customGameObject>> &gameobjects) {

    // clear vector
    gameobjects.clear();
    

    // add rooms
    shared_ptr<customRoom_deadend> deadend = make_shared<customRoom_deadend>( ofVec3f(0, 0, 0), ofVec3f(0, -90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(deadend);

    shared_ptr<customRoom_hallway> hallway = make_shared<customRoom_hallway>( ofVec3f(-2, 0, 0), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    shared_ptr<customRoom_Xhallway> Xhallway = make_shared<customRoom_Xhallway>( ofVec3f(-4, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Xhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-4, 0, 2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    shared_ptr<customRoom_Lhallway> Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(-4, 0, 4), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-6, 0, 4), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    deadend = make_shared<customRoom_deadend>( ofVec3f(-8, 0, 4), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(deadend);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-6, 0, 0), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-8, 0, 0), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-10, 0, 0), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(-12, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-12, 0, 2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-12, 0, 4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-12, 0, 6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(-12, 0, 8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-10, 0, 8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-8, 0, 8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-6, 0, 8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-4, 0, 8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    // o
    hallway = make_shared<customRoom_hallway>( ofVec3f(-2, 0, 8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    shared_ptr<customRoom_Thallway> Thallway = make_shared<customRoom_Thallway>( ofVec3f(0, 0, 8), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Thallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(0, 0, 6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);

    Thallway = make_shared<customRoom_Thallway>( ofVec3f(2, 0, 8), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Thallway);

    Thallway = make_shared<customRoom_Thallway>( ofVec3f(2, 0, 6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Thallway);

    Thallway = make_shared<customRoom_Thallway>( ofVec3f(4, 0, 8), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Thallway);

    Thallway = make_shared<customRoom_Thallway>( ofVec3f(4, 0, 6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Thallway);

    Thallway = make_shared<customRoom_Thallway>( ofVec3f(6, 0, 8), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Thallway);

    Thallway = make_shared<customRoom_Thallway>( ofVec3f(6, 0, 6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Thallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(8, 0, 8), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);

    Thallway = make_shared<customRoom_Thallway>( ofVec3f(8, 0, 6), ofVec3f(0, -90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Thallway);

    // o
    hallway = make_shared<customRoom_hallway>( ofVec3f(8, 0, 4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(8, 0, 2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    shared_ptr<customRoom_wall> wall = make_shared<customRoom_wall>( ofVec3f(8, 2, 2), ofVec3f(0, 0, 0), ofVec3f(2, 4, 2) );
    gameobjects.push_back(wall);

    // o
    shared_ptr<customRoom_fightingroom> fightingroom = make_shared<customRoom_fightingroom>( ofVec3f(8, 0, -4), ofVec3f(0, 0, 0), ofVec3f(2, 6, 2) );
    gameobjects.push_back(fightingroom);

    wall = make_shared<customRoom_wall>( ofVec3f(2, 0, -4), ofVec3f(0, 0, 0), ofVec3f(2, 6, 2) );
    gameobjects.push_back(wall);

    wall = make_shared<customRoom_wall>( ofVec3f(14, 0, -4), ofVec3f(0, 0, 0), ofVec3f(2, 6, 2) );
    gameobjects.push_back(wall);

    // o
    hallway = make_shared<customRoom_hallway>( ofVec3f(8, 0, -10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2));
    gameobjects.push_back(hallway);

    wall = make_shared<customRoom_wall>( ofVec3f(8, 2, -10), ofVec3f(0, 0, 0), ofVec3f(2, 4, 2));
    gameobjects.push_back(wall);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(8, 0, -12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(10, 0, -12), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2));
    gameobjects.push_back(hallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(12, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(12, 0, -14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2));
    gameobjects.push_back(hallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(12, 0, -16), ofVec3f(0, -90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(10, 0, -16), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2));
    gameobjects.push_back(hallway);
    
    hallway = make_shared<customRoom_hallway>( ofVec3f(8, 0, -16), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2));
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(6, 0, -16), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2));
    gameobjects.push_back(hallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(4, 0, -16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(4, 0, -14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2));
    gameobjects.push_back(hallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(4, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(2, 0, -12), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2));
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(0, 0, -12), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2));
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-2, 0, -12), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2));
    gameobjects.push_back(hallway);

    // o
    fightingroom = make_shared<customRoom_fightingroom>( ofVec3f(-8, 0, -12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(fightingroom);

    wall = make_shared<customRoom_wall>( ofVec3f(-8, 0, -18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);

    wall = make_shared<customRoom_wall>( ofVec3f(-14, 0, -12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);

    // o
    hallway = make_shared<customRoom_hallway>( ofVec3f(-8, 0, -6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(-8, 0, -4), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-6, 0, -4), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);
    
    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(-4, 0, -4), ofVec3f(0, -90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-4, 0, -2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);
    

}


void training_level(vector<shared_ptr<customGameObject>> &gameobjects) {

    // clear vector
    gameobjects.clear();
    

    // add a giant fighting room
    shared_ptr<customRoom_fightingroom> fightingroom = make_shared<customRoom_fightingroom>( ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(6, 4, 6) );
    gameobjects.push_back(fightingroom);

    shared_ptr <customRoom_wall> wall = make_shared<customRoom_wall>( ofVec3f(0, 2, -16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);

}