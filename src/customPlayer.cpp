#include "customPlayer.h"

#include "customMaterials.h"


extern vector<shared_ptr<customGameObject>*> globalgameobjects;

extern int gamestate;

extern struct custommaterial mat_blood;
extern struct custommaterial mat_smoke;
extern struct custommaterial mat_skin;
extern struct custommaterial mat_greymetal;
extern struct custommaterial mat_gingerhair;
extern struct custommaterial mat_whiteclothes;
extern struct custommaterial mat_brownboots;

extern ofImage tex_Background;



//--------------------------------------------------------------
// public
customPlayer::customPlayer(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) : customPhysicsObjectMovable(_position, _rotation, _scale, ofVec3f(1.0,0.0,0.0), NULL, &mat_blood, vector<customColisionBox*>({new customColisionBox(_position, _rotation, _scale, ofVec3f(1.0,0.0,0.0), &mat_blood, 0, vector<int>({1,2,3}), -0.2, -0.7, -0.2, 0.2, 0.7, 0.2)})) {
    // run this to set up the object

    this->flashlight = new customLightObject( ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1), ofVec3f(1, 1, 0.8), 3, 0 );
    this->musslelight = new customLightObject( ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1), ofVec3f(1, 0.2, 0.2), 2, 500 );


}

void customPlayer::update(int viewmode) {
    // run this every cycle
    
    if (gamestate!=0) {
        return;
    }

    // run the physics update
    this->customPhysicsObjectMovable::update();
    
    this->looking(viewmode);
    this->moving(viewmode);
    this->shoot();

    this->animateWalking();

    // check if the player was shot
    for (int i=0; i<(int)this->colisionBoxes.size(); i++) {
        if (this->colisionBoxes[i]->hasBeenShot) {
            cout << "player was shot!" << endl;
            colisionBoxes[i]->hasBeenShot = false;
            health -= 5;
            if (health <= 0) {
                cout << "GAME OVER, player died!" << endl;
                gamestate = 1;
            }
            break;
        }
    }


    // update the camara
    this->cam.moveto(this->position.x, this->position.y+(this->scale.y/2)*0.8, this->position.z);
    this->cam.updatelooking();

    // update the flashlight
    this->flashlight->update();
    this->musslelight->update();
}


void customPlayer::draw2D() {
    // draw the player in 2D
    glPushMatrix();
        this->customPhysicsObjectMovable::draw2D();
        this->musslelight->draw2D();

        glColor3f(1.0, 0.8, 0.6); // skin color
        loadmaterial(&mat_skin);
        cube_unit_posscale(ofVec3f(0, 0.5, 0), ofVec3f(0.3, 0.3, 0.3)); // head
        glColor3f(0.8, 0.4, 0.0); // ginger hair
        loadmaterial(&mat_gingerhair);
        cube_unit_posscale(ofVec3f(0, 0.6, 0), ofVec3f(0.31, 0.12, 0.31)); // hair

        glColor3f(0.8, 0.8, 0.8); // light grey clothes
        loadmaterial(&mat_whiteclothes);
        cube_unit_posscale(ofVec3f(0, 0.05, 0), ofVec3f(0.35, 0.6, 0.35));  // body

        glPushMatrix();
            glTranslatef(0, -0.25, 0);        // move joint of the leg to y=0
            glRotatef(-60.0*this->walking_animation, 1, 0, 0); // animate walking
            glTranslatef(0, 0.25, 0);       // move joint of the leg back to original position  

            glColor3f(0.8, 0.8, 0.8); // light grey clothes
            loadmaterial(&mat_whiteclothes);
            cube_unit_posscale(ofVec3f(-0.1, -0.5, 0), ofVec3f(0.15, 0.5, 0.15));   // } left leg
            glColor3f(0.6, 0.3, 0.0); // brown boots
            loadmaterial(&mat_brownboots);
            cube_unit_posscale(ofVec3f(-0.1, -0.65, 0), ofVec3f(0.17, 0.25, 0.17)); // } left boot
        glPopMatrix();

        glPushMatrix();
            glTranslatef(0, -0.25, 0);        // move joint of the leg to y=0
            glRotatef(60.0*this->walking_animation, 1, 0, 0); // animate walking
            glTranslatef(0, 0.25, 0);       // move joint of the leg back to original position  

            glColor3f(0.8, 0.8, 0.8); // light grey clothes
            loadmaterial(&mat_whiteclothes);
            cube_unit_posscale(ofVec3f(0.1, -0.5, 0), ofVec3f(0.15, 0.5, 0.15));    // } right leg
            glColor3f(0.6, 0.3, 0.0); // brown boots
            loadmaterial(&mat_brownboots);
            cube_unit_posscale(ofVec3f(0.1, -0.65, 0), ofVec3f(0.17, 0.25, 0.17));  // } right boot
        glPopMatrix();


        /* ARMS */
        glPushMatrix();
            glTranslatef(-0.25, 0.1, 0.0);             // move joint of the arm to x=0, y=0, z=0
            glRotatef(this->cam.looking_angleX+85.0, 1, 0, 0);   // } rotate the arm
            glRotatef(30.0, 0, 0, 1);   // }
            glTranslatef(0.25, -0.1, 0.0);             // move joint of the arm back to original position

            glColor3f(0.8, 0.8, 0.8); // light grey clothes
            loadmaterial(&mat_whiteclothes);
            cube_unit_posscale(ofVec3f(0.25, 0.15, 0), ofVec3f(0.12, 0.4, 0.12));    // } right arm
            glColor3f(1.0, 0.8, 0.6);   // hands color
            loadmaterial(&mat_skin);
            cube_unit_posscale(ofVec3f(0.25, 0.35, 0), ofVec3f(0.11, 0.11, 0.11));    // } right hand
        glPopMatrix();

        glPushMatrix();
            glTranslatef(0.25, 0.1, 0.0);             // move joint of the arm to x=0, y=0, z=0
            glRotatef(this->cam.looking_angleX+90.0, 1, 0, 0);   // } rotate the arm
            glRotatef(-50.0, 0, 0, 1);   // }
            glTranslatef(-0.25, -0.1, 0.0);             // move joint of the arm back to original position

            glColor3f(0.8, 0.8, 0.8); // light grey clothes
            loadmaterial(&mat_whiteclothes);
            cube_unit_posscale(ofVec3f(-0.25, 0.15, 0), ofVec3f(0.12, 0.4, 0.12));    // } right arm
            glColor3f(1.0, 0.8, 0.6);   // hands color
            loadmaterial(&mat_skin);
            cube_unit_posscale(ofVec3f(-0.25, 0.35, 0), ofVec3f(0.11, 0.11, 0.11));    // } right hand
        glPopMatrix();


        /* Weapon */
        glPushMatrix();
            glTranslatef(0.0, 0.1, 0.0);             // move joint of the weapon to x=0, y=0, z=0
            glRotatef(this->cam.looking_angleX+90.0, 1, 0, 0);   // } rotate the arm
            glTranslatef(0.0, -0.1, 0.0);             // move joint of the arm back to original position

            this->flashlight->draw2D();
            glColor3f(0.15, 0.15, 0.15);    // dark grey weapon
            loadmaterial(&mat_greymetal);
            cube_unit_posscale(ofVec3f(0.05, 0.65, -0.13), ofVec3f(0.05, 0.3, 0.05));    // } weapon
        glPopMatrix();

    glPopMatrix();

    // draw background
    glPushMatrix();
        glTranslatef(this->position.x*0.8, this->position.y*0.8, this->position.z*0.8);
        tex_Background.bind();
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
        // Draw the background as a tiled texture
        glBegin(GL_QUADS);
            glTexCoord2f(0, 0);         glVertex3f(-100, -50, -100);
            glTexCoord2f(128, 0);       glVertex3f(100, -50, -100);
            glTexCoord2f(128, 128);     glVertex3f(100, -50, 100);
            glTexCoord2f(0, 128);       glVertex3f(-100, -50, 100);
        glEnd();
        tex_Background.unbind();
        glDisable(GL_TEXTURE);
    glPopMatrix();
}

void customPlayer::draw3D() {
    // draw the player in 3D
    glPushMatrix();
        this->customPhysicsObjectMovable::draw3D();
        this->musslelight->draw3D();

        glColor3f(1.0, 0.8, 0.6); // skin color
        loadmaterial(&mat_skin);
        cube_unit_posscale(ofVec3f(0, 0.5, 0), ofVec3f(0.3, 0.3, 0.3)); // head
        glColor3f(0.8, 0.4, 0.0); // ginger hair
        loadmaterial(&mat_gingerhair);
        cube_unit_posscale(ofVec3f(0, 0.6, 0), ofVec3f(0.31, 0.12, 0.31)); // hair

        glColor3f(0.8, 0.8, 0.8); // light grey clothes
        loadmaterial(&mat_whiteclothes);
        cube_unit_posscale(ofVec3f(0, 0.05, 0), ofVec3f(0.35, 0.6, 0.35));  // body

        glPushMatrix();
            glTranslatef(0, -0.25, 0);        // move joint of the leg to y=0
            glRotatef(-60.0*this->walking_animation, 1, 0, 0); // animate walking
            glTranslatef(0, 0.25, 0);       // move joint of the leg back to original position  

            glColor3f(0.8, 0.8, 0.8); // light grey clothes
            loadmaterial(&mat_whiteclothes);
            cube_unit_posscale(ofVec3f(-0.1, -0.5, 0), ofVec3f(0.15, 0.5, 0.15));   // } left leg
            glColor3f(0.6, 0.3, 0.0); // brown boots
            loadmaterial(&mat_brownboots);
            cube_unit_posscale(ofVec3f(-0.1, -0.65, 0), ofVec3f(0.17, 0.25, 0.17)); // } left boot
        glPopMatrix();

        glPushMatrix();
            glTranslatef(0, -0.25, 0);        // move joint of the leg to y=0
            glRotatef(60.0*this->walking_animation, 1, 0, 0); // animate walking
            glTranslatef(0, 0.25, 0);       // move joint of the leg back to original position  

            glColor3f(0.8, 0.8, 0.8); // light grey clothes
            loadmaterial(&mat_whiteclothes);
            cube_unit_posscale(ofVec3f(0.1, -0.5, 0), ofVec3f(0.15, 0.5, 0.15));    // } right leg
            glColor3f(0.6, 0.3, 0.0); // brown boots
            loadmaterial(&mat_brownboots);
            cube_unit_posscale(ofVec3f(0.1, -0.65, 0), ofVec3f(0.17, 0.25, 0.17));  // } right boot
        glPopMatrix();


        /* ARMS */
        glPushMatrix();
            glTranslatef(-0.25, 0.1, 0.0);             // move joint of the arm to x=0, y=0, z=0
            glRotatef(this->cam.looking_angleX+85.0, 1, 0, 0);   // } rotate the arm
            glRotatef(30.0, 0, 0, 1);   // }
            glTranslatef(0.25, -0.1, 0.0);             // move joint of the arm back to original position

            glColor3f(0.8, 0.8, 0.8); // light grey clothes
            loadmaterial(&mat_whiteclothes);
            cube_unit_posscale(ofVec3f(0.25, 0.15, 0), ofVec3f(0.12, 0.4, 0.12));    // } right arm
            glColor3f(1.0, 0.8, 0.6);   // hands color
            loadmaterial(&mat_skin);
            cube_unit_posscale(ofVec3f(0.25, 0.35, 0), ofVec3f(0.11, 0.11, 0.11));    // } right hand
        glPopMatrix();

        glPushMatrix();
            glTranslatef(0.25, 0.1, 0.0);             // move joint of the arm to x=0, y=0, z=0
            glRotatef(this->cam.looking_angleX+90.0, 1, 0, 0);   // } rotate the arm
            glRotatef(-50.0, 0, 0, 1);   // }
            glTranslatef(-0.25, -0.1, 0.0);             // move joint of the arm back to original position

            glColor3f(0.8, 0.8, 0.8); // light grey clothes
            loadmaterial(&mat_whiteclothes);
            cube_unit_posscale(ofVec3f(-0.25, 0.15, 0), ofVec3f(0.12, 0.4, 0.12));    // } right arm
            glColor3f(1.0, 0.8, 0.6);   // hands color
            loadmaterial(&mat_skin);
            cube_unit_posscale(ofVec3f(-0.25, 0.35, 0), ofVec3f(0.11, 0.11, 0.11));    // } right hand
        glPopMatrix();


        /* Weapon */
        glPushMatrix();
            glTranslatef(0.0, 0.1, 0.0);             // move joint of the weapon to x=0, y=0, z=0
            glRotatef(this->cam.looking_angleX+90.0, 1, 0, 0);   // } rotate the arm
            glTranslatef(0.0, -0.1, 0.0);             // move joint of the arm back to original position

            this->flashlight->draw2D();
            glColor3f(0.15, 0.15, 0.15);    // dark grey weapon
            loadmaterial(&mat_greymetal);
            cube_unit_posscale(ofVec3f(0.05, 0.65, -0.13), ofVec3f(0.05, 0.3, 0.05));    // } weapon
        glPopMatrix();

    glPopMatrix();


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
            this->velocity.z += -moving_speed;      // 2D
        } else {
            this->velocity.x += (this->cam.front * moving_speed).x;   // 3D
            this->velocity.z += (this->cam.front * moving_speed).z;
        }
    }


    if (this->walking_backward) {
        if (viewmode == 0) {
            this->velocity.z += moving_speed;       // 2D
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

            if (viewmode==1) {
                this->cam.looking_angleX = this->turning_speed*(ofGetMouseY() - (ofGetHeight() / 2))*0.15;
            } else {
                this->cam.looking_angleX = 0;
            }           
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
    this->musslelight->lightOn();

    //cout << "bang!" << endl;

    //ofVec3f hitpos = this->cam.pos + ( this->cam.looking*hitscan_distance(this->cam.pos, this->cam.looking, vector<int>({1})) );
    pair<customColisionBox*, GLfloat> hit = hitscan_all(this->cam.pos, this->cam.looking, vector<int>({1, 2}));
    ofVec3f hitpos = this->cam.pos + ( this->cam.looking*hit.second );
    customColisionBox* hitbox = hit.first;

    // spawn particles as mussle flash
    for (int i=0; i<10; i++) {
        customParticle* p = new customParticle(this->cam.target, ofVec3f(0, 0, 0), ofVec3f(0.07, 0.07, 0.07), ofVec3f(0.1, 0.1, 0.1), &mat_smoke, ofRandom(0.95f, 0.99f), ofRandom(1000, 3000), -1, vector<int>({}));
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
        globalgameobjects.push_back(new shared_ptr<customGameObject>(new customParticle(hitpos, ofVec3f(0, 0, 0), ofVec3f(0.05, 0.05, 0.05), hitbox->color*0.70, hitbox->material, 1.0f, ofRandom(15000, 20000), -1, vector<int>({1}) )));
        //cout << "hitpos: " << hitpos.x << " " << hitpos.y << " " << hitpos.z << endl;
        // add particles
        for (int i=0; i<25; i++) {
            customParticle* p = new customParticle(hitpos, ofVec3f(0, 0, 0), ofVec3f(0.2, 0.2, 0.2), hitbox->color*0.75, hitbox->material, ofRandom(0.95f, 0.99f), ofRandom(2000, 5000), -1, vector<int>({}) );
            p->velocity = ofVec3f(ofRandom(-1, 1), ofRandom(-1, 1), ofRandom(-1, 1));
            p->spin = ofVec3f(ofRandom(-180, 180), ofRandom(-180, 180), ofRandom(-180, 180));
            globalgameobjects.push_back(new shared_ptr<customGameObject>(p));
            //cout << "particle at " << globalgameobjects[globalgameobjects.size()-1] << endl;
        }

    } else {
        //cout << "missed" << endl;
    }

}


void customPlayer::animateWalking() {
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