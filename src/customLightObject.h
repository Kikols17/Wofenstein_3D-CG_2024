#pragma once
#ifndef CUSTOMLIGHTOBJECT_H
#define CUSTOMLIGHTOBJECT_H



#include "customGameObject.h"
#include "cg_extras.h"

#include "ofMain.h"


class customLightObject : public customGameObject {

    public:
        customLightObject(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, int _type, uint64_t lifetime);

        void update() override;

        void draw2D() override;
        void draw3D() override;

        int lightOn();
        int lightOff();
        int lightToggle();


        using customGameObject::position;
        using customGameObject::rotation;
        using customGameObject::scale;
        using customGameObject::color;

        bool debounce = false;

        uint64_t lifetime;
        uint64_t birthtime;

    

    protected:
        int type;       // 0: ambient    1: direcional    2: pontual    3: spotlight
        int light_id = -1;

        GLfloat Dir[4];
        GLfloat Pos[4];
        GLfloat Amb[4];
        GLfloat Dif[4];
        GLfloat Spec[4];

};


struct lightqueue {
    bool used;
    int light_id;
};



#endif