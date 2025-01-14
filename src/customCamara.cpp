#include "customCamara.h"


//--------------------------------------------------------------
customCamara::customCamara() {
    this->looking_angleX = 0;
    this->looking_angleY = 0;
    this->looking_angleZ = 0;

    this->pos = ofVec3f(0, 0, 0);
    this->target = this->pos + this->looking;

    this->looking = ofVec3f(0, 0, 1);
    this->up = ofVec3f(0, 1, 0);

    this->right = ofVec3f(1, 0, 0);
    this->trueup = ofVec3f(0, 1, 0);
    this->front = ofVec3f(0, 0, 1);

    this->updatelooking();
}

void customCamara::update() {
    // run this every cycle
}



void customCamara::draw2D() {
    // apply the 2D camera's transformations
    glOrtho(-this->zoom*gw()/10, this->zoom*gw()/10, -this->zoom*gh()/10, this->zoom*gh()/10, 0, 100);
    lookat(this->pos.x, this->pos.y+2, this->pos.z, this->pos.x, this->pos.y, this->pos.z, 0, 0, -1);
}

void customCamara::draw3D_1() {
    // apply the 3D camera's transformations
    perspective((GLfloat)60.0, (GLfloat)4199.0, (GLfloat)4200.0);
    lookat(this->pos.x, this->pos.y, this->pos.z, this->target.x, this->target.y, this->target.z, this->up.x, this->up.y, this->up.z);

    // draw a crosshair in the center of the screen, that follows the camera's target and always faces the camera
    glPushMatrix();
        glTranslatef(this->target.x, this->target.y, this->target.z);
        glRotatef(this->looking_angleY, 0, 1, 0);
        glRotatef(-this->looking_angleZ, 0, 0, 1);
        glRotatef(this->looking_angleX, 1, 0, 0);

        glLineWidth(2.0);
        glBegin(GL_LINES);
            glColor3f(1.0, 1.0, 1.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.02, 0.0, 0.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(-0.02, 0.0, 0.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.0, 0.02, 0.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.0, -0.02, 0.0);
        glEnd();
    glPopMatrix();
}
void customCamara::draw3D_3() {
    // apply the 3D camera's transformations
    perspective((GLfloat)60.0, (GLfloat)2999.0, (GLfloat)3000.0);
    lookat(this->pos.x-this->looking.x*3, this->pos.y+0.4, this->pos.z-this->looking.z*3, this->target.x, this->target.y, this->target.z, this->up.x, this->up.y, this->up.z);

    // draw a crosshair in the center of the screen, that follows the camera's target and always faces the camera
    glPushMatrix();
        glTranslatef(this->target.x, this->target.y, this->target.z);
        glRotatef(this->looking_angleY, 0, 1, 0);
        glRotatef(-this->looking_angleZ, 0, 0, 1);
        glRotatef(this->looking_angleX, 1, 0, 0);

        glLineWidth(2.0);
        glBegin(GL_LINES);
            glColor3f(1.0, 1.0, 1.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.02, 0.0, 0.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(-0.02, 0.0, 0.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.0, 0.02, 0.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.0, -0.02, 0.0);
        glEnd();
    glPopMatrix();
}





void customCamara::moveto(GLfloat x, GLfloat y, GLfloat z) {
    // move the camera to the position x, y, z
    this->pos = ofVec3f(x, y, z);
}

void customCamara::lookingto(GLfloat x, GLfloat y, GLfloat z) {
    // move the camera to the position x, y, z
    this->looking = ofVec3f(x, y, z);
}



void customCamara::updatelooking() {
    // update the looking vector, by the angles (normalized)
    this->looking = ofVec3f(0, 0, 1);
    this->looking = rotateX(this->looking, this->looking_angleX*(PI/180));
    this->looking = rotateY(this->looking, this->looking_angleY*(PI/180));

    this->up = ofVec3f(0, 1, 0);
    this->up = rotateX(this->up, this->looking_angleX*(PI/180));
    this->up = rotateY(this->up, this->looking_angleY*(PI/180));

    this->right = ofVec3f(1, 0, 0);
    this->right = rotateY(this->right, this->looking_angleY*(PI/180));

    this->front = ofVec3f(0, 0, 1);
    this->front = rotateY(this->front, this->looking_angleY*(PI/180));

    this->trueup = ofVec3f(0, 1, 0);

    this->target = ofVec3f(this->pos.x+this->looking.x, this->pos.y+this->looking.y, this->pos.z+this->looking.z);
}
