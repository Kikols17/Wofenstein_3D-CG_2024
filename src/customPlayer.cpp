#include "customPlayer.h"


extern vector<shared_ptr<customGameObject>*> globalgameobjects;



//--------------------------------------------------------------
// public
customPlayer::customPlayer(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) : customPhysicsObjectMovable(_position, _rotation, _scale, vector<customColisionBox*>({new customColisionBox(_position, _rotation, _scale, ofVec3f(1.0,0.0,0.0), 0, vector<int>({1}), -0.5, -0.5, -0.5, 0.5, 0.5, 0.5)})) {
    // run this to set up the object

    this->cam = customCamara();

}

void customPlayer::update(int viewmode) {
    // run this every cycle

    // run the physics update
    this->customPhysicsObjectMovable::update();

    this->moving(viewmode);
    this->looking(viewmode);
    this->shoot();

    // check if the player was shot
    for (int i=0; i<(int)this->colisionBoxes.size(); i++) {
        if (this->colisionBoxes[i]->hasBeenShot) {
            cout << "player was shot!" << endl;
            colisionBoxes[i]->hasBeenShot = false;
            health -= 10;
            if (health <= 0) {
                cout << "player died!" << endl;
            }
            break;
        }
    }

    // update the camara
    this->cam.moveto(this->position.x, this->position.y+(this->scale.y/2)*0.8, this->position.z);
    this->cam.updatelooking();
}


void customPlayer::draw2D() {
    // draw the player in 2D
    glPushMatrix();
        this->customPhysicsObjectMovable::draw2D();      // move to the position, rotate, and scale the player
        glBegin(GL_QUADS);
            glColor3f(0.0, 0.0, 0.0);
            glVertex3f(0.2, 0, 0.28);
            glVertex3f(-0.2, 0, 0.28);
            glVertex3f(-0.2, 0, 0.0);
            glVertex3f(0.2, 0, 0.0);

            glColor3f(0.2, 0.2, 0.2);
            glVertex3f(-0.28, 0, -0.28);
            glVertex3f(0.28, 0, -0.28);
            glVertex3f(0.28, 0, 0.28);
            glVertex3f(-0.28, 0, 0.28);

            glColor3f(0.0, 0.4, 0.0);
            glVertex3f(-0.5, 0, -0.2);
            glVertex3f(0.5, 0, -0.2);
            glVertex3f(0.5, 0, 0.2);
            glVertex3f(-0.5, 0, 0.2);
        glEnd();
    glPopMatrix();
}

void customPlayer::draw3D() {
    // draw the player in 3D
    this->customPhysicsObjectMovable::draw3D();
}




void customPlayer::moving(int viewmode) {
    // move the player according to the keys pressed

    GLfloat moving_speed;
    if (this->running) {
        moving_speed = this->running_speed;
    } else {
        moving_speed = this->walking_speed;
    }

    this->velocity = ofVec3f(0, this->velocity.y, 0);
    if (this->walking_forward) {
        if (viewmode == 0) {
            this->velocity.z += -moving_speed;
        } else {
            this->velocity.x += (this->cam.front * moving_speed).x;   // 3D
            this->velocity.z += (this->cam.front * moving_speed).z;
        }
    }


    if (this->walking_backward) {
        if (viewmode == 0) {
            this->velocity.z += moving_speed;
        } else {
            this->velocity.x += -(this->cam.front * moving_speed).x;   // 3D
            this->velocity.z += -(this->cam.front * moving_speed).z;
        }
    }


    if (this->walking_left) {
        if (viewmode == 0) {
            this->velocity.x += -moving_speed;      // 2D
        } else {
            this->velocity.x += (this->cam.right * moving_speed).x;   // 3D
            this->velocity.z += (this->cam.right * moving_speed).z;
        }
    }


    if (this->walking_right) {
        if (viewmode == 0) {
            this->velocity.x += moving_speed;       // 2D
        } else {
            this->velocity.x += -(this->cam.right * moving_speed).x;   // 3D
            this->velocity.z += -(this->cam.right * moving_speed).z;
        }
    }
    //cout << this->velocity.x << " " << this->velocity.y << " " << this->velocity.z << endl;
}


void customPlayer::looking(int viewmode) {
    // move the player's view according to the keys pressed
    if (viewmode == 0) {
        // 2D
        this->cam.looking_angleY = atan2(ofGetMouseX() - (ofGetWidth() / 2), ofGetMouseY() - (ofGetHeight() / 2)) * (180 / PI);
        this->cam.looking_angleX = 0;
        this->rotation.y = this->cam.looking_angleY;
    } else {
        // 3D
        if (1) {
            // mouse mode
            this->rotation.y = -this->turning_speed*(ofGetMouseX() - (ofGetWidth() / 2))*0.15;
            this->cam.looking_angleY = this->rotation.y;

            this->cam.looking_angleX = this->turning_speed*(ofGetMouseY() - (ofGetHeight() / 2))*0.15;            
        } else {
            // arrow keys mode
            this->rotation.y += this->turning_speed*this->looking_left;
            this->cam.looking_angleY = this->rotation.y;

            this->rotation.y -= this->turning_speed*this->looking_right;
            this->cam.looking_angleY = this->rotation.y;

            this->cam.looking_angleX -= this->turning_speed*this->looking_up;

            this->cam.looking_angleX += this->turning_speed*this->looking_down;
        }

        // cap the angles at 89 degrees, so the player doesn't flip
        if (this->cam.looking_angleX > 89) {
            this->cam.looking_angleX = 89;
        }
        if (this->cam.looking_angleX < -89) {
            this->cam.looking_angleX = -89;
        }
    }
}

void customPlayer::shoot() {
    // shoot a bullet
    //cout << "looking: " << this->cam.looking.x << " " << this->cam.looking.y << " " << this->cam.looking.z << endl;
    if (!this->shooting) {
        return;
    }

    if (!(ofGetElapsedTimeMillis()-this->last_shot > this->shot_delay)) {
        // cannot shoot yet
        return;
    }
    this->last_shot = ofGetElapsedTimeMillis();

    //cout << "bang!" << endl;

    //ofVec3f hitpos = this->cam.pos + ( this->cam.looking*hitscan_distance(this->cam.pos, this->cam.looking, vector<int>({1})) );
    pair<customColisionBox*, GLfloat> hit = hitscan_all(this->cam.pos, this->cam.looking, vector<int>({1, 2}));
    ofVec3f hitpos = this->cam.pos + ( this->cam.looking*hit.second );
    customColisionBox* hitbox = hit.first;

    // spawn particles as mussle flash
    for (int i=0; i<10; i++) {
        customParticle* p = new customParticle(this->cam.target, ofVec3f(0, 0, 0), ofVec3f(0.07, 0.07, 0.07), ofVec3f(0.3, 0.3, 0.3), ofRandom(0.95f, 0.99f), ofRandom(1000, 3000));
        p->velocity = this->velocity+ofVec3f(ofRandom(-1, 1), ofRandom(-1, 1), ofRandom(-1, 1));
        p->spin = ofVec3f(ofRandom(-180, 180), ofRandom(-180, 180), ofRandom(-180, 180));
        globalgameobjects.push_back(new shared_ptr<customGameObject>(p));
        //cout << "particle at " << globalgameobjects[globalgameobjects.size()-1] << endl;
    }

    // verificar se o hitbox é de um inimigo
    if (hitbox != NULL) {
        // cout << "hit smth" << endl;
        if (hitbox->group != 0) {
            //cout << "hit an enemy!" << endl;
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

}