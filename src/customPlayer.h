#pragma once
#ifndef CUSTOMPLAYER_H
#define CUSTOMPLAYER_H

#include "customGameObject.h"
#include "customPhysicsObjectMovable.h"
#include "customColisionBox.h"
#include "customCamara.h"

#include "ofMain.h"


class customPlayer : public customPhysicsObjectMovable {

    public:
        customPlayer(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale);

        void update(int viewmode);

        void draw2D() override;
        void draw3D() override;


        void moving(int viewmode);
        void looking(int viewmode);

        using customPhysicsObjectMovable::position;
        using customPhysicsObjectMovable::rotation;
        using customPhysicsObjectMovable::scale;

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