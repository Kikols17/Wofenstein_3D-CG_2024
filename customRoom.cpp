#include "customRoom.h"

//--------------------------------------------------------------
customRoom::customRoom(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) {
    // run this to set up the object
    this->customGameObject::customGameObject(_position, _rotation, _scale);
}

//--------------------------------------------------------------
void customRoom::update(){
    // run this every update cycle
}



//--------------------------------------------------------------
void customRoom::draw2D(){
    // run this every draw cycle
    this->customGameObject::draw2D();
}

//--------------------------------------------------------------
void customRoom::draw3D(){
    // run this every draw cycle
    this->customGameObject::draw3D();
}