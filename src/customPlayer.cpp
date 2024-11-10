#include "customPlayer.h"



//--------------------------------------------------------------
// public
customPlayer::customPlayer(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) : customPhysicsObject(_position, _rotation, _scale) {
    // run this to set up the object

    this->cam = customCamara();

}

void customPlayer::update() {
    // run this every cycle

    // run the physics update
    this->customPhysicsObject::update();

    // update the camara
    this->cam.moveto(this->position.x, this->position.y+(this->scale.y/2)*0.8, this->position.z);
    this->cam.updatelooking();
}