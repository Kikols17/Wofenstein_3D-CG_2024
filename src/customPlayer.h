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


        //void walk(ofVec3f dir);


        using customGameObject::position;
        using customGameObject::rotation;
        using customGameObject::scale;

        customCamara cam;
};

#endif