#pragma once
#ifndef CUSTOMNPC_H
#define CUSTOMNPC_H

#include "customGameObject.h"
#include "customPhysicsObjectMovable.h"
#include "customColisionBox.h"
#include "customPlayer.h"
#include "customParticle.h"

#include "utils_hitscan.h"

#include "ofMain.h"


class customNPC : public customPhysicsObjectMovable {

    public:
        customNPC(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, shared_ptr<customPhysicsObject>* _target);

        void update() override;

        void draw2D() override;
        void draw3D() override;

        using customPhysicsObjectMovable::position;
        using customPhysicsObjectMovable::rotation;
        using customPhysicsObjectMovable::scale;
        using customPhysicsObjectMovable::color;

        using customPhysicsObjectMovable::colisionBoxes;


        shared_ptr<customPhysicsObject>* target;


        void faceMovement();
        void idlestand();
        void idlemove();
        void checkTarget();
        bool attackTarget();
        void animateWalking();


        uint64_t last_shot = 0;
        uint64_t shot_delay = 1500;  // in milliseconds
        GLfloat range = 10.0;


        GLfloat walking_speed = 3.0;    // } in units/second
        GLfloat running_speed = 5.0;    // }

        private:
            bool checkShotsReceived();
            void explode();

            int AIstate = 0;    // 0 = standing, 1 = idle moving, 2 = attack


            bool targetInSight = false;
            ofVec3f aim_vec;

            ofVec3f movingto = ofVec3f(0, 0, 0);

            GLfloat walking_animation = 0.0;
            GLfloat walking_animation_speed = 0.0;
    
};




#endif