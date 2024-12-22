#include "customRoom_types.h"


extern int gamestate;

//--------------------------------------------------------------
// customRoom_axis
//--------------------------------------------------------------
void customRoom_axis::draw2D() {
    // draws the 2D version of the object

    glPushMatrix();
        this->customPhysicsObjectStatic::draw2D();      // move to the position, rotate, and scale the room
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
        this->customPhysicsObjectStatic::draw3D();      // move to the position, rotate, and scale the room
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
customRoom_hallway::customRoom_hallway(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) : customPhysicsObjectStatic(_position, _rotation, _scale, vector<customColisionBox*>({new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -0.52, 0.0, -0.5, -0.48, 1.0, 0.5), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), 0.48, 0.0, -0.5, 0.52, 1.0, 0.5), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -0.5, -0.04, -0.5, 0.5, 0.0, 0.5), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -0.5, 1.0, -0.5, 0.5, 1.04, 0.5)})) {
    // run this to set up the object
}

void customRoom_hallway::draw2D() {
    // draws the 2D version of the object

    glPushMatrix();
        this->customPhysicsObjectStatic::draw2D();      // move to the position, rotate, and scale the room

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
        this->customPhysicsObjectStatic::draw3D();      // move to the position, rotate, and scale the room

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
customRoom_Thallway::customRoom_Thallway(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) : customPhysicsObjectStatic(_position, _rotation, _scale, vector<customColisionBox*>( {new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -0.5, 0.0, -0.52, 0.5, 1.0, -0.48), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -0.5, -0.04, -0.5, 0.5, 0.0, 0.5), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -0.5, 1.0, -0.5, 0.5, 1.04, 0.5)} )) {
    // run this to set up the object
}
void customRoom_Thallway::draw2D() {
    // draws the 2D version of the object

    glPushMatrix();
        this->customPhysicsObjectStatic::draw2D();      // move to the position, rotate, and scale the room

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

        //glBegin(GL_POINTS);
        //    // left-front pillar
        //    glColor3f(0.2, 0.4, 0.6);
        //    glVertex3f(-0.5, 0, 0.5);

        //    // right-front pillar
        //    glColor3f(0.2, 0.4, 0.6);
        //    glVertex3f(0.5, 0, 0.5);
        //glEnd();

    glPopMatrix();
}
void customRoom_Thallway::draw3D() {
    // draws the 3D version of the object

    glPushMatrix();
        this->customPhysicsObjectStatic::draw3D();      // move to the position, rotate, and scale the room
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

        //glBegin(GL_LINES);
        //    // left-front pillar
        //    glColor3f(0.2, 0.4, 0.6);
        //    glVertex3f(-0.5, 0, 0.5);
        //    glVertex3f(-0.5, 1, 0.5);

        //    // right-front pillar
        //    glColor3f(0.2, 0.4, 0.6);
        //    glVertex3f(0.5, 0, 0.5);
        //    glVertex3f(0.5, 1, 0.5);
        //glEnd();
    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_Lhallway
//--------------------------------------------------------------
customRoom_Lhallway::customRoom_Lhallway(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) : customPhysicsObjectStatic(_position, _rotation, _scale, vector<customColisionBox*>( {new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -0.52, 0.0, -0.5, -0.48, 1.0, 0.5), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -0.5, 0.0, -0.52, 0.5, 1.0, -0.48), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -0.5, -0.04, -0.5, 0.5, 0.0, 0.5), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -0.5, 1.0, -0.5, 0.5, 1.04, 0.5)} )) {
    // run this to set up the object
}
void customRoom_Lhallway::draw2D() {
    // draws the 2D version of the object
    
    glPushMatrix();
        this->customPhysicsObjectStatic::draw2D();      // move to the position, rotate, and scale the room
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

        //glBegin(GL_POINTS);
        //    // right-front pillar
        //    glColor3f(0.2, 0.4, 0.6);
        //    glVertex3f(0.5, 0, 0.5);
        //glEnd();

    glPopMatrix();
}
void customRoom_Lhallway::draw3D() {
    // draws the 3D version of the object
    
    glPushMatrix();
        this->customPhysicsObjectStatic::draw3D();      // move to the position, rotate, and scale the room
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

        //glBegin(GL_LINES);
        //    // right-front pillar
        //    glColor3f(0.2, 0.4, 0.6);
        //    glVertex3f(0.5, 0, 0.5);
        //    glVertex3f(0.5, 1, 0.5);
        //glEnd();
    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_Xhallway
//--------------------------------------------------------------
customRoom_Xhallway::customRoom_Xhallway(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) : customPhysicsObjectStatic(_position, _rotation, _scale, ofVec3f(0.4, 0.4, 0.4), vector<customColisionBox*>( {new customColisionBox(_position, _rotation, _scale, ofVec3f(0.4, 0.4, 0.4), 1, vector<int>({}), -0.5, -0.04, -0.5, 0.5, 0.0, 0.5), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -0.5, 1.0, -0.5, 0.5, 1.04, 0.5)} )) {
    // run this to set up the object
}
void customRoom_Xhallway::draw2D() {
    // draws the 2D version of the object
    
    glPushMatrix();
        this->customPhysicsObjectStatic::draw2D();      // move to the position, rotate, and scale the room

        glColor3f(this->color.x, this->color.y, this->color.z);
        glBegin(GL_QUADS);
            // floor
            glVertex3f(-0.5, -0.1, -0.5);
            glVertex3f(0.5, -0.1, -0.5);
            glVertex3f(0.5, -0.1, 0.5);
            glVertex3f(-0.5, -0.1, 0.5);
        glEnd();

        //glBegin(GL_POINTS);
        //    // left-front pillar
        //    glColor3f(0.2, 0.4, 0.6);
        //    glVertex3f(-0.5, 0, 0.5);

        //    // right-front pillar
        //    glColor3f(0.2, 0.4, 0.6);
        //    glVertex3f(0.5, 0, 0.5);

        //    // left-back pillar
        //    glColor3f(0.2, 0.4, 0.6);
        //    glVertex3f(-0.5, 0, -0.5);

        //    // right-back pillar
        //    glColor3f(0.2, 0.4, 0.6);
        //    glVertex3f(0.5, 0, -0.5);
        //glEnd();

    glPopMatrix();
}
void customRoom_Xhallway::draw3D() {
    // draws the 3D version of the object
    
    glPushMatrix();
        this->customPhysicsObjectStatic::draw3D();      // move to the position, rotate, and scale the room

        glColor3f(this->color.x, this->color.y, this->color.z);
        glBegin(GL_QUADS);
            // floor
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // ceiling
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 1, 0.5);
            glVertex3f(-0.5, 1, 0.5);
        glEnd();

        //glBegin(GL_LINES);
        //    // left-front pillar
        //    glColor3f(0.2, 0.4, 0.6);
        //    glVertex3f(-0.5, 0, 0.5);
        //    glVertex3f(-0.5, 1, 0.5);

        //    // right-front pillar
        //    glColor3f(0.2, 0.4, 0.6);
        //    glVertex3f(0.5, 0, 0.5);
        //    glVertex3f(0.5, 1, 0.5);

        //    // left-back pillar
        //    glColor3f(0.2, 0.4, 0.6);
        //    glVertex3f(-0.5, 0, -0.5);
        //    glVertex3f(-0.5, 1, -0.5);

        //    // right-back pillar
        //    glColor3f(0.2, 0.4, 0.6);
        //    glVertex3f(0.5, 0, -0.5);
        //    glVertex3f(0.5, 1, -0.5);
        //glEnd();

    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_wall
//--------------------------------------------------------------
customRoom_wall::customRoom_wall(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) : customRoom_wall(_position, _rotation, _scale, ofVec3f(0.0, 0.0, 0.5)) {
    // run this to set up the object
}
customRoom_wall::customRoom_wall(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color) : customPhysicsObjectStatic(_position, _rotation, _scale, _color, vector<customColisionBox*>( {new customColisionBox(_position, _rotation, _scale, _color, 1, vector<int>({}), -0.5, 0.0, -0.5, 0.5, 1.0, 0.5)} )) {
    // run this to set up the object
}
void customRoom_wall::draw2D() {
    // draws the 3D version of the object
    
    glPushMatrix();
        this->customPhysicsObjectStatic::draw2D();      // move to the position, rotate, and scale the room

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
void customRoom_wall::draw3D() {
    // run this every draw cycle
    
    glPushMatrix();
        this->customPhysicsObjectStatic::draw3D();      // move to the position, rotate, and scale the 

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








//--------------------------------------------------------------
// customRoom_deadend
//--------------------------------------------------------------
customRoom_deadend::customRoom_deadend(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) : customPhysicsObjectStatic(_position, _rotation, _scale, vector<customColisionBox*>( {new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -0.52, 0.0, -0.5, -0.48, 1.0, 0.5), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -0.5, 0.0, -0.52, 0.5, 1.0, -0.48), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), 0.48, 0.0, -0.5, 0.52, 1.0, 0.5), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -0.5, -0.04, -0.5, 0.5, 0.0, 0.5), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -0.5, 1.0, -0.5, 0.5, 1.04, 0.5)} )) {
    // run this to set up the object
}
void customRoom_deadend::draw2D() {
    // run this every draw cycle
    
    glPushMatrix();
        this->customPhysicsObjectStatic::draw2D();      // move to the position, rotate, and scale the room

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
        this->customPhysicsObjectStatic::draw3D();      // move to the position, rotate, and scale the room

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
customRoom_fightingroom::customRoom_fightingroom(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) : customPhysicsObjectStatic(_position, _rotation, _scale, vector<customColisionBox*>( { new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -2.5, -0.04, -2.5, 2.5, 0.0, 2.5), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -2.5, 1.0, -2.5, 2.5, 1.04, 2.5), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -1.5, 0.0, 2.48, -0.5, 1.0, 2.52), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), 0.5, 0.0, 2.48, 1.5, 1.0, 2.52), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -1.5, 0.0, -2.52, -0.5, 1.0, -2.48), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), 0.5, 0.0, -2.52, 1.5, 1.0, -2.48), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -2.52, 0.0, -1.5, -2.48, 1.0, -0.5), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), -2.52, 0.0, 0.5, -2.48, 1.0, 1.5), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), 2.48, 0.0, -1.5, 2.52, 1.0, -0.5), new customColisionBox(_position, _rotation, _scale, 1, vector<int>({}), 2.48, 0.0, 0.5, 2.52, 1.0, 1.5)} )) {
    // run this to set up the object
}
void customRoom_fightingroom::draw2D() {
    // run this every draw cycle
    
    glPushMatrix();
        this->customPhysicsObjectStatic::draw2D();      // move to the position, rotate, and scale the room

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
        this->customPhysicsObjectStatic::draw3D();      // move to the position, rotate, and scale the room

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








//--------------------------------------------------------------
// customRoom_ramp
//--------------------------------------------------------------
void customRoom_ramp::draw2D() {
    // run this every draw cycle
    glPushMatrix();
        this->customPhysicsObjectStatic::draw2D();      // move to the position, rotate, and scale the room

        glBegin(GL_QUADS);
            // ramp
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // back wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.7);
            glVertex3f(-0.5, 0, -0.7);
        glEnd();

        glBegin(GL_TRIANGLES);
            // left wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.7, 0, -0.5);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 0, 0.5);

            // right wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.7, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            
            // arrow
            glColor3f(1.0, 0.0, 0.0);
            glVertex3f(-0.1, 0.1, 0.5);
            glVertex3f(0.1, 0.1, 0.5);
            glVertex3f(0, 1.1, -0.5);
        glEnd();
    glPopMatrix();
}

void customRoom_ramp::draw3D() {
    // run this every draw cycle
    glPushMatrix();
        this->customPhysicsObjectStatic::draw3D();      // move to the position, rotate, and scale the room

        glBegin(GL_QUADS);
            // ramp
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // floor
            glColor3f(0.6, 0.4, 0.2);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 0, 0.5);
            glVertex3f(-0.5, 0, 0.5);

            // backwall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 0, -0.5);
        glEnd();

        glBegin(GL_TRIANGLES);
            // left wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(-0.5, 0, -0.5);
            glVertex3f(-0.5, 1, -0.5);
            glVertex3f(-0.5, 0, 0.5);

            // right wall
            glColor3f(0.2, 0.4, 0.6);
            glVertex3f(0.5, 0, -0.5);
            glVertex3f(0.5, 1, -0.5);
            glVertex3f(0.5, 0, 0.5);
        glEnd();
    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_door
//--------------------------------------------------------------
customRoom_door::customRoom_door(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) : customPhysicsObjectStatic(_position, _rotation, _scale, ofVec3f(0.0, 0.7, 0.7), vector<customColisionBox*>( { new customColisionBox(_position, _rotation, _scale, ofVec3f(0.0, 0.7, 0.7), 1, vector<int>({}), -0.5, 0.0, -0.2, 0.5, 1.0, 0.2), } )) {
    // run this to set up the object
}

void customRoom_door::update() {
    // run this every update cycle
    this->customPhysicsObjectStatic::update();      // update the position, rotation, and scale of the room

    if (this->open) {
        if (this->open_percent < 0.95f) {
            this->open_percent += 0.01f;
            this->position = this->position + (0.01 * this->scale.x) * rotateY(ofVec3f(1, 0, 0), glm::radians(this->rotation.y));
        } else {
            //this->open = false;
        }
    } else {
        if (this->open_percent > 0.0f) {
            this->open_percent -= 0.01f;
            this->position = this->position - (0.01 * this->scale.x) * rotateY(ofVec3f(1, 0, 0), glm::radians(this->rotation.y));
        } else {
            //this->open = true;
        }
    }

    for (int i = 0; i < (int)this->colisionBoxes.size(); i++) {
        if (this->colisionBoxes[i]->hasCollided) {
            this->colisionBoxes[i]->hasCollided = false;
            //cout << "Player touching door" << endl;
            this->open = true;
        }
        this->colisionBoxes[i]->position = this->position;
        this->colisionBoxes[i]->update();
    }
}

void customRoom_door::draw2D() {
    // run this every draw cycle
    glPushMatrix();
        this->customPhysicsObjectStatic::draw2D();      // move to the position, rotate, and scale the room

        glColor3f(this->color.x, this->color.y, this->color.z);
        glBegin(GL_QUADS);
            // door bottom
            glVertex3f(-0.5, 0, -0.2);
            glVertex3f(0.5, 0, -0.2);
            glVertex3f(0.5, 0, 0.2);
            glVertex3f(-0.5, 0, 0.2);

            // door top
            glVertex3f(-0.5, 0.9, -0.2);
            glVertex3f(0.5, 0.9, -0.2);
            glVertex3f(0.5, 0.9, 0.2);
            glVertex3f(-0.5, 0.9, 0.2);

            // door left
            glVertex3f(-0.5, 0, -0.2);
            glVertex3f(-0.5, 0.9, -0.2);
            glVertex3f(-0.5, 0.9, 0.2);
            glVertex3f(-0.5, 0, 0.2);

            // door right
            glVertex3f(0.5, 0, -0.2);
            glVertex3f(0.5, 0.9, -0.2);
            glVertex3f(0.5, 0.9, 0.2);
            glVertex3f(0.5, 0, 0.2);

            // door back
            glVertex3f(-0.5, 0, -0.2);
            glVertex3f(-0.5, 0.9, -0.2);
            glVertex3f(0.5, 0.9, -0.2);
            glVertex3f(0.5, 0, -0.2);

            // door front
            glVertex3f(-0.5, 0, 0.2);
            glVertex3f(-0.5, 0.9, 0.2);
            glVertex3f(0.5, 0.9, 0.2);
            glVertex3f(0.5, 0, 0.2);
        glEnd();
    glPopMatrix();
}

void customRoom_door::draw3D() {
    // run this every draw cycle
    glPushMatrix();
        this->customPhysicsObjectStatic::draw3D();      // move to the position, rotate, and scale the room

        glColor3f(this->color.x, this->color.y, this->color.z);
        glBegin(GL_QUADS);
            // door bottom
            glVertex3f(-0.5, 0, -0.2);
            glVertex3f(0.5, 0, -0.2);
            glVertex3f(0.5, 0, 0.2);
            glVertex3f(-0.5, 0, 0.2);

            // door top
            glVertex3f(-0.5, 1, -0.2);
            glVertex3f(0.5, 1, -0.2);
            glVertex3f(0.5, 1, 0.2);
            glVertex3f(-0.5, 1, 0.2);

            // door left
            glVertex3f(-0.5, 0, -0.2);
            glVertex3f(-0.5, 1, -0.2);
            glVertex3f(-0.5, 1, 0.2);
            glVertex3f(-0.5, 0, 0.2);

            // door right
            glVertex3f(0.5, 0, -0.2);
            glVertex3f(0.5, 1, -0.2);
            glVertex3f(0.5, 1, 0.2);
            glVertex3f(0.5, 0, 0.2);

            // door back
            glVertex3f(-0.5, 0, -0.2);
            glVertex3f(-0.5, 1, -0.2);
            glVertex3f(0.5, 1, -0.2);
            glVertex3f(0.5, 0, -0.2);

            // door front
            glVertex3f(-0.5, 0, 0.2);
            glVertex3f(-0.5, 1, 0.2);
            glVertex3f(0.5, 1, 0.2);
            glVertex3f(0.5, 0, 0.2);
        glEnd();
    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_end
//--------------------------------------------------------------
customRoom_end::customRoom_end(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale) : customRoom_end(_position, _rotation, _scale, ofVec3f(0.0, 0.9, 0.0)) {
    // run this to call the true constructor with a default color
}

customRoom_end::customRoom_end(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color) : customPhysicsObjectStatic(_position, _rotation, _scale, _color, vector<customColisionBox*>( { new customColisionBox(_position, _rotation, _scale, 3, vector<int>({0}), -0.5, -0.5, -0.5, 0.5, 0.5, 0.5) } )) {
    // run this to set up the object
}

void customRoom_end::update() {
    // run this every update cycle
    this->customPhysicsObjectStatic::update();      // update the position, rotation, and scale of the room

    for (int i = 0; i < (int)this->colisionBoxes.size(); i++) {
        this->colisionBoxes[i]->position = this->position;
        this->colisionBoxes[i]->update();
    }

    for (int i = 0; i < (int)this->colisionBoxes.size(); i++) {
        if (this->colisionBoxes[i]->hasCollided) {
            this->color = ofVec3f(0.9, 0.0, 0.0);
            gamestate = 2;
            cout << "GAME OVER, Player won!" << endl;
        }
        this->colisionBoxes[i]->hasCollided = false;
    }
}

void customRoom_end::draw2D() {
    // run this every draw cycle
    glPushMatrix();
        this->customPhysicsObjectStatic::draw2D();      // move to the position, rotate, and scale the room

        glColor3f(this->color.x, this->color.y, this->color.z);
        cube_unit_posscale(ofVec3f(0.0, 0.0, 0.0), ofVec3f(1.1, 0.1, 1.1) );

    glPopMatrix();
}

void customRoom_end::draw3D() {
    // run this every draw cycle
    glPushMatrix();
        this->customPhysicsObjectStatic::draw3D();      // move to the position, rotate, and scale the room

        glColor3f(this->color.x, this->color.y, this->color.z);
        cube_unit_posscale(ofVec3f(0.0, 0.0, 0.0), ofVec3f(1.1, 0.1, 1.1) );

    glPopMatrix();
}