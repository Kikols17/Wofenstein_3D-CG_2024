#include "customPlayer.h"



//--------------------------------------------------------------
// public
customPlayer::customPlayer(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) : customPhysicsObject(_position, _rotation, _scale, vector<customColisionBox>(1, customColisionBox(_position, _rotation, _scale, -0.5, -0.5, -0.5, 0.5, 0.5, 0.5))) {
    // run this to set up the object

    this->cam = customCamara();

}

void customPlayer::update(int viewmode) {
    // run this every cycle

    // run the physics update
    this->customPhysicsObject::update();

    this->moving(viewmode);
    this->looking(viewmode);

    // update the camara
    this->cam.moveto(this->position.x, this->position.y+(this->scale.y/2)*0.8, this->position.z);
    this->cam.updatelooking();
}


void customPlayer::draw2D() {
    // draw the player in 2D
    glPushMatrix();
        this->customPhysicsObject::draw2D();      // move to the position, rotate, and scale the player
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
    this->customPhysicsObject::draw3D();
}




void customPlayer::moving(int viewmode) {
    // move the player according to the keys pressed

    if (this->walking_forward) {
        if (viewmode == 0) {
            this->position.z -= this->walking_speed;    // 2D
        } else {
            this->position += this->cam.front * this->walking_speed;    // 3D
        }
    }
    if (this->walking_backward) {
        if (viewmode == 0) {
            this->position.z += this->walking_speed;    // 2D
        } else {
            this->position -= this->cam.front * this->walking_speed;    // 3D
        }
    }
    if (this->walking_left) {
        if (viewmode == 0) {
            this->position.x -= this->walking_speed;    // 2D
        } else {
            this->position += this->cam.right * this->walking_speed;    // 3D
        }
    }
    if (this->walking_right) {
        if (viewmode == 0) {
            this->position.x += this->walking_speed;    // 2D
        } else {
            this->position -= this->cam.right * this->walking_speed;
        }
    }
    if (this->onGround) {
        if (this->walking_forward || this->walking_backward || this->walking_left || this->walking_right) {
            // play walking sound
        }
    }
}


void customPlayer::looking(int viewmode) {
    // move the player's view according to the keys pressed
    if (viewmode == 0) {
        // 2D
        this->cam.looking_angleY = atan2(ofGetMouseX() - (ofGetWidth() / 2), ofGetMouseY() - (ofGetHeight() / 2)) * (180 / PI);
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