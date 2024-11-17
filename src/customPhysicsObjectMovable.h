#pragma once
#ifndef CUSTOMPHYSICSOBJECTMOVABLE_H
#define CUSTOMPHYSICSOBJECTMOVABLE_H

#include "customGameObject.h"
#include "customPhysicsObject.h"
#include "customColisionBox.h"

#include "ofMain.h"



class customPhysicsObjectMovable : public customPhysicsObject {

    public:
        using customPhysicsObject::customPhysicsObject;

        void update() override;

        using customPhysicsObject::draw2D;
        using customPhysicsObject::draw3D;


        using customPhysicsObject::position;
        using customPhysicsObject::rotation;
        using customPhysicsObject::scale;


    protected:
        using customPhysicsObject::lastUpdateTime;


};


#endif