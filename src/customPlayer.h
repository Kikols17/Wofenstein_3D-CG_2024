#pragma once
#ifndef CUSTOMPLAYER_H
#define CUSTOMPLAYER_H

#include "customGameObject.h"
#include "customPhysicsObjectMovable.h"
#include "customColisionBox.h"
#include "customCamara.h"
#include "customParticle.h"
#include "customLightObject.h"

#include "utils_hitscan.h"

#include "cg_drawing_extras.h"

#include "ofMain.h"


class customPlayer : public customPhysicsObjectMovable {

    public:
        customPlayer(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale);

        void update(int viewmode);

        void draw2D() override;
        void draw3D() override;


        void moving(int viewmode);
        void looking(int viewmode);
        void shoot();
        void animateWalking();

        using customPhysicsObjectMovable::position;
        using customPhysicsObjectMovable::rotation;
        using customPhysicsObjectMovable::scale;

        customCamara cam;
        bool onGround = false;
        bool running = false;

        GLfloat walking_speed = 5.0;    // } in units/second
        GLfloat running_speed = 7.0;    // }
        int turning_speed = 3;              // in degrees/second

        bool walking_forward = false;
        bool walking_backward = false;
        bool walking_left = false;
        bool walking_right = false;

        bool looking_left = false;
        bool looking_right = false;
        bool looking_up = false;
        bool looking_down = false;

        bool shooting = false;
        uint64_t last_shot = 0;
        uint64_t shot_delay = 500;  // in milliseconds

        int health = 100;

        customLightObject *flashlight;
        customLightObject *musslelight;
    
    
    private:
        GLfloat walking_animation = 0.0;
        GLfloat walking_animation_speed = 0.1;
};

#endif