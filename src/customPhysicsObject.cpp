#include "customPhysicsObject.h"



//--------------------------------------------------------------
// public
customPhysicsObject::customPhysicsObject(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) : customPhysicsObject(_position, _rotation, _scale, ofVec3f(0.5,0.5,0.5), vector<customColisionBox*>({})) {
    // do nothing, call true constructor
}
customPhysicsObject::customPhysicsObject(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color) : customPhysicsObject(_position, _rotation, _scale, _color, vector<customColisionBox*>({})) {
    // do nothing, call true constructor
}
customPhysicsObject::customPhysicsObject(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, vector<customColisionBox*> _colisionBoxes) : customPhysicsObject(_position, _rotation, _scale, ofVec3f(0.5,0.5,0.5), _colisionBoxes) {
    // do nothing, call true constructor
}
customPhysicsObject::customPhysicsObject(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, vector<customColisionBox*> _colisionBoxes) : customGameObject(_position, _rotation, _scale, _color) {
    // run this to set up the object

    this->velocity = ofVec3f(0, 0, 0);
    this->spin = ofVec3f(0, 0, 0);

    // code from "https://openframeworks.cc/documentation/utils/ofUtils/#show_ofGetCurrentTime"
    this->lastUpdateTime = ofGetCurrentTime().getAsMilliseconds();

    this->colisionBoxes = _colisionBoxes;

}

void customPhysicsObject::update() {
    // run this every cycle

    // calculate deltaT
    uint64_t deltaT = ofGetCurrentTime().getAsMilliseconds() - lastUpdateTime;
    //cout << deltaT << endl;

    // code from "https://www.delftstack.com/howto/cpp/how-to-get-time-in-milliseconds-cpp/"
    this->lastUpdateTime = ofGetCurrentTime().getAsMilliseconds();


    //this->applyGravity(deltaT);
    //this->applyVelocity(deltaT);
    //this->applySpin(deltaT);

    // update all collision boxes
    int cbsize = (int)this->colisionBoxes.size();
    for (int i=0; i<cbsize; i++) {
        this->colisionBoxes[i]->position = this->position;
        this->colisionBoxes[i]->update();
    }
}


void customPhysicsObject::draw3D() {
    // draw all collision boxes
    int cbsize = (int)this->colisionBoxes.size();
    for (int i=0; i<cbsize; i++) {
        this->colisionBoxes[i]->draw3D();
    }

    this->customGameObject::draw3D();
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
    this->position += this->velocity * (deltaT/1000.0f);
}


void customPhysicsObject::applySpin(uint64_t deltaT) {
    // change rotation according to spin
    this->rotation += this->spin * (deltaT/1000.0f);
}