#include "customNPC.h"


extern vector<shared_ptr<customGameObject>*> globalgameobjects;
extern vector<shared_ptr<customGameObject>*> globalgameobjects_toremove;
extern vector<customColisionBox*> globalcolisionBoxes_toremove;


//--------------------------------------------------------------
// public
customNPC::customNPC(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, shared_ptr<customPhysicsObject>* _target) : customPhysicsObjectMovable(_position, _rotation, _scale, _color, vector<customColisionBox*>({new customColisionBox(_position, _rotation, _scale, _color, 2, vector<int>({1}), -0.5, -0.5, -0.5, 0.5, 0.5, 0.5)})) {
    // run this to set up the object

    this->target = _target;
    this->movingto = ofVec3f(_position.x, _position.y, _position.z);
}

void customNPC::update() {
    // run this every cycle

    // run the physics update
    this->customPhysicsObjectMovable::update();

    if (this->checkShotsReceived()) {
        // if the NPC has been shot, remove it from the game and explode
        //shared_ptr<customGameObject> n = shared_ptr<customGameObject>(this);
        for (int i=0; i<(int)this->colisionBoxes.size(); i++) {
            globalcolisionBoxes_toremove.push_back(this->colisionBoxes[i]);
        }
        globalgameobjects_toremove.push_back(new shared_ptr<customGameObject>(this));

        this->explode();
    }
    //cout << "NPC " << this << " AIstate: " << this->AIstate << endl;

    this->faceTarget();
    this->idlestand();
    this->idlemove();
    this->checkTarget();
    if (this->targetInSight) {
        this->attackTarget();
    }
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
            glVertex3f(-0.5, -0.5, -0.5);
            glVertex3f(0.5, -0.5, -0.5);
            glVertex3f(0.5, -0.5, 0.5);
            glVertex3f(-0.5, -0.5, 0.5);

            // left wall
            glVertex3f(-0.5, -0.5, -0.5);
            glVertex3f(-0.5, 0.5, -0.5);
            glVertex3f(-0.5, 0.5, 0.5);
            glVertex3f(-0.5, -0.5, 0.5);

            // right wall
            glVertex3f(0.5, -0.5, -0.5);
            glVertex3f(0.5, 0.5, -0.5);
            glVertex3f(0.5, 0.5, 0.5);
            glVertex3f(0.5, -0.5, 0.5);

            // front wall
            glVertex3f(-0.5, -0.5, 0.5);
            glVertex3f(-0.5, 0.5, 0.5);
            glVertex3f(0.5, 0.5, 0.5);
            glVertex3f(0.5, -0.5, 0.5);

            // back wall
            glVertex3f(-0.5, -0.5, -0.5);
            glVertex3f(-0.5, 0.5, -0.5);
            glVertex3f(0.5, 0.5, -0.5);
            glVertex3f(0.5, -0.5, -0.5);

            // ceiling
            glVertex3f(-0.5, 0.5, -0.5);
            glVertex3f(0.5, 0.5, -0.5);
            glVertex3f(0.5, 0.5, 0.5);
            glVertex3f(-0.5, 0.5, 0.5);
        glEnd();
    glPopMatrix();

}


void customNPC::faceTarget() {
    // face the target
    ofVec3f playerpos = (*this->target)->position;
    this->rotation.y = atan2(playerpos.x - this->position.x, playerpos.z - this->position.z) * 180 / PI;
    //cout << this->rotation.y << endl;
}

void customNPC::idlestand() {
    if (this->AIstate != 0) {
        return;
    }

    // stand still
    this->velocity = ofVec3f(0, 0, 0);

    // have a 1% change to change state to idle moving (1)
    if (ofRandom(0, 100) < 1) {
        this->movingto = ofVec3f(this->position.x+ofRandom(-10, 10), this->position.y, this->position.x+ofRandom(-10, 10));
        this->AIstate = 1;
    }
}

void customNPC::idlemove() {
    if (this->AIstate != 1) {
        return;
    }
    // move the NPC randomly
    
    // if already reached within 0.5 of the destination, change state to standing (0)
    if (abs((this->position.x-this->movingto.x)+(this->position.y-this->movingto.y)+(this->position.z-this->movingto.z)) < 0.5) {
        this->AIstate = 0;
        return;
    } else {
        
        // if the NPC hit a wall, change state to standing (0)
        for (int i=0; i<(int)this->colisionBoxes.size(); i++) {
            if (this->colisionBoxes[i]->hasCollided) {
                this->AIstate = 0;
                this->colisionBoxes[i]->hasCollided = false;
                return;
            }
        }

        // set velocity to move towards the destination
        this->AIstate = 1;
        ofVec3f dir = this->movingto - this->position;
        dir.normalize();
        this->velocity = dir*walking_speed;
        return;
    }
}

void customNPC::checkTarget() {
    // check if the target is in sight, by performing a hitscan, and checking if the player is hit
    ofVec3f playerpos = (*this->target)->position;
    ofVec3f playerdir = playerpos - this->position;
    playerdir.normalize();

    // perform hitscan in the direction of the player, and check if the player is hit
    pair<customColisionBox*, GLfloat> hit = hitscan_all(this->position, playerdir, vector<int>({0,1}));
    ofVec3f hitpos = this->position + (playerdir*hit.second);
    if (hit.first != NULL) {
        if (hit.first->group == (*target)->colisionBoxes[0]->group) {
            // the player is hit
            this->targetInSight = true;
            //cout << "target in sight! at " << hitpos.x << " " << hitpos.y << " " << hitpos.z << endl;
        } else {
            this->targetInSight = false;
        }
    } else {
        this->targetInSight = false;
    }
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
    for (int i=0; i<300; i++) {
        // create particles that stick to the walls
        customParticle* p = new customParticle(this->position, ofVec3f(0, 0, 0), ofVec3f(0.2, 0.2, 0.2), this->color*0.75, ofRandom(0.99f, 0.999f), ofRandom(15000, 20000), -1, vector<int>({1}));
        p->velocity = ofVec3f(ofRandom(-6, 6), ofRandom(-6, 6), ofRandom(-6, 6));
        p->spin = ofVec3f(ofRandom(-360, 360), ofRandom(-360, 360), ofRandom(-360, 360));
        p->gravity = true;
        globalgameobjects.push_back(new shared_ptr<customGameObject>(p));
    }
}

bool customNPC::attackTarget() {
    // attack the target
    // create a hitscan in the direction of the player, and check if the player is hit

    // check if target is within range
    if (abs((this->position.x-(*this->target)->position.x)+(this->position.y-(*this->target)->position.y)+(this->position.z-(*this->target)->position.z)) > this->range) {
        return false;
    }

    if (!(ofGetElapsedTimeMillis()-this->last_shot > this->shot_delay)) {
        // cannot shoot yet, but aim
        // this way the NPC will be shooting at where the player was, not where it is
        // so if the player is moving fast, the NPC will miss more

        // The NPC can't have perfect aim
        this->aim_vec = rotateY(ofVec3f(0.0, 0.0, 1.0), glm::radians(this->rotation.y + ofRandom(-3, 3)));
        this->aim_vec = rotateX(this->aim_vec, glm::radians(ofRandom(-3, 3)));
        this->aim_vec = rotateZ(this->aim_vec, glm::radians(ofRandom(-3, 3)));

        return false;
    }
    this->last_shot = ofGetElapsedTimeMillis();

    
    pair<customColisionBox*, GLfloat> hit = hitscan_all(this->position, this->aim_vec, vector<int>({0,1}));
    ofVec3f hitpos = this->position + (this->aim_vec*hit.second);
    customColisionBox* hitbox = hit.first;

    // add bullet hole
    customParticle* p = new customParticle(hitpos, ofVec3f(0, 0, 0), ofVec3f(0.05, 0.05, 0.05), ofVec3f(0.5, 0.5, 0.5), 1.0f, ofRandom(15000, 20000), -1, vector<int>({1}));
    globalgameobjects.push_back(new shared_ptr<customGameObject>(p));

    for (int i=0; i<10; i++) {
        customParticle* p = new customParticle(this->position+this->aim_vec, ofVec3f(0, 0, 0), ofVec3f(0.1, 0.1, 0.1), ofVec3f(0.2, 0.2, 0.2), ofRandom(0.95f, 0.99f), ofRandom(1000, 3000));
        p->velocity = this->velocity+ofVec3f(ofRandom(-1, 1), ofRandom(-1, 1), ofRandom(-1, 1));
        p->spin = ofVec3f(ofRandom(-180, 180), ofRandom(-180, 180), ofRandom(-180, 180));
        globalgameobjects.push_back(new shared_ptr<customGameObject>(p));
        //cout << "particle at " << globalgameobjects[globalgameobjects.size()-1] << endl;
    }

    // verificar se o hitbox é de um inimigo
    if (hitbox != NULL) {
        // cout << "hit smth" << endl;
        if (hitbox->group == (*target)->colisionBoxes[0]->group) {
            hitbox->hasBeenShot = true;
        }

        // add bullet hole
        globalgameobjects.push_back(new shared_ptr<customGameObject>(new customParticle(hitpos, ofVec3f(0, 0, 0), ofVec3f(0.05, 0.05, 0.05), hitbox->color*0.70, 1.0f, ofRandom(15000, 20000), -1, vector<int>({1}))));
        //cout << "hitpos: " << hitpos.x << " " << hitpos.y << " " << hitpos.z << endl;
        // add particles
        for (int i=0; i<25; i++) {
            customParticle* p = new customParticle(hitpos, ofVec3f(0, 0, 0), ofVec3f(0.2, 0.2, 0.2), hitbox->color*0.75, ofRandom(0.95f, 0.99f), ofRandom(2000, 5000));
            p->velocity = ofVec3f(ofRandom(-1, 1), ofRandom(-1, 1), ofRandom(-1, 1));
            p->spin = ofVec3f(ofRandom(-180, 180), ofRandom(-180, 180), ofRandom(-180, 180));
            globalgameobjects.push_back(new shared_ptr<customGameObject>(p));
            //cout << "particle at " << globalgameobjects[globalgameobjects.size()-1] << endl;
        }

    } else {
        //cout << "missed" << endl;
    }

    return true;
}