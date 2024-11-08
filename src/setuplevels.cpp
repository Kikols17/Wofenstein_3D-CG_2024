#include "setuplevels.h"



void test_level(vector<shared_ptr<customGameObject>> &gameobjects) {

    // clear vector
    gameobjects.clear();


    // add rooms
    shared_ptr<customRoom_axis> axis = make_shared<customRoom_axis>( ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(axis);

    shared_ptr<customRoom_hallway> hallway = make_shared<customRoom_hallway>( ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);

    shared_ptr<customRoom_Thallway> Thallway = make_shared<customRoom_Thallway>( ofVec3f(2, 0, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Thallway);

    shared_ptr<customRoom_Lhallway> Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(4, 0, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Lhallway);

    shared_ptr<customRoom_Xhallway> Xhallway = make_shared<customRoom_Xhallway>( ofVec3f(6, 0, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Xhallway);

    shared_ptr<customRoom_wall> wall = make_shared<customRoom_wall>( ofVec3f(8, 0, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(wall);

    shared_ptr<customRoom_deadend> deadend = make_shared<customRoom_deadend>( ofVec3f(10, 0, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(deadend);

    shared_ptr<customRoom_fightingroom> fightingroom = make_shared<customRoom_fightingroom>( ofVec3f(14, 0, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(fightingroom);
}



void circular_level(vector<shared_ptr<customGameObject>> &gameobjects) {

    // clear vector
    gameobjects.clear();
    

    // add rooms
    shared_ptr<customRoom_deadend> deadend = make_shared<customRoom_deadend>( ofVec3f(0, 0, 0), ofVec3f(0, -90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(deadend);

    shared_ptr<customRoom_hallway> hallway = make_shared<customRoom_hallway>( ofVec3f(-1, 0, 0), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);

    shared_ptr<customRoom_Xhallway> Xhallway = make_shared<customRoom_Xhallway>( ofVec3f(-2, 0, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Xhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-2, 0, 1), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);

    shared_ptr<customRoom_Lhallway> Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(-2, 0, 2), ofVec3f(0, 180, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-3, 0, 2), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);

    deadend = make_shared<customRoom_deadend>( ofVec3f(-4, 0, 2), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(deadend);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-3, 0, 0), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-4, 0, 0), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-5, 0, 0), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(-6, 0, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-6, 0, 1), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-6, 0, 2), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-6, 0, 3), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(-6, 0, 4), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-5, 0, 4), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-4, 0, 4), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-3, 0, 4), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-2, 0, 4), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);


    hallway = make_shared<customRoom_hallway>( ofVec3f(-1, 0, 4), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);

    shared_ptr<customRoom_Thallway> Thallway = make_shared<customRoom_Thallway>( ofVec3f(0, 0, 4), ofVec3f(0, 180, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Thallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(0, 0, 3), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Lhallway);

    Thallway = make_shared<customRoom_Thallway>( ofVec3f(1, 0, 4), ofVec3f(0, 180, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Thallway);

    Thallway = make_shared<customRoom_Thallway>( ofVec3f(1, 0, 3), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Thallway);

    Thallway = make_shared<customRoom_Thallway>( ofVec3f(2, 0, 4), ofVec3f(0, 180, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Thallway);

    Thallway = make_shared<customRoom_Thallway>( ofVec3f(2, 0, 3), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Thallway);

    Thallway = make_shared<customRoom_Thallway>( ofVec3f(3, 0, 4), ofVec3f(0, 180, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Thallway);

    Thallway = make_shared<customRoom_Thallway>( ofVec3f(3, 0, 3), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Thallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(4, 0, 4), ofVec3f(0, 180, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Lhallway);

    Thallway = make_shared<customRoom_Thallway>( ofVec3f(4, 0, 3), ofVec3f(0, -90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Thallway);


    hallway = make_shared<customRoom_hallway>( ofVec3f(4, 0, 2), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(4, 0, 1), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);


    shared_ptr<customRoom_fightingroom> fightingroom = make_shared<customRoom_fightingroom>( ofVec3f(4, 0, -2), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(fightingroom);

    shared_ptr<customRoom_wall> wall = make_shared<customRoom_wall>( ofVec3f(1, 0, -2), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(wall);

    wall = make_shared<customRoom_wall>( ofVec3f(7, 0, -2), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(wall);


    hallway = make_shared<customRoom_hallway>( ofVec3f(4, 0, -5), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1));
    gameobjects.push_back(hallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(4, 0, -6), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(5, 0, -6), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1));
    gameobjects.push_back(hallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(6, 0, -6), ofVec3f(0, 180, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(6, 0, -7), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1));
    gameobjects.push_back(hallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(6, 0, -8), ofVec3f(0, -90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(5, 0, -8), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1));
    gameobjects.push_back(hallway);
    
    hallway = make_shared<customRoom_hallway>( ofVec3f(4, 0, -8), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1));
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(3, 0, -8), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1));
    gameobjects.push_back(hallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(2, 0, -8), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(2, 0, -7), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1));
    gameobjects.push_back(hallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(2, 0, -6), ofVec3f(0, 180, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(1, 0, -6), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1));
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(0, 0, -6), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1));
    gameobjects.push_back(hallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-1, 0, -6), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1));
    gameobjects.push_back(hallway);


    fightingroom = make_shared<customRoom_fightingroom>( ofVec3f(-4, 0, -6), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(fightingroom);

    wall = make_shared<customRoom_wall>( ofVec3f(-4, 0, -9), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(wall);

    wall = make_shared<customRoom_wall>( ofVec3f(-7, 0, -6), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(wall);


    hallway = make_shared<customRoom_hallway>( ofVec3f(-4, 0, -3), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);

    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(-4, 0, -2), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-3, 0, -2), ofVec3f(0, 90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);
    
    Lhallway = make_shared<customRoom_Lhallway>( ofVec3f(-2, 0, -2), ofVec3f(0, -90, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(Lhallway);

    hallway = make_shared<customRoom_hallway>( ofVec3f(-2, 0, -1), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    gameobjects.push_back(hallway);
    

}