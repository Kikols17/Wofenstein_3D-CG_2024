#include "customNPC.h"

#include "customMaterials.h"


extern vector<shared_ptr<customGameObject>*> globalgameobjects;
extern vector<shared_ptr<customGameObject>*> globalgameobjects_toremove;
extern vector<customColisionBox*> globalcolisionBoxes_toremove;

extern int kill_count;

extern struct custommaterial mat_blood;
extern struct custommaterial mat_smoke;



//--------------------------------------------------------------
// public
customNPC::customNPC(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, shared_ptr<customPhysicsObject>* _target) : customPhysicsObjectMovable(_position, _rotation, _scale, _color, NULL, &mat_blood, vector<customColisionBox*>({new customColisionBox(_position, _rotation, _scale, _color, &mat_blood, 2, vector<int>({1}), -0.2, -0.7, -0.2, 0.2, 0.7, 0.2)})) {
    // run this to set up the object

    this->target = _target;
    this->movingto = ofVec3f(_position.x, _position.y, _position.z);

    this->musslelight = new customLightObject( ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1), ofVec3f(1, 0.2, 0.2), 2, 500 );
}

void customNPC::update() {
    // run this every cycle

    // run the physics update
    this->customPhysicsObjectMovable::update();

    // update light
    this->musslelight->update();

    if (this->checkShotsReceived()) {
        // if the NPC has been shot, remove it from the game and explode
        //shared_ptr<customGameObject> n = shared_ptr<customGameObject>(this);
        for (int i=0; i<(int)this->colisionBoxes.size(); i++) {
            globalcolisionBoxes_toremove.push_back(this->colisionBoxes[i]);
        }
        kill_count++;
        globalgameobjects_toremove.push_back(new shared_ptr<customGameObject>(this));

        this->musslelight->lightOff();
        this->explode();
        return;     // dead
    }
    //cout << "NPC " << this << " AIstate: " << this->AIstate << endl;

    this->animateWalking();

    this->idlestand();
    this->idlemove();
    this->checkTarget();
    this->attackTarget();

    this->faceMovement();
}



void customNPC::draw2D() {
    // draw the NPC in 2D
    glPushMatrix();
        this->customPhysicsObjectMovable::draw2D();      // move to the position, rotate, and scale the NPC
        this->musslelight->draw2D();
        glEnable(GL_COLOR_MATERIAL);

        /* BODY */
        glColor3f(1.0, 0.8, 0.6);   // skin color
        cube_unit_posscale(ofVec3f(0, 0.5, 0), ofVec3f(0.3, 0.3, 0.3)); // head
        glColor3f(1.0, 0.85, 0.0);  // blonde hair
        cube_unit_posscale(ofVec3f(0, 0.6, 0), ofVec3f(0.31, 0.12, 0.31)); // hair
        glColor3f(0.3, 0.3, 0.3);    // silver helmet
        cube_unit_posscale(ofVec3f(0, 0.615, 0), ofVec3f(0.32, 0.13, 0.32)); // helmet

        glColor3f(0.0, 0.0, 1.0);   // blue eyes
        cube_unit_posscale(ofVec3f(-0.05, 0.5, 0.19), ofVec3f(0.05, 0.05, 0.05)); // } eyes
        cube_unit_posscale(ofVec3f(0.05, 0.5, 0.19), ofVec3f(0.05, 0.05, 0.05));  // }

        glColor3f(0.4, 0.25, 0.1); // brown uniform
        cube_unit_posscale(ofVec3f(0, 0.05, 0), ofVec3f(0.35, 0.6, 0.35));  // body

        /* LEGS */
        glPushMatrix();
            glTranslatef(0, -0.25, 0);        // move joint of the leg to y=0
            glRotatef(-60.0*this->walking_animation, 1, 0, 0); // animate walking
            glTranslatef(0, 0.25, 0);       // move joint of the leg back to original position  


            glColor3f(0.4, 0.25, 0.1); // brown uniform
            cube_unit_posscale(ofVec3f(-0.1, -0.5, 0), ofVec3f(0.15, 0.5, 0.15));   // } left leg
            glColor3f(0.0, 0.0, 1.0); // blue boots
            cube_unit_posscale(ofVec3f(-0.1, -0.65, 0), ofVec3f(0.17, 0.25, 0.17)); // } left boot
        glPopMatrix();

        glPushMatrix();
            glTranslatef(0, -0.25, 0);          // move joint of the leg to y=0
            glRotatef(60.0*this->walking_animation, 1, 0, 0); // animate walking
            glTranslatef(0, 0.25, 0);           // move joint of the leg back to original position  

            glColor3f(0.4, 0.25, 0.1); // brown uniform
            cube_unit_posscale(ofVec3f(0.1, -0.5, 0), ofVec3f(0.15, 0.5, 0.15));    // } right leg
            glColor3f(0.0, 0.0, 1.0); // blue boots
            cube_unit_posscale(ofVec3f(0.1, -0.65, 0), ofVec3f(0.17, 0.25, 0.17));  // } right boot
        glPopMatrix();


        /* ARMS */
        glPushMatrix();
            glTranslatef(-0.25, 0.1, 0.0);             // move joint of the arm to x=0, y=0, z=0
            glRotatef(85.0, 1, 0, 0);   // } rotate the arm
            glRotatef(30.0, 0, 0, 1);   // }
            glTranslatef(0.25, -0.1, 0.0);             // move joint of the arm back to original position

            glColor3f(0.4, 0.25, 0.1); // brown uniform
            cube_unit_posscale(ofVec3f(0.25, 0.15, 0), ofVec3f(0.12, 0.4, 0.12));    // } right arm
            glColor3f(1.0, 0.8, 0.6);   // hands color
            cube_unit_posscale(ofVec3f(0.25, 0.35, 0), ofVec3f(0.11, 0.11, 0.11));    // } right hand
        glPopMatrix();

        glPushMatrix();
            glTranslatef(0.25, 0.1, 0.0);             // move joint of the arm to x=0, y=0, z=0
            glRotatef(85.0, 1, 0, 0);   // } rotate the arm
            glRotatef(-30.0, 0, 0, 1);   // }
            glTranslatef(-0.25, -0.1, 0.0);             // move joint of the arm back to original position

            glColor3f(0.35, 0.20, 0.05); // brown uniform
            cube_unit_posscale(ofVec3f(-0.25, 0.15, 0), ofVec3f(0.12, 0.4, 0.12));    // } right arm
            glColor3f(1.0, 0.8, 0.6);   // hands color
            cube_unit_posscale(ofVec3f(-0.25, 0.35, 0), ofVec3f(0.11, 0.11, 0.11));    // } right hand
        glPopMatrix();


        /* Weapon */
        glPushMatrix();
            glTranslatef(0.0, 0.1, 0.0);             // move joint of the weapon to x=0, y=0, z=0
            glRotatef(90.0, 1, 0, 0);   // } rotate the arm
            glTranslatef(0.0, -0.1, 0.0);             // move joint of the arm back to original position

            glColor3f(0.15, 0.15, 0.15);    // dark grey weapon
            cube_unit_posscale(ofVec3f(0.05, 0.65, -0.13), ofVec3f(0.05, 0.3, 0.05));    // } weapon
        glPopMatrix();

        glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();
}

void customNPC::draw3D() {
    // draw the NPC in 3D
    glPushMatrix();
        this->customPhysicsObjectMovable::draw3D();      // move to the position, rotate, and scale the NPC
        this->musslelight->draw3D();
        glEnable(GL_COLOR_MATERIAL);

        glColor3f(1.0, 0.8, 0.6);   // skin color
        cube_unit_posscale(ofVec3f(0, 0.5, 0), ofVec3f(0.3, 0.3, 0.3)); // head
        glColor3f(1.0, 0.85, 0.0);  // blonde hair
        cube_unit_posscale(ofVec3f(0, 0.6, 0), ofVec3f(0.31, 0.12, 0.31)); // hair
        glColor3f(0.3, 0.3, 0.3);    // silver helmet
        cube_unit_posscale(ofVec3f(0, 0.615, 0), ofVec3f(0.32, 0.13, 0.32)); // helmet

        glColor3f(0.0, 0.0, 1.0);   // blue eyes
        cube_unit_posscale(ofVec3f(-0.05, 0.5, 0.19), ofVec3f(0.05, 0.05, 0.05)); // } eyes
        cube_unit_posscale(ofVec3f(0.05, 0.5, 0.19), ofVec3f(0.05, 0.05, 0.05));  // }

        glColor3f(0.4, 0.25, 0.1); // brown uniform
        cube_unit_posscale(ofVec3f(0, 0.05, 0), ofVec3f(0.35, 0.6, 0.35));  // body


        glPushMatrix();
            glTranslatef(0, -0.25, 0);        // move joint of the leg to y=0
            glRotatef(-45.0*this->walking_animation, 1, 0, 0); // animate walking
            glTranslatef(0, 0.25, 0);       // move joint of the leg back to original position  


            glColor3f(0.4, 0.25, 0.1); // brown uniform
            cube_unit_posscale(ofVec3f(-0.1, -0.5, 0), ofVec3f(0.15, 0.5, 0.15));   // } left leg
            glColor3f(0.0, 0.0, 1.0); // blue boots
            cube_unit_posscale(ofVec3f(-0.1, -0.65, 0), ofVec3f(0.17, 0.25, 0.17)); // } left boot
        glPopMatrix();

        glPushMatrix();
            glTranslatef(0, -0.25, 0);        // move joint of the leg to y=0
            glRotatef(45.0*this->walking_animation, 1, 0, 0); // animate walking
            glTranslatef(0, 0.25, 0);       // move joint of the leg back to original position  

            glColor3f(0.4, 0.25, 0.1); // brown uniform
            cube_unit_posscale(ofVec3f(0.1, -0.5, 0), ofVec3f(0.15, 0.5, 0.15));    // } right leg
            glColor3f(0.0, 0.0, 1.0); // blue boots
            cube_unit_posscale(ofVec3f(0.1, -0.65, 0), ofVec3f(0.17, 0.25, 0.17));  // } right boot
        glPopMatrix();

        
        /* ARMS */
        glPushMatrix();
            glTranslatef(-0.25, 0.1, 0.0);             // move joint of the arm to x=0, y=0, z=0
            glRotatef(85.0, 1, 0, 0);   // } rotate the arm
            glRotatef(30.0, 0, 0, 1);   // }
            glTranslatef(0.25, -0.1, 0.0);             // move joint of the arm back to original position

            glColor3f(0.35, 0.20, 0.05); // brown uniform
            cube_unit_posscale(ofVec3f(0.25, 0.15, 0), ofVec3f(0.12, 0.4, 0.12));    // } right arm
            glColor3f(1.0, 0.8, 0.6);   // hands color
            cube_unit_posscale(ofVec3f(0.25, 0.35, 0), ofVec3f(0.11, 0.11, 0.11));    // } right hand
        glPopMatrix();

        glPushMatrix();
            glTranslatef(0.25, 0.1, 0.0);             // move joint of the arm to x=0, y=0, z=0
            glRotatef(85.0, 1, 0, 0);   // } rotate the arm
            glRotatef(-30.0, 0, 0, 1);   // }
            glTranslatef(-0.25, -0.1, 0.0);             // move joint of the arm back to original position

            glColor3f(0.35, 0.20, 0.05); // brown uniform
            cube_unit_posscale(ofVec3f(-0.25, 0.15, 0), ofVec3f(0.12, 0.4, 0.12));    // } right arm
            glColor3f(1.0, 0.8, 0.6);   // hands color
            cube_unit_posscale(ofVec3f(-0.25, 0.35, 0), ofVec3f(0.11, 0.11, 0.11));    // } right hand
        glPopMatrix();


        /* Weapon */
        glPushMatrix();
            glTranslatef(0.0, 0.1, 0.0);             // move joint of the weapon to x=0, y=0, z=0
            glRotatef(90.0, 1, 0, 0);   // } rotate the arm
            glTranslatef(0.0, -0.1, 0.0);             // move joint of the arm back to original position

            glColor3f(0.15, 0.15, 0.15);    // dark grey weapon
            cube_unit_posscale(ofVec3f(0.05, 0.65, -0.13), ofVec3f(0.05, 0.3, 0.05));    // } weapon
        glPopMatrix();

        glDisable(GL_COLOR_MATERIAL);
    glPopMatrix();

}


void customNPC::faceMovement() {
    if (this->AIstate == 2) {
        // if attacking, face the target
        ofVec3f dir = (*this->target)->position - this->position;
        dir.normalize();
        this->rotation.y = glm::degrees(atan2(dir.x, dir.z));
        return;
    }
    // face the direction the NPC is moving, if 0, keep the current rotation
    if (this->velocity.x==0 && this->velocity.y==0 && this->velocity.z==0) {
        return;
    }
    ofVec3f dir = this->velocity;
    dir.normalize();
    this->rotation.y = glm::degrees(atan2(dir.x, dir.z));
    //cout << this->rotation.y << endl;
}

void customNPC::idlestand() {
    if (this->AIstate != 0) {
        return;
    }

    // stand still
    this->velocity = ofVec3f(0, 0, 0);


    ofSetRandomSeed(ofGetElapsedTimeMillis()*ofRandom(1, 1000));
    // have a 0.2% change to change state to idle moving (1)
    if (ofRandom(0, 100) < 0.2) {
        this->movingto = ofVec3f(this->position.x+ofRandom(-10, 10), this->position.y, this->position.z+ofRandom(-10, 10));
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
            if (this->colisionBoxes[i]->hasCollided!=-2) {
                this->AIstate = 0;
                //cout << "stuck" << endl;
                this->colisionBoxes[i]->hasCollided = -2;
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
            this->AIstate = 2;
            //cout << "target in sight! at " << hitpos.x << " " << hitpos.y << " " << hitpos.z << endl;
        } else {
            this->targetInSight = false;
            if (this->AIstate == 2) {
                this->AIstate = 1;
            }
        }
    } else {
        this->targetInSight = false;
        if (this->AIstate == 2) {
            this->AIstate = 1;
        }
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
    for (int i=0; i<200; i++) {
        // create particles that stick to the walls
        customParticle* p = new customParticle(this->position, ofVec3f(0, 0, 0), ofVec3f(0.2, 0.2, 0.2), this->color*ofRandom(0.60, 0.70), this->material, ofRandom(0.99f, 0.999f), ofRandom(15000, 20000), -1, vector<int>({1}));
        //customParticle* p = new customParticle(this->position, ofVec3f(0, 0, 0), ofVec3f(0.2, 0.2, 0.2), ofVec3f(ofRandom(0.0,1.0),ofRandom(0.0,1.0),ofRandom(0.0,1.0)), ofRandom(0.99f, 0.999f), ofRandom(15000, 20000), -1, vector<int>({1}));
        p->velocity = ofVec3f(ofRandom(-6, 6), ofRandom(-6, 6), ofRandom(-6, 6));
        p->spin = ofVec3f(ofRandom(-360, 360), ofRandom(-360, 360), ofRandom(-360, 360));
        p->gravity = true;
        globalgameobjects.push_back(new shared_ptr<customGameObject>(p));
    }
}

bool customNPC::attackTarget() {
    // attack the target
    // create a hitscan in the direction of the player, and check if the player is hit
    if (this->AIstate != 2) {
        return false;
    }

    // check if target is within range
    if (abs((this->position.x-(*this->target)->position.x)+(this->position.y-(*this->target)->position.y)+(this->position.z-(*this->target)->position.z)) > this->range) {
        // if not, move towards the target
        ofVec3f dir = (*this->target)->position - this->position;
        dir.normalize();
        this->velocity = dir*running_speed;
        return false;
    } else {
        this->velocity = ofVec3f(0, 0, 0);
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
    this->musslelight->lightOn();

    
    pair<customColisionBox*, GLfloat> hit = hitscan_all(this->position, this->aim_vec, vector<int>({0,1}));
    ofVec3f hitpos = this->position + (this->aim_vec*hit.second);
    customColisionBox* hitbox = hit.first;

    // spawn particles as mussle flash
    for (int i=0; i<10; i++) {
        customParticle* p = new customParticle(this->position+this->aim_vec, ofVec3f(0, 0, 0), ofVec3f(0.1, 0.1, 0.1), ofVec3f(0.1, 0.1, 0.1), &mat_smoke, ofRandom(0.95f, 0.99f), ofRandom(1000, 3000), -1, vector<int>({}));
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
        customParticle* p = new customParticle(hitpos, ofVec3f(0, 0, 0), ofVec3f(0.05, 0.05, 0.05), hitbox->color*0.70, hitbox->material, 1.0f, ofRandom(15000, 20000), -1, vector<int>({1}));
        globalgameobjects.push_back(new shared_ptr<customGameObject>(p));

        // add bullet hole
        globalgameobjects.push_back(new shared_ptr<customGameObject>(new customParticle(hitpos, ofVec3f(0, 0, 0), ofVec3f(0.05, 0.05, 0.05), hitbox->color*0.70, hitbox->material, 1.0f, ofRandom(15000, 20000), -1, vector<int>({1}))));
        //cout << "hitpos: " << hitpos.x << " " << hitpos.y << " " << hitpos.z << endl;
        // add particles
        for (int i=0; i<25; i++) {
            customParticle* p = new customParticle(hitpos, ofVec3f(0, 0, 0), ofVec3f(0.2, 0.2, 0.2), hitbox->color*0.75, hitbox->material, ofRandom(0.95f, 0.99f), ofRandom(2000, 5000), -1, vector<int>({}));
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



void customNPC::animateWalking() {
    // animate walking
    if (this->velocity.x==0.0 && this->velocity.z==0.0) {
        // if not moving, finish the walking animation
        if (this->walking_animation > 0.0) {
            this->walking_animation_speed = -0.1;
        } else if (this->walking_animation < 0.0) {
            this->walking_animation_speed = 0.1;
        } else {
            this->walking_animation_speed = 0.0;
        }
    } else if (this->walking_animation_speed == 0.0) {
        // if moving, and animation speed is 0.0, restart the walking animation
        this->walking_animation_speed = 0.1;
    }
    this->walking_animation += this->walking_animation_speed;
    if (this->walking_animation > 1.0 || this->walking_animation < -1.0) {
        this->walking_animation_speed *= -1;;
    }
}