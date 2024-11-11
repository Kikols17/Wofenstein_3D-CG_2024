#include "customColisionBox.h"


//--------------------------------------------------------------
customColisionBox::customColisionBox(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, GLfloat _minX, GLfloat _minY, GLfloat _minZ, GLfloat _maxX, GLfloat _maxY, GLfloat _maxZ) : customGameObject(_position, _rotation, _scale) {
    // run this to set up the object

    this->minX = _minX * _scale.x;
    this->minX = rotateY(ofVec3f(this->minX,0,0), _rotation.y).x;
    this->minX = this->minX + _position.x;

    this->minY = _minY * _scale.y;
    this->minY = rotateY(ofVec3f(0,this->minY,0), _rotation.y).y;
    this->minY = this->minY + _position.y;

    this->minZ = _minZ * _scale.z;
    this->minZ = rotateY(ofVec3f(0,0,this->minZ), _rotation.y).z;
    this->minZ = this->minZ + _position.z;


    this->maxX = _maxX * _scale.x;
    this->maxX = rotateY(ofVec3f(this->minX,0,0), _rotation.y).x;
    this->maxX = this->maxX + _position.x;

    this->maxY = _maxY * _scale.y;
    this->maxY = rotateY(ofVec3f(0,this->minY,0), _rotation.y).y;
    this->maxY = this->maxY + _position.y;

    this->maxZ = _maxZ * _scale.z;
    this->maxZ = rotateY(ofVec3f(0,0,this->minZ), _rotation.y).z;
    this->maxZ = this->maxZ + _position.z;
}



void customColisionBox::draw3D() {
    // draw the object in 2D
    glPushMatrix();

        glBegin(GL_LINE_LOOP);
            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(this->minX, this->minY, this->minZ);
            glVertex3f(this->maxX, -this->minY, this->minZ);
            glVertex3f(this->maxX, -this->minY, -this->maxZ);
            glVertex3f(this->minX, this->minY, -this->maxZ);
        glEnd();

        glBegin(GL_LINE_LOOP);
            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(-this->minX, this->maxY, this->minZ);
            glVertex3f(-this->maxX, -this->maxY, this->minZ);
            glVertex3f(-this->maxX, -this->maxY, -this->maxZ);
            glVertex3f(-this->minX, this->maxY, -this->maxZ);
        glEnd();

        glBegin(GL_LINES);
            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(this->minX, this->minY, this->minZ);
            glVertex3f(-this->minX, this->maxY, this->minZ);

            glVertex3f(this->maxX, -this->minY, this->minZ);
            glVertex3f(-this->maxX, -this->maxY, this->minZ);

            glVertex3f(this->maxX, -this->minY, -this->maxZ);
            glVertex3f(-this->maxX, -this->maxY, -this->maxZ);

            glVertex3f(this->minX, this->minY, -this->maxZ);
            glVertex3f(-this->minX, this->maxY, -this->maxZ);
        glEnd();
    glPopMatrix();
}


