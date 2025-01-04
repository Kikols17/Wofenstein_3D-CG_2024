#include "customPhysicsObjectMovable.h"


extern vector<customColisionBox*> globalcolisionBoxes;

#define MAX_DELTAT 100


//--------------------------------------------------------------
// public
void customPhysicsObjectMovable::update() {
    // run this every cycle

    // calculate deltaT
    uint64_t deltaT = ofGetCurrentTime().getAsMilliseconds() - lastUpdateTime;
    deltaT = (deltaT*(deltaT<MAX_DELTAT)) + (MAX_DELTAT*(deltaT>MAX_DELTAT));    // cap deltaT at 100miliseconds
    //cout << deltaT << endl;

    // code from "https://www.delftstack.com/howto/cpp/how-to-get-time-in-milliseconds-cpp/"
    this->lastUpdateTime = ofGetCurrentTime().getAsMilliseconds();

    
    bool collision = false;
    for (int i=0; i<(int)this->colisionBoxes.size(); i++) {
        if (this->colisionBoxes[i]->hasCollided!=-2) {
            collision = true;
            break;
        }
    }
    if (this->gravity && !collision) {
        this->applyGravity(deltaT);
    }



    // check all collision boxes for collisions in the next update step
    // if collisions are detected, the PhysicsObject must 
    int cbsize = (int)this->colisionBoxes.size();
    int glcbsize = (int)globalcolisionBoxes.size();
    //cout << glcbsize << " " << this->velocity << "     ";
    //cout << this->velocity.x << " " << this->velocity.y << " " << this->velocity.z << "    ";
    //cout << colisionBoxes[0]->abs_minX+(this->velocity.x*(deltaT/1000.0f)) << " " << colisionBoxes[0]->abs_maxX+(this->velocity.x*(deltaT/1000.0f)) << "        ";
    for (int i=0; i<cbsize; i++) {
        for (int j=0; j<glcbsize; j++) {
            if (this->colisionBoxes[i] != globalcolisionBoxes[j]) {
                // make sure the collision box is not colliding with itself

                int gsize = (int)this->colisionBoxes[i]->groups.size();
                for (int k=0; k<gsize; k++) {
                    if (this->colisionBoxes[i]->groups[k] == globalcolisionBoxes[j]->group) {
                        // make sure that the other object is in the group that this object is looking for collisions with
                        //cout << "collision detected" << endl;
                        //cout << this->colisionBoxes[i]->abs_minX+(this->velocity.x*(deltaT/1000)) << " " << this->colisionBoxes[i]->abs_maxX+(this->velocity.x*(deltaT/1000)) << endl;
                        if (this->colisionBoxes[i]->checkCollision(globalcolisionBoxes[j], this->velocity, deltaT)) {
                            //cout << "1" << endl;
                            this->velocity = ofVec3f(0, 0, 0);
                            //this->velocity = this->colisionBoxes[i]->checkCollision_SetVelocity(globalcolisionBoxes[j], this->velocity, deltaT);
                            this->spin = ofVec3f(0, 0, 0);
                            this->colisionBoxes[i]->hasCollided = globalcolisionBoxes[j]->group;
                            globalcolisionBoxes[j]->hasCollided = this->colisionBoxes[i]->group;
                        }
                    }
                }
                //cout << "collision detected" << endl;

            }
        }
    }
    //cout << this->velocity.x << " " << this->velocity.y << " " << this->velocity.z << endl;

    this->applyVelocity(deltaT);
    this->applySpin(deltaT);

    // update all collision boxes
    for (int i=0; i<cbsize; i++) {
        this->colisionBoxes[i]->position = this->position;
        this->colisionBoxes[i]->scale = this->scale;
        this->colisionBoxes[i]->update();
    }

}