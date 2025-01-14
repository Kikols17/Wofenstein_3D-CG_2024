#pragma once
#ifndef CUSTOMPARTICLE_H
#define CUSTOMPARTICLE_H

#include "customGameObject.h"
#include "customPhysicsObjectMovable.h"
#include "customColisionBox.h"
#include "customMaterials.h"

#include "ofMain.h"


class customParticle : public customPhysicsObjectMovable {

    public:
        customParticle(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, struct custommaterial *_material, GLfloat _fadeout, uint64_t _lifetime, int _group, vector<int> _groups);

        void update() override;

        void draw2D() override;
        void draw3D() override;
    
        using customPhysicsObjectMovable::position;
        using customPhysicsObjectMovable::rotation;
        using customPhysicsObjectMovable::scale;

        using customPhysicsObjectMovable::velocity;
        using customPhysicsObjectMovable::spin;


        GLfloat fadeout;
        uint64_t lifetime;
        uint64_t birthtime;
        bool dead = false;
};

#endif