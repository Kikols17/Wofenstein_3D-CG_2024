#include "customColisionBox.h"


//--------------------------------------------------------------
customColisionBox::customColisionBox(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, GLfloat _minX, GLfloat _minY, GLfloat _minZ, GLfloat _maxX, GLfloat _maxY, GLfloat _maxZ) : customGameObject(_position, _rotation, _scale) {
    // run this to set up the object

    this->rel_minX = _minX * _scale.x;
    this->rel_minY = _minY * _scale.y;
    this->rel_minZ = _minZ * _scale.z;

    this->rel_minX = rotateY(ofVec3f(_minX*_scale.x, _minY*_scale.y, _minZ*_scale.z), glm::radians(_rotation.y)).x;
    this->rel_minZ = rotateY(ofVec3f(_minX*_scale.x, _minY*_scale.y, _minZ*_scale.z), glm::radians(_rotation.y)).z;


    this->rel_maxX = _maxX * _scale.x;
    this->rel_maxY = _maxY * _scale.y;
    this->rel_maxZ = _maxZ * _scale.z;

    this->rel_maxX = rotateY(ofVec3f(_maxX*_scale.x, _maxY*_scale.y, _maxZ*_scale.z), glm::radians(_rotation.y)).x;
    this->rel_maxZ = rotateY(ofVec3f(_maxX*_scale.x, _maxY*_scale.y, _maxZ*_scale.z), glm::radians(_rotation.y)).z;
}



void customColisionBox::update() {
    // run this every cycle

    // get the absolute coordinates
    this->abs_minX = this->position.x + this->rel_minX;
    this->abs_minY = this->position.y + this->rel_minY;
    this->abs_minZ = this->position.z + this->rel_minZ;

    this->abs_maxX = this->position.x + this->rel_maxX;
    this->abs_maxY = this->position.y + this->rel_maxY;
    this->abs_maxZ = this->position.z + this->rel_maxZ;
}



void customColisionBox::draw3D() {
    // draw the object in 2D
    //cout << minX << " " << minY << " " << minZ << " " << maxX << " " << maxY << " " << maxZ << endl;
    glPushMatrix();

        glBegin(GL_LINE_LOOP);
            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(this->abs_minX, this->abs_minY, this->abs_minZ);
            glVertex3f(this->abs_minX, this->abs_minY, this->abs_maxZ);
            glVertex3f(this->abs_minX, this->abs_maxY, this->abs_maxZ);
            glVertex3f(this->abs_minX, this->abs_maxY, this->abs_minZ);
        glEnd();

        glBegin(GL_LINE_LOOP);
            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(this->abs_maxX, this->abs_minY, this->abs_minZ);
            glVertex3f(this->abs_maxX, this->abs_minY, this->abs_maxZ);
            glVertex3f(this->abs_maxX, this->abs_maxY, this->abs_maxZ);
            glVertex3f(this->abs_maxX, this->abs_maxY, this->abs_minZ);
        glEnd();

        glBegin(GL_LINES);
            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(this->abs_minX, this->abs_minY, this->abs_minZ);
            glVertex3f(this->abs_maxX, this->abs_minY, this->abs_minZ);

            glVertex3f(this->abs_minX, this->abs_minY, this->abs_maxZ);
            glVertex3f(this->abs_maxX, this->abs_minY, this->abs_maxZ);

            glVertex3f(this->abs_minX, this->abs_maxY, this->abs_maxZ);
            glVertex3f(this->abs_maxX, this->abs_maxY, this->abs_maxZ);

            glVertex3f(this->abs_minX, this->abs_maxY, this->abs_minZ);
            glVertex3f(this->abs_maxX, this->abs_maxY, this->abs_minZ);
        glEnd();
    glPopMatrix();
}


