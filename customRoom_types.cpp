#include "customRoom_types.h"

//--------------------------------------------------------------
// customRoom_hallway
//--------------------------------------------------------------
customRoom_hallway::customRoom_hallway(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) {
    this->customRoom::customRoom(_position, _rotation, _scale);
}

void customRoom_hallway::update(){
    // run this every update cycle
}

void customRoom_hallway::draw2D(){
    // run this every 2D draw cycle
    // seeing the room from the top

    glPushMatrix();
        this->customRoom::draw2D();      // move to the position, rotate, and scale the room

    glPopMatrix();
}
void customRoom_hallway::draw3D(){
    // run this every draw cycle

    glPushMatrix();
        this->customRoom::draw3D();      // move to the position, rotate, and scale the room

    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_Thallway
//--------------------------------------------------------------
customRoom_Thallway::customRoom_Thallway(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) {
    this->customRoom::customRoom(_position, _rotation, _scale);
}

void customRoom_Thallway::update(){
    // run this every update cycle
}

void customRoom_Thallway::draw2D(){
    // run this every draw cycle

    glPushMatrix();
        this->customRoom::draw2D();      // move to the position, rotate, and scale the room

    glPopMatrix();
}
void customRoom_Thallway::draw3D(){
    // run this every draw cycle

    glPushMatrix();
        this->customRoom::draw3D();      // move to the position, rotate, and scale the room

    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_Lhallway
//--------------------------------------------------------------
customRoom_Lhallway::customRoom_Lhallway(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) {
    this->customRoom::customRoom(_position, _rotation, _scale);
}

void customRoom_Lhallway::update(){
    // run this every update cycle
}

void customRoom_Lhallway::draw2D(){
    // run this every draw cycle
    
    glPushMatrix();
        this->customRoom::draw2D();      // move to the position, rotate, and scale the room

    glPopMatrix();
}
void customRoom_Lhallway::draw3D(){
    // run this every draw cycle
    
    glPushMatrix();
        this->customRoom::draw3D();      // move to the position, rotate, and scale the room

    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_Xhallway
//--------------------------------------------------------------
customRoom_Xhallway::customRoom_Xhallway(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) {
    this->customRoom::customRoom(_position, _rotation, _scale);
}

void customRoom_Xhallway::update(){
    // run this every update cycle
}

void customRoom_Xhallway::draw2D(){
    // run this every draw cycle
    
    glPushMatrix();
        this->customRoom::draw2D();      // move to the position, rotate, and scale the room

    glPopMatrix();
}
void customRoom_Xhallway::draw3D(){
    // run this every draw cycle
    
    glPushMatrix();
        this->customRoom::draw3D();      // move to the position, rotate, and scale the room

    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_wall
//--------------------------------------------------------------
customRoom_wall::customRoom_wall(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) {
    this->customRoom::customRoom(_position, _rotation, _scale);
}

void customRoom_wall::update(){
    // run this every update cycle
}

void customRoom_wall::draw2D(){
    // run this every draw cycle
    
    glPushMatrix();
        this->customRoom::draw2D();      // move to the position, rotate, and scale the room

    glPopMatrix();
}
void customRoom_wall::draw3D(){
    // run this every draw cycle
    
    glPushMatrix();
        this->customRoom::draw3D();      // move to the position, rotate, and scale the room

    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_deadend
//--------------------------------------------------------------
customRoom_deadend::customRoom_deadend(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) {
    this->customRoom::customRoom(_position, _rotation, _scale);
}

void customRoom_deadend::update(){
    // run this every update cycle
}

void customRoom_deadend::draw2D(){
    // run this every draw cycle
    
    glPushMatrix();
        this->customRoom::draw2D();      // move to the position, rotate, and scale the room

    glPopMatrix();
}
void customRoom_deadend::draw3D(){
    // run this every draw cycle
    
    glPushMatrix();
        this->customRoom::draw3D();      // move to the position, rotate, and scale the room

    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_fightingroom
//--------------------------------------------------------------
customRoom_fightingroom::customRoom_fightingroom(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) {
    this->customRoom::customRoom(_position, _rotation, _scale);
}

void customRoom_fightingroom::update(){
    // run this every update cycle
}

void customRoom_fightingroom::draw2D(){
    // run this every draw cycle
    
    glPushMatrix();
        this->customRoom::draw2D();      // move to the position, rotate, and scale the room

    glPopMatrix();
}
void customRoom_fightingroom::draw3D(){
    // run this every draw cycle
    
    glPushMatrix();
        this->customRoom::draw3D();      // move to the position, rotate, and scale the room

    glPopMatrix();
}
