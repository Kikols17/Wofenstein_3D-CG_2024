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


        void faceTarget();
        void idlemove();
        void checkTarget();

        private:
            bool checkShotsReceived();
            void explode();


            bool targetInSight = false;
    
};




#endif