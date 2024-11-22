#include "setuplevels.h"



void circular_level(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player) {
}

void training_level(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player) {
}

void excapefromwolfenstein_level(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player) {
}




void test_level(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player) {

    // clear vector
    gameobjects.clear();


    // add rooms
    shared_ptr<customGameObject>* axis = new shared_ptr<customGameObject>( new customRoom_axis(ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2)) );
    gameobjects.push_back(axis);
	/*
    axis = make_shared<customRoom_axis>( ofVec3f(0, 0, -8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(axis);
    axis = make_shared<customRoom_axis>( ofVec3f(0, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(axis);
    axis = make_shared<customRoom_axis>( ofVec3f(0, 0, -16), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(axis);

    shared_ptr<customRoom_hallway>* hallway = make_shared<customRoom_hallway>( ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);
    hallway = make_shared<customRoom_hallway>( ofVec3f(0, 0, -8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);
    hallway = make_shared<customRoom_hallway>( ofVec3f(0, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);
    hallway = make_shared<customRoom_hallway>( ofVec3f(0, 0, -16), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    shared_ptr<customRoom_Thallway>* Thallway = make_shared<customRoom_Thallway>( ofVec3f(4, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Thallway);
    Thallway = make_shared<customRoom_Thallway>( ofVec3f(4, 0, -8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Thallway);
    Thallway = make_shared<customRoom_Thallway>( ofVec3f(4, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Thallway);
    Thallway = make_shared<customRoom_Thallway>( ofVec3f(4, 0, -16), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Thallway);

    shared_ptr<customRoom_Lhallway>* Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(8, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);
    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(8, 0, -8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);
    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(8, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);
    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(8, 0, -16), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Lhallway);


    shared_ptr<customRoom_Xhallway>* Xhallway = make_shared<customRoom_Xhallway>( ofVec3f(12, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Xhallway);
    Xhallway = make_shared<customRoom_Xhallway>( ofVec3f(12, 0, -8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Xhallway);
    Xhallway = make_shared<customRoom_Xhallway>( ofVec3f(12, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Xhallway);
    Xhallway = make_shared<customRoom_Xhallway>( ofVec3f(12, 0, -16), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Xhallway);

    shared_ptr<customRoom_wall>* wall = make_shared<customRoom_wall>( ofVec3f(16, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);
    wall = make_shared<customRoom_wall>( ofVec3f(16, 0, -8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);
    wall = make_shared<customRoom_wall>( ofVec3f(16, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);
    wall = make_shared<customRoom_wall>( ofVec3f(16, 0, -16), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);


    shared_ptr<customRoom_deadend>* deadend = make_shared<customRoom_deadend>( ofVec3f(20, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(deadend);
    deadend = make_shared<customRoom_deadend>( ofVec3f(20, 0, -8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(deadend);
    deadend = make_shared<customRoom_deadend>( ofVec3f(20, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(deadend);
    deadend = make_shared<customRoom_deadend>( ofVec3f(20, 0, -16), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(deadend);

    shared_ptr<customRoom_fightingroom>* fightingroom = make_shared<customRoom_fightingroom>( ofVec3f(28, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(fightingroom);
    fightingroom = make_shared<customRoom_fightingroom>( ofVec3f(28, 0, -16), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(fightingroom);
    fightingroom = make_shared<customRoom_fightingroom>( ofVec3f(28, 0, -28), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(fightingroom);
    fightingroom = make_shared<customRoom_fightingroom>( ofVec3f(28, 0, -40), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(fightingroom);

    shared_ptr<customRoom_ramp>* ramp = make_shared<customRoom_ramp>( ofVec3f(36, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(ramp);
    ramp = make_shared<customRoom_ramp>( ofVec3f(36, 0, -8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(ramp);
    ramp = make_shared<customRoom_ramp>( ofVec3f(36, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(ramp);
    ramp = make_shared<customRoom_ramp>( ofVec3f(36, 0, -16), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(ramp);

    shared_ptr<customRoom_door>* door = make_shared<customRoom_door>( ofVec3f(40, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(door);
    door = make_shared<customRoom_door>( ofVec3f(40, 0, -8), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(door);
    door = make_shared<customRoom_door>( ofVec3f(40, 0, -12), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(door);
    door = make_shared<customRoom_door>( ofVec3f(40, 0, -16), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(door);
	*/
}
/*



void circular_level(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player) {

    // clear vector
    gameobjects.clear();
    

    // add rooms
    shared_ptr<customRoom_deadend>* deadend = make_shared<customRoom_deadend>( ofVec3f(0, 0, 0), ofVec3f(0, -90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(deadend);

    shared_ptr<customRoom_hallway>* hallway = make_shared<customRoom_hallway>( ofVec3f(-2, 0, 0), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    shared_ptr<customRoom_Xhallway>* Xhallway = make_shared<customRoom_Xhallway>( ofVec3f(-4, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(Xhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-4, 0, 2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(hallway);

    shared_ptr<customRoom_Lhallway>* Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(-4, 0, 4), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
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

    shared_ptr<customRoom_Thallway>* Thallway = make_shared<customRoom_Thallway>( ofVec3f(0, 0, 8), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
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

    shared_ptr<customRoom_wall>* wall = make_shared<customRoom_wall>( ofVec3f(8, 2, 2), ofVec3f(0, 0, 0), ofVec3f(2, 4, 2) );
    gameobjects.push_back(wall);

    // o
    shared_ptr<customRoom_fightingroom>* fightingroom = make_shared<customRoom_fightingroom>( ofVec3f(8, 0, -4), ofVec3f(0, 0, 0), ofVec3f(2, 6, 2) );
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


void training_level(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player) {

    // clear vector
    gameobjects.clear();
    

    // add a giant fighting room
    shared_ptr<customRoom_fightingroom>* fightingroom = make_shared<customRoom_fightingroom>( ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(6, 4, 6) );
    gameobjects.push_back(fightingroom);

    shared_ptr <customRoom_wall> wall = make_shared<customRoom_wall>( ofVec3f(0, 2, -16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);

}



void excapefromwolfenstein_level(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player) {

    // clear vector
    gameobjects.clear();
    
    //-------------------------------------------------------
    // initial sector
    shared_ptr <customRoom_Xhallway> Xhallway = make_shared<customRoom_Xhallway>( ofVec3f(10, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2*13, 2, 2*13) );
    gameobjects.push_back(Xhallway);

    // left wall
    shared_ptr <customRoom_wall> wall = make_shared<customRoom_wall>( ofVec3f(-4, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2*13) );
    gameobjects.push_back(wall);

    // front wall
    wall = make_shared<customRoom_wall>( ofVec3f(10, 0, 12), ofVec3f(0, 0, 0), ofVec3f(2*13, 2, 2) );
    gameobjects.push_back(wall);

    // right wall
    wall = make_shared<customRoom_wall>( ofVec3f(24, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2*13) );
    gameobjects.push_back(wall);

    // back-left wall
    wall = make_shared<customRoom_wall>( ofVec3f(2, 0, -14), ofVec3f(0, 0, 0), ofVec3f(2*7, 2, 2) );
    gameobjects.push_back(wall);

    // back-right wall
    wall = make_shared<customRoom_wall>( ofVec3f(18, 0, -14), ofVec3f(0, 0, 0), ofVec3f(2*7, 2, 2) );
    gameobjects.push_back(wall);



    // initial prison cell
    wall = make_shared<customRoom_wall>( ofVec3f(2, 0, -4), ofVec3f(0, 0, 0), ofVec3f(2*5, 2, 2) );
    gameobjects.push_back(wall);

    wall = make_shared<customRoom_wall>( ofVec3f(2, 0, 4), ofVec3f(0, 0, 0), ofVec3f(2*5, 2, 2) );
    gameobjects.push_back(wall);

    wall = make_shared<customRoom_wall>( ofVec3f(6, 0, -2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall); 

    wall = make_shared<customRoom_wall>( ofVec3f(6, 0, 2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);

    shared_ptr<customRoom_door>* door = make_shared<customRoom_door>( ofVec3f(2*3, 0, 0), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(door);



    // second prison cell
    wall = make_shared<customRoom_wall>( ofVec3f(2*9, 0, -4), ofVec3f(0, 0, 0), ofVec3f(2*5, 2, 2) );
    gameobjects.push_back(wall);

    wall = make_shared<customRoom_wall>( ofVec3f(2*9, 0, 4), ofVec3f(0, 0, 0), ofVec3f(2*5, 2, 2) );
    gameobjects.push_back(wall);

    wall = make_shared<customRoom_wall>( ofVec3f(2*7, 0, -2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall); 

    wall = make_shared<customRoom_wall>( ofVec3f(2*7, 0, 2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);

    door = make_shared<customRoom_door>( ofVec3f(2*7, 0, 0), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(door);



    // third prison cell
    wall = make_shared<customRoom_wall>( ofVec3f(2*3, 0, -2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2*3) );
    gameobjects.push_back(wall);

    wall = make_shared<customRoom_wall>( ofVec3f(2*3, 0, -2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);

    door = make_shared<customRoom_door>( ofVec3f(2*3, 0, -2*5), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(door);

    

    // fourth prison cell
    wall = make_shared<customRoom_wall>( ofVec3f(2*7, 0, -2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2*3) );
    gameobjects.push_back(wall);

    wall = make_shared<customRoom_wall>( ofVec3f(2*7, 0, -2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);

    door = make_shared<customRoom_door>( ofVec3f(2*7, 0, -2*5), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(door);





    //-------------------------------------------------------
    // first corridor
    Xhallway = make_shared<customRoom_Xhallway>( ofVec3f(2*5, 0, -2*13), ofVec3f(0, 0, 0), ofVec3f(2*5, 2, 2*13) );
    gameobjects.push_back(Xhallway);

    wall = make_shared<customRoom_wall>( ofVec3f(2*3, 0, -2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2*13) );
    gameobjects.push_back(wall);

    wall = make_shared<customRoom_wall>( ofVec3f(2*7, 0, -2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2*13) );
    gameobjects.push_back(wall);

    wall = make_shared<customRoom_wall>( ofVec3f(2*4, 0, -2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);

    wall = make_shared<customRoom_wall>( ofVec3f(2*6, 0, -2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(wall);

    door = make_shared<customRoom_door>( ofVec3f(2*5, 0, -2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(door);

    door = make_shared<customRoom_door>( ofVec3f(2*5, 0, -2*7), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) );
    gameobjects.push_back(door);





    //-------------------------------------------------------
    // central lobby
    Xhallway = make_shared<customRoom_Xhallway>( ofVec3f(2*5, 0, -2*24), ofVec3f(0, 0, 0), ofVec3f(2*15, 2, 2*9) );
    gameobjects.push_back(Xhallway);

    wall = make_shared<customRoom_wall>( ofVec3f(0, 0, -2*20), ofVec3f(0, 0, 0), ofVec3f(2*5, 2, 2) );
    gameobjects.push_back(wall);
    wall = make_shared<customRoom_wall>( ofVec3f(2*10, 0, -2*20), ofVec3f(0, 0, 0), ofVec3f(2*5, 2, 2) );
    gameobjects.push_back(wall);

    wall = make_shared<customRoom_wall>( ofVec3f(-2*3, 0, -2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2*9) );
    gameobjects.push_back(wall);

    wall = make_shared<customRoom_wall>( ofVec3f(0, 0, -2*28), ofVec3f(0, 0, 0), ofVec3f(2*5, 2, 2) );
    gameobjects.push_back(wall);
    wall = make_shared<customRoom_wall>( ofVec3f(2*10, 0, -2*28), ofVec3f(0, 0, 0), ofVec3f(2*5, 2, 2) );
    gameobjects.push_back(wall);

    wall = make_shared<customRoom_wall>( ofVec3f(2*13, 0, -2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2*3) );
    gameobjects.push_back(wall);
    wall = make_shared<customRoom_wall>( ofVec3f(2*13, 0, -2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2*3) );
    gameobjects.push_back(wall);





}
*/







// CRIADO POR MAPCREATOR
void wolfenstein(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player) {

	// clear vector
	gameobjects.clear();

	shared_ptr<customGameObject>* go;
	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*35, 0.8, 2*1), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*43, 0.8, 2*2), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*48, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*33, 2*0, 2*4), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*45, 2*0, 2*4), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*48, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*29, 0.8, 2*5), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*48, 0.8, 2*5), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*48, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*15, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*19, 0.8, 2*8), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*39, 2*0, 2*8), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*13, 0.8, 2*9), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*24, 0.8, 2*9), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*17, 0.8, 2*10), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*20, 2*0, 2*10), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*20, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*26, 0.8, 2*11), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*40, 0.8, 2*11), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*6, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*7, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*8, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*13, 0.8, 2*12), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*19, 0.8, 2*13), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*7, 0.8, 2*14), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*15, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*37, 0.8, 2*15), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*42, 0.8, 2*15), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*6, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*7, 2*0, 2*16), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*8, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*7, 0.8, 2*20), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*12, 0.8, 2*20), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*15, 0.8, 2*20), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*15, 2*0, 2*21), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*39, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*59, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*63, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*65, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*66, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*11, 0.8, 2*22), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*34, 0.8, 2*23), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*42, 0.8, 2*24), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*50, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*53, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*55, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*65, 0.8, 2*25), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*10, 2*0, 2*26), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*39, 0.8, 2*26), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*48, 2*0, 2*26), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*48, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*58, 2*0, 2*26), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*15, 0.8, 2*27), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*45, 0.8, 2*28), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*50, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*55, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*66, 0.8, 2*28), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*18, 0.8, 2*30), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*15, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*39, 2*0, 2*31), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*59, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*63, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*65, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*66, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*63, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*65, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*7, 0.8, 2*34), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*11, 0.8, 2*34), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*53, 0.8, 2*34), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*59, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*63, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*55, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*65, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*55, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*65, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*55, 2*0, 2*37), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*64, 0.8, 2*37), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*65, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*39, 0.8, 2*38), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*53, 0.8, 2*38), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*55, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*65, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*20, 0.8, 2*39), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*20, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*53, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*55, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*61, 0.8, 2*39), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*65, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*20, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*23, 2*0, 2*40), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*59, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*63, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*9, 0.8, 2*41), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*20, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*6, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*7, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*8, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*15, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*39, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*37, 2*0, 2*45), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*41, 2*0, 2*45), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*37, 2*0, 2*50), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*41, 2*0, 2*50), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*34, 0.8, 2*54), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*44, 0.8, 2*54), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2) ) );
	gameobjects.push_back(go);




	// set player position
	player.position = ofVec3f(2*34, 0.80, 2*50);
}
