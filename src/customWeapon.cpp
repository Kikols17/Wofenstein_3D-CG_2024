#include "customWeapon.h"


customWeapon::customWeapon(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) : customPhysicsObjectStatic(_position, _rotation, _scale, vector<customColisionBox*>({new customColisionBox(_position, _rotation, _scale, 3, vector<int>({}), -0.5, -0.5, -0.5, 0.5, 0.5, 0.5)})) {
    // run this to set up the object
}


void customWeapon::update() {
    // run this every update cycle
    this->customPhysicsObjectStatic::update();      // update the position, rotation, and scale of the room

    if (this->dropped) {
        //this->rotation.y += 1.0f;
    }
}


void customWeapon::draw2D() {
    // run this every draw cycle
    glPushMatrix();
        this->customPhysicsObjectStatic::draw2D();      // move to the position, rotate, and scale the room
        glBegin(GL_QUADS);
            // barrel
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.1, 0.1, 0.5);
            glVertex3f(0.1, 0.1, 0.5);
            glVertex3f(0.1, -0.1, 0.5);
            glVertex3f(-0.1, -0.1, 0.5);

            // handle
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.1, 0.1, -0.5);
            glVertex3f(0.1, 0.1, -0.5);
            glVertex3f(0.1, -0.1, -0.5);
            glVertex3f(-0.1, -0.1, -0.5);

            // left side
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.1, 0.1, 0.5);
            glVertex3f(-0.1, 0.1, -0.5);
            glVertex3f(-0.1, -0.1, -0.5);
            glVertex3f(-0.1, -0.1, 0.5);

            // right side
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.1, 0.1, 0.5);
            glVertex3f(0.1, 0.1, -0.5);
            glVertex3f(0.1, -0.1, -0.5);
            glVertex3f(0.1, -0.1, 0.5);

            // top
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.1, 0.1, 0.5);
            glVertex3f(0.1, 0.1, 0.5);
            glVertex3f(0.1, 0.1, -0.5);
            glVertex3f(-0.1, 0.1, -0.5);

            // bottom
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.1, -0.1, 0.5);
            glVertex3f(0.1, -0.1, 0.5);
            glVertex3f(0.1, -0.1, -0.5);
            glVertex3f(-0.1, -0.1, -0.5);

        glEnd();
    glPopMatrix();
}


void customWeapon::draw3D() {
    // run this every draw cycle
    glPushMatrix();
        this->customPhysicsObjectStatic::draw3D();      // move to the position, rotate, and scale the room

        cube_unit_posscale(ofVec3f(0.2f, 0.25f, 0.0f), ofVec3f(0.7f, 0.25f, 0.1f)); // barrel
        cube_unit_posscale(ofVec3f(-0.2f, 0.0f, 0.0f), ofVec3f(0.3f, 0.4f, 0.1f)); // handle


    glPopMatrix();
}