#include "customNPC.h"


extern vector<shared_ptr<customGameObject>> globalgameobjects;
extern vector<shared_ptr<customGameObject>> globalgameobjects_toremove;


//--------------------------------------------------------------
// public
customNPC::customNPC(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, shared_ptr<customGameObject>* _target) : customPhysicsObjectMovable(_position, _rotation, _scale, _color, vector<customColisionBox*>({new customColisionBox(_position, _rotation, _scale, _color, 2, vector<int>({1}), -0.5, -0.5, -0.5, 0.5, 0.5, 0.5)})) {
    // run this to set up the object

    this->target = _target;
}

void customNPC::update() {
    // run this every cycle

    // run the physics update
    this->customPhysicsObjectMovable::update();

    if (this->checkShotsReceived()) {
        // if the NPC has been shot, remove it from the game and explode
        shared_ptr<customGameObject> n = shared_ptr<customGameObject>(this);
        globalgameobjects_toremove.push_back(n);

        this->explode();
    }

    this->faceTarget();
    this->idlemove();
    this->checkTarget();
}



void customNPC::draw2D() {
    // draw the NPC in 2D
    glPushMatrix();
        this->customPhysicsObjectMovable::draw2D();      // move to the position, rotate, and scale the NPC

        glColor3f(this->color.x, this->color.y, this->color.z);
        glBegin(GL_QUADS);
            // floor
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // left wall
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(-0.5, 1, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // right wall
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 1, 0.5);
            glVertex3f(0.5, 0, 0.5);

            // front wall
            glVertex3f(-0.5, 0, 0.5);
            glVertex3f(-0.5, 1, 0.5);
            glVertex3f(0.5, 1, 0.5);
            glVertex3f(0.5, 0, 0.5);

            // back wall
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 0, -0.5);

            // ceiling
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 1, 0.5);
            glVertex3f(-0.5, 1, 0.5);
        glEnd();
    glPopMatrix();
}

void customNPC::draw3D() {
    // draw the NPC in 3D
    glPushMatrix();
        this->customPhysicsObjectMovable::draw3D();      // move to the position, rotate, and scale the NPC

        glColor3f(this->color.x, this->color.y, this->color.z);
        glBegin(GL_QUADS);
            // floor
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // left wall
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(-0.5, 1, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // right wall
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 1, 0.5);
            glVertex3f(0.5, 0, 0.5);

            // front wall
            glVertex3f(-0.5, 0, 0.5);
            glVertex3f(-0.5, 1, 0.5);
            glVertex3f(0.5, 1, 0.5);
            glVertex3f(0.5, 0, 0.5);

            // back wall
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 0, -0.5);

            // ceiling
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 1, 0.5);
            glVertex3f(-0.5, 1, 0.5);
        glEnd();
    glPopMatrix();

}


void customNPC::faceTarget() {
    // face the target
    ofVec3f playerpos = (*this->target)->position;
    this->rotation.y = atan2(playerpos.x - this->position.x, playerpos.z - this->position.z) * 180 / PI;
    cout << this->rotation.y << endl;
}

void customNPC::idlemove() {
    // move the NPC randomly
}

void customNPC::checkTarget() {
    // check if the target is in sight
}

bool customNPC::checkShotsReceived() {
    // check for shots received
    for (int i=0; i<(int)this->colisionBoxes.size(); i++) {
        if (colisionBoxes[i]->hasBeenShot) {
            return true;
        }
    }
    return false;
}

void customNPC::explode() {
    // explode the NPC
    for (int i=0; i<250; i++) {
        // create particles that stick to the walls
        customParticle* p = new customParticle(this->position, ofVec3f(0, 0, 0), ofVec3f(0.2, 0.2, 0.2), this->color*0.75, ofRandom(0.99f, 0.999f), ofRandom(15000, 20000), -1, vector<int>({1}));
        p->velocity = ofVec3f(ofRandom(-6, 6), ofRandom(-6, 6), ofRandom(-6, 6));
        p->spin = ofVec3f(ofRandom(-360, 360), ofRandom(-360, 360), ofRandom(-360, 360));
        globalgameobjects.push_back(shared_ptr<customGameObject>(p));
    }
}