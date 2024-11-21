#pragma once
#ifndef CUSTOMCAMARA_H
#define CUSTOMCAMARA_H

#include "cg_extras.h"
#include "cg_cam_extras.h"


#include "ofMain.h"



class customCamara {
    public:
        customCamara();

        virtual void update();

        virtual void draw2D();
        virtual void draw3D_1();
        virtual void draw3D_3();

        void moveto(GLfloat x, GLfloat y, GLfloat z);
        void lookingto(GLfloat x, GLfloat y, GLfloat z);
        void updatelooking();


        GLfloat looking_angleX;
        GLfloat looking_angleY;
        GLfloat looking_angleZ;


        ofVec3f pos;
        ofVec3f target;


        ofVec3f looking;
        ofVec3f up;

        ofVec3f trueup;
        ofVec3f right;
        ofVec3f front;


        GLfloat zoom = 0.05;

};



#endif