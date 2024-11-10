#include "customPlayer.h"



//--------------------------------------------------------------
// public
customPlayer::customPlayer(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) : customPhysicsObject(_position, _rotation, _scale) {
    // run this to set up the object

    this->cam = customCamara();

}

void customPlayer::update() {
    // run this every cycle

    // run the physics update
    //this->customPhysicsObject::update();

    this->moving();
    this->looking();

    // update the camara
    this->cam.moveto(this->position.x, this->position.y+(this->scale.y/2)*0.8, this->position.z);
    this->cam.updatelooking();
}


void customPlayer::draw2D() {
    // draw the player in 2D
    glPushMatrix();
        this->customPhysicsObject::draw2D();      // move to the position, rotate, and scale the player
        glBegin(GL_QUADS);
            glColor3f(0.0, 1.0, 0.0);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);
        glEnd();
    glPopMatrix();
}

void customPlayer::draw3D() {
    // draw the player in 3D
    //this->customPhysicsObject::draw3D();
}




void customPlayer::moving() {
    // move the player according to the keys pressed

    if (this->walking_forward) {
        this->position += this->cam.front * this->walking_speed;
    }
    if (this->walking_backward) {
        this->position -= this->cam.front * this->walking_speed;
    }
    if (this->walking_left) {
        this->position += this->cam.right * this->walking_speed;
    }
    if (this->walking_right) {
        this->position -= this->cam.right * this->walking_speed;
    }
    if (this->onGround) {
        if (this->walking_forward || this->walking_backward || this->walking_left || this->walking_right) {
            // play walking sound
        }
    }
}


void customPlayer::looking() {
    // move the player's view according to the keys pressed

    if (this->looking_left) {
        this->cam.looking_angleY += this->turning_speed;
    }
    if (this->looking_right) {
        this->cam.looking_angleY -= this->turning_speed;
    }
    if (this->looking_up) {
        this->cam.looking_angleX -= this->turning_speed;
    }
    if (this->looking_down) {
        this->cam.looking_angleX += this->turning_speed;
    }
}