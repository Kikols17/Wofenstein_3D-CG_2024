#pragma once
#ifndef CUSTOMPHYSICSOBJECT_H
#define CUSTOMPHYSICSOBJECT_H

#include <chrono>

#include "customGameObject.h"
#include "customColisionBox.h"
#include "customMaterials.h"
#include "cg_extras.h"

#include "ofMain.h"



class customPhysicsObject : public customGameObject {

    public:
        customPhysicsObject(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, ofImage *_texture, struct custommaterial *_material, vector<customColisionBox*> _colisionBoxes);

        void update() override;

        using customGameObject::draw2D;
        using customGameObject::draw3D;


        using customGameObject::position;
        using customGameObject::rotation;
        using customGameObject::scale;


        ofVec3f velocity = ofVec3f(0, 0, 0);
        ofVec3f spin = ofVec3f(0, 0, 0);


        vector<customColisionBox*> colisionBoxes;
    

    protected:
        void applyGravity(uint64_t deltaT);
        void applyVelocity(uint64_t deltaT);
        void applySpin(uint64_t deltaT);



        uint64_t lastUpdateTime;        // int milliseconds

    
};


#endif