#pragma once
#ifndef CUSTOMPHYSICSOBJECTSTATIC_H
#define CUSTOMPHYSICSOBJECTSTATIC_H

#include "customGameObject.h"
#include "customPhysicsObject.h"
#include "customMaterials.h"

#include "ofMain.h"



class customPhysicsObjectStatic : public customPhysicsObject {

    public:
        using customPhysicsObject::customPhysicsObject;

        void update() override;

        using customPhysicsObject::draw2D;
        using customPhysicsObject::draw3D;


        using customPhysicsObject::position;
        using customPhysicsObject::rotation;
        using customPhysicsObject::scale;

};


#endif