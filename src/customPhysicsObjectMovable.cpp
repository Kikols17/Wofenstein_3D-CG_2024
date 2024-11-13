#include "customPhysicsObjectMovable.h"


//--------------------------------------------------------------
// public
void customPhysicsObjectMovable::update() {
    // run this every cycle

    // calculate deltaT
    uint64_t deltaT = ofGetCurrentTime().getAsMilliseconds() - lastUpdateTime;
    //cout << deltaT << endl;

    // code from "https://www.delftstack.com/howto/cpp/how-to-get-time-in-milliseconds-cpp/"
    this->lastUpdateTime = ofGetCurrentTime().getAsMilliseconds();


    this->applyGravity(deltaT);
    this->applyVelocity(deltaT);
    this->applySpin(deltaT);

    // update all collision boxes
    int cbsize = (int)this->colisionBoxes.size();
    for (int i=0; i<cbsize; i++) {
        this->colisionBoxes[i].position = this->position;
        this->colisionBoxes[i].update();
    }
}