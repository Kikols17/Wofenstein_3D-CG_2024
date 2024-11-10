#pragma once
#ifndef CUSTOMPLAYER_H
#define CUSTOMPLAYER_H

#include "customGameObject.h"
#include "customPhysicsObject.h"
#include "customCamara.h"

#include "ofMain.h"


class customPlayer : public customPhysicsObject {

    public:
        customPlayer(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale);

        void update();

        using customPhysicsObject::draw2D;
        using customPhysicsObject::draw3D;


        void moving();
        void looking();

        using customGameObject::position;
        using customGameObject::rotation;
        using customGameObject::scale;

        customCamara cam;
        bool onGround = false;

        GLfloat walking_speed = 0.1;    // in units/second
        int turning_speed = 3;          // in degrees/second

        bool walking_forward = false;
        bool walking_backward = false;
        bool walking_left = false;
        bool walking_right = false;

        bool looking_left = false;
        bool looking_right = false;
        bool looking_up = false;
        bool looking_down = false;
};

#endif