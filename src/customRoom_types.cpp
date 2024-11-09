#include "customRoom_types.h"


//--------------------------------------------------------------
// customRoom_axis
//--------------------------------------------------------------
void customRoom_axis::update() {
    // run this every cycle
}

void customRoom_axis::draw2D() {
    // draws the 2D version of the object

    glPushMatrix();
        this->customGameObject::draw2D();      // move to the position, rotate, and scale the room
        glBegin(GL_LINES);
            glColor3f(1.0, 0.0, 0.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(1.0, 0.0, 0.0);

            glColor3f(0.0, 1.0, 0.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.0, 1.0, 0.0);

            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.0, 0.0, 1.0);
        glEnd();
    glPopMatrix();
}

void customRoom_axis::draw3D() {
    // draws the 3D version of the object

    glPushMatrix();
        this->customGameObject::draw3D();      // move to the position, rotate, and scale the room
        glBegin(GL_LINES);
            glColor3f(1.0, 0.0, 0.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(1.0, 0.0, 0.0);

            glColor3f(0.0, 1.0, 0.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.0, 1.0, 0.0);

            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.0, 0.0, 1.0);
        glEnd();
    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_hallway
//--------------------------------------------------------------
void customRoom_hallway::update() {
    // run this every update cycle
}

void customRoom_hallway::draw2D() {
    // draws the 2D version of the object

    glPushMatrix();
        this->customGameObject::draw2D();      // move to the position, rotate, and scale the room

        glBegin(GL_QUADS);
            // floor
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // left wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 0, 0.5);
            glVertex3f(-0.7, 0, 0.5);
            glVertex3f(-0.7, 0, -0.5);

            // right wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(0.7, 0, 0.5);
            glVertex3f(0.7, 0, -0.5);
        glEnd();

    glPopMatrix();
}
void customRoom_hallway::draw3D() {
    // draws the 3D version of the object

    glPushMatrix();
        this->customGameObject::draw3D();      // move to the position, rotate, and scale the room

        glBegin(GL_QUADS);
            // floor
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // left wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(-0.5, 1, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // right wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 1, 0.5);
            glVertex3f(0.5, 0, 0.5);

            // ceiling
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 1, 0.5);
            glVertex3f(-0.5, 1, 0.5);
        glEnd();

    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_Thallway
//--------------------------------------------------------------
void customRoom_Thallway::update() {
    // run this every update cycle
}

void customRoom_Thallway::draw2D() {
    // draws the 2D version of the object

    glPushMatrix();
        this->customGameObject::draw2D();      // move to the position, rotate, and scale the room

        glBegin(GL_QUADS);
            // floor
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // back wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.7);
            glVertex3f(-0.5, 0, -0.7);
        glEnd();

        glBegin(GL_POINTS);
            // left-front pillar
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, 0.5);

            // right-front pillar
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.5, 0, 0.5);
        glEnd();

    glPopMatrix();
}
void customRoom_Thallway::draw3D() {
    // draws the 3D version of the object

    glPushMatrix();
        this->customGameObject::draw3D();      // move to the position, rotate, and scale the room
        glBegin(GL_QUADS);
            // floor
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // back wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 0, -0.5);

            // ceiling
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 1, 0.5);
            glVertex3f(-0.5, 1, 0.5);
        glEnd();

        glBegin(GL_LINES);
            // left-front pillar
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, 0.5);
            glVertex3f(-0.5, 1, 0.5);

            // right-front pillar
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(0.5, 1, 0.5);
        glEnd();
    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_Lhallway
//--------------------------------------------------------------
void customRoom_Lhallway::update() {
    // run this every update cycle
}

void customRoom_Lhallway::draw2D() {
    // draws the 2D version of the object
    
    glPushMatrix();
        this->customGameObject::draw2D();      // move to the position, rotate, and scale the room
        glBegin(GL_QUADS);
            // floor
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // left wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 0, 0.5);
            glVertex3f(-0.7, 0, 0.5);
            glVertex3f(-0.7, 0, -0.5);

            // back wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.7);
            glVertex3f(-0.5, 0, -0.7);
        glEnd();

        glBegin(GL_POINTS);
            // right-front pillar
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.5, 0, 0.5);
        glEnd();

    glPopMatrix();
}
void customRoom_Lhallway::draw3D() {
    // draws the 3D version of the object
    
    glPushMatrix();
        this->customGameObject::draw3D();      // move to the position, rotate, and scale the room
        glBegin(GL_QUADS);
            // floor
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // left wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(-0.5, 1, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // back wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 0, -0.5);

            // ceiling
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 1, 0.5);
            glVertex3f(-0.5, 1, 0.5);
        glEnd();

        glBegin(GL_LINES);
            // right-front pillar
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(0.5, 1, 0.5);
        glEnd();
    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_Xhallway
//--------------------------------------------------------------
void customRoom_Xhallway::update() {
    // run this every update cycle
}

void customRoom_Xhallway::draw2D() {
    // draws the 2D version of the object
    
    glPushMatrix();
        this->customGameObject::draw2D();      // move to the position, rotate, and scale the room

        glBegin(GL_QUADS);
            // floor
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);
        glEnd();

        glBegin(GL_POINTS);
            // left-front pillar
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, 0.5);

            // right-front pillar
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.5, 0, 0.5);

            // left-back pillar
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);

            // right-back pillar
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.5, 0, -0.5);
        glEnd();

    glPopMatrix();
}
void customRoom_Xhallway::draw3D() {
    // draws the 3D version of the object
    
    glPushMatrix();
        this->customGameObject::draw3D();      // move to the position, rotate, and scale the room

        glBegin(GL_QUADS);
            // floor
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // ceiling
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 1, 0.5);
            glVertex3f(-0.5, 1, 0.5);
        glEnd();

        glBegin(GL_LINES);
            // left-front pillar
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, 0.5);
            glVertex3f(-0.5, 1, 0.5);

            // right-front pillar
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(0.5, 1, 0.5);

            // left-back pillar
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 1, -0.5);

            // right-back pillar
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 1, -0.5);
        glEnd();

    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_wall
//--------------------------------------------------------------
void customRoom_wall::update() {
    // run this every update cycle
}

void customRoom_wall::draw2D() {
    // draws the 3D version of the object
    
    glPushMatrix();
        this->customGameObject::draw2D();      // move to the position, rotate, and scale the room
        glBegin(GL_QUADS);
            // floor
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);
        glEnd();

    glPopMatrix();
}
void customRoom_wall::draw3D() {
    // run this every draw cycle
    
    glPushMatrix();
        this->customGameObject::draw3D();      // move to the position, rotate, and scale the 
        glBegin(GL_QUADS);
            // floor
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // left wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(-0.5, 1, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // right wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 1, 0.5);
            glVertex3f(0.5, 0, 0.5);

            // front wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, 0.5);
            glVertex3f(-0.5, 1, 0.5);
            glVertex3f(0.5, 1, 0.5);
            glVertex3f(0.5, 0, 0.5);

            // back wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 0, -0.5);

            // ceiling
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 1, 0.5);
            glVertex3f(-0.5, 1, 0.5);
        glEnd();

    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_deadend
//--------------------------------------------------------------
void customRoom_deadend::update() {
    // run this every update cycle
}

void customRoom_deadend::draw2D() {
    // run this every draw cycle
    
    glPushMatrix();
        this->customGameObject::draw2D();      // move to the position, rotate, and scale the room

        glBegin(GL_QUADS);
            // floor
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // left wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 0, 0.5);
            glVertex3f(-0.7, 0, 0.5);
            glVertex3f(-0.7, 0, -0.5);

            // right wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(0.7, 0, 0.5);
            glVertex3f(0.7, 0, -0.5);

            // back wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.7);
            glVertex3f(-0.5, 0, -0.7);
        glEnd();

    glPopMatrix();
}
void customRoom_deadend::draw3D() {
    // run this every draw cycle
    
    glPushMatrix();
        this->customGameObject::draw3D();      // move to the position, rotate, and scale the room

        glBegin(GL_QUADS);
            // floor
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // left wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(-0.5, 1, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // right wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 1, 0.5);
            glVertex3f(0.5, 0, 0.5);

            // back wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 0, -0.5);

            // ceiling
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 1, 0.5);
            glVertex3f(-0.5, 1, 0.5);
        glEnd();

    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_fightingroom
//--------------------------------------------------------------
void customRoom_fightingroom::update() {
    // run this every update cycle
}

void customRoom_fightingroom::draw2D() {
    // run this every draw cycle
    
    glPushMatrix();
        this->customGameObject::draw2D();      // move to the position, rotate, and scale the room

        glBegin(GL_POLYGON);
            // floor
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-1.5, 0, -2.5);
            glVertex3f(-2.5, 0, -1.5);
            glVertex3f(-2.5, 0, 1.5);
            glVertex3f(-1.5, 0, 2.5);
            glVertex3f(1.5, 0, 2.5);
            glVertex3f(2.5, 0, 1.5);
            glVertex3f(2.5, 0, -1.5);
            glVertex3f(1.5, 0, -2.5);
        glEnd();

        glBegin(GL_POLYGON);
            // back-left corner wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -2.7);
            glVertex3f(-1.5, 0, -2.7);
            glVertex3f(-2.7, 0, -1.5);
            glVertex3f(-2.7, 0, -0.5);
            glVertex3f(-0.5, 0, -0.5);
        glEnd();

        glBegin(GL_POLYGON);
            // back-right corner wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.5, 0, -2.7);
            glVertex3f(1.5, 0, -2.7);
            glVertex3f(2.7, 0, -1.5);
            glVertex3f(2.7, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
        glEnd();

        glBegin(GL_POLYGON);
            // front-right corner wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.5, 0, 2.7);
            glVertex3f(1.5, 0, 2.7);
            glVertex3f(2.7, 0, 1.5);
            glVertex3f(2.7, 0, 0.5);
            glVertex3f(0.5, 0, 0.5);
        glEnd();

        glBegin(GL_POLYGON);
            // front-left corner wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, 2.7);
            glVertex3f(-1.5, 0, 2.7);
            glVertex3f(-2.7, 0, 1.5);
            glVertex3f(-2.7, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);
        glEnd();




    glPopMatrix();
}
void customRoom_fightingroom::draw3D() {
    // run this every draw cycle
    
    glPushMatrix();
        this->customGameObject::draw3D();      // move to the position, rotate, and scale the room

        glBegin(GL_POLYGON);
            // floor
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-1.5, 0, -2.5);
            glVertex3f(-2.5, 0, -1.5);
            glVertex3f(-2.5, 0, 1.5);
            glVertex3f(-1.5, 0, 2.5);
            glVertex3f(1.5, 0, 2.5);
            glVertex3f(2.5, 0, 1.5);
            glVertex3f(2.5, 0, -1.5);
            glVertex3f(1.5, 0, -2.5);
        glEnd();

        glBegin(GL_POLYGON);
            // ceiling
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-1.5, 1, -2.5);
            glVertex3f(-2.5, 1, -1.5);
            glVertex3f(-2.5, 1, 1.5);
            glVertex3f(-1.5, 1, 2.5);
            glVertex3f(1.5, 1, 2.5);
            glVertex3f(2.5, 1, 1.5);
            glVertex3f(2.5, 1, -1.5);
            glVertex3f(1.5, 1, -2.5);
        glEnd();

        glBegin(GL_QUADS);
            // back-left corner wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-1.5, 0, -2.5);
            glVertex3f(-1.5, 1, -2.5);
            glVertex3f(-2.5, 1, -1.5);
            glVertex3f(-2.5, 0, -1.5);

            // back-right corner wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(1.5, 0, -2.5);
            glVertex3f(1.5, 1, -2.5);
            glVertex3f(2.5, 1, -1.5);
            glVertex3f(2.5, 0, -1.5);

            // front-right corner wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(1.5, 0, 2.5);
            glVertex3f(1.5, 1, 2.5);
            glVertex3f(2.5, 1, 1.5);
            glVertex3f(2.5, 0, 1.5);

            // front-left corner wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-1.5, 0, 2.5);
            glVertex3f(-1.5, 1, 2.5);
            glVertex3f(-2.5, 1, 1.5);
            glVertex3f(-2.5, 0, 1.5);

            // back wall left
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-1.5, 0, -2.5);
            glVertex3f(-1.5, 1, -2.5);
            glVertex3f(-0.5, 1, -2.5);
            glVertex3f(-0.5, 0, -2.5);

            // back wall right
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(1.5, 0, -2.5);
            glVertex3f(1.5, 1, -2.5);
            glVertex3f(0.5, 1, -2.5);
            glVertex3f(0.5, 0, -2.5);

            // right wall left
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(2.5, 0, -1.5);
            glVertex3f(2.5, 1, -1.5);
            glVertex3f(2.5, 1, -0.5);
            glVertex3f(2.5, 0, -0.5);

            // right wall right
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(2.5, 0, 1.5);
            glVertex3f(2.5, 1, 1.5);
            glVertex3f(2.5, 1, 0.5);
            glVertex3f(2.5, 0, 0.5);

            // front wall right
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-1.5, 0, 2.5);
            glVertex3f(-1.5, 1, 2.5);
            glVertex3f(-0.5, 1, 2.5);
            glVertex3f(-0.5, 0, 2.5);

            // front wall left
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(1.5, 0, 2.5);
            glVertex3f(1.5, 1, 2.5);
            glVertex3f(0.5, 1, 2.5);
            glVertex3f(0.5, 0, 2.5);

            // left wall left
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-2.5, 0, -1.5);
            glVertex3f(-2.5, 1, -1.5);
            glVertex3f(-2.5, 1, -0.5);
            glVertex3f(-2.5, 0, -0.5);

            // left wall right
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-2.5, 0, 1.5);
            glVertex3f(-2.5, 1, 1.5);
            glVertex3f(-2.5, 1, 0.5);
            glVertex3f(-2.5, 0, 0.5);

        glEnd();

    glPopMatrix();
}
