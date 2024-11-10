#include "customPhysicsObject.h"



//--------------------------------------------------------------
// public
customPhysicsObject::customPhysicsObject(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) : customGameObject(_position, _rotation, _scale) {
    // run this to set up the object

    this->velocity = ofVec3f(0, 0, 0);
    this->spin = ofVec3f(0, 0, 0);

    // code from "https://openframeworks.cc/documentation/utils/ofUtils/#show_ofGetCurrentTime"
    this->lastUpdateTime = ofGetCurrentTime().getAsMilliseconds();

}

void customPhysicsObject::update() {
    // run this every cycle

    // calculate deltaT
    uint64_t deltaT = ofGetCurrentTime().getAsMilliseconds() - lastUpdateTime;
    //cout << deltaT << endl;

    // code from "https://www.delftstack.com/howto/cpp/how-to-get-time-in-milliseconds-cpp/"
    this->lastUpdateTime = ofGetCurrentTime().getAsMilliseconds();


    this->applyGravity(deltaT);
    this->applyVelocity(deltaT);
    this->applySpin(deltaT);
}





//--------------------------------------------------------------
// private
void customPhysicsObject::applyGravity(uint64_t deltaT) {
    // apply gravity to the object
    ofVec3f gravity = ofVec3f(0, -0.098, 0);
    //cout << this->velocity.x << " " << this->velocity.y << " " << this->velocity.z << "       ->       ";
    if (this->velocity.y < -10) {
        // terminal velocity set at 10;
        return;
    }
    this->velocity += gravity * (deltaT/1000.0f);
    //cout << this->velocity.x << " " << this->velocity.y << " " << this->velocity.z << endl;
}

void customPhysicsObject::applyVelocity(uint64_t deltaT) {
    // change pos according to velocity
    this->position += this->velocity * deltaT;
}


void customPhysicsObject::applySpin(uint64_t deltaT) {
    // change rotation according to spin
    this->rotation += this->spin * deltaT;
}