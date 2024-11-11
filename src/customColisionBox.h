#pragma once
#ifndef CUSTOMCOLISIONBOX_H
#define CUSTOMCOLISIONBOX_H

#include "customGameObject.h"
#include "cg_extras.h"

#include "ofMain.h"


class customColisionBox : public customGameObject {

    public:
        customColisionBox(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, GLfloat _minX, GLfloat _minY, GLfloat _minZ, GLfloat _maxX, GLfloat _maxY, GLfloat _maxZ);

        using customGameObject::update;

        using customGameObject::draw2D;
        void draw3D() override;


        using customGameObject::position;
        using customGameObject::rotation;
        using customGameObject::scale;

        GLfloat minX;
        GLfloat minY;
        GLfloat minZ;

        GLfloat maxX;
        GLfloat maxY;
        GLfloat maxZ;
};

#endif