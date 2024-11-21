#ifndef CUSTOMWEAPON_H
#define CUSTOMWEAPON_H


#include "customGameObject.h"
#include "customPhysicsObjectStatic.h"

#include "cg_extras.h"
#include "cg_drawing_extras.h"

#include "ofMain.h"


class customWeapon : public customPhysicsObjectStatic {
    // weapon object, 1x1x1 block, no doors
    public:
        customWeapon(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale);

        void update() override;

        void draw2D() override;
        void draw3D() override;


        bool dropped = true;
    
};


#endif