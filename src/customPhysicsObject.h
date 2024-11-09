#pragma once
#ifndef CUSTOMPHYSICSOBJECT_H
#define CUSTOMPHYSICSOBJECT_H

#include <chrono>

#include "customGameObject.h"
#include "cg_extras.h"

#include "ofMain.h"



class customPhysicsObject : public customGameObject {

    public:
        customPhysicsObject(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale);

        void update() override;

        using customGameObject::draw2D;     // } A physics object does not draw anything special
        using customGameObject::draw3D;     // } use the draw functions from customGameObject


        using customGameObject::position;
        using customGameObject::rotation;
        using customGameObject::scale;


        ofVec3f velocity = ofVec3f(0, 0, 0);
        ofVec3f spin = ofVec3f(0, 0, 0);
    

    private:
        void applyGravity(uint64_t deltaT);
        void applyVelocity(uint64_t deltaT);
        void applySpin(uint64_t deltaT);



        uint64_t lastUpdateTime;        // int milliseconds

    
};


#endif