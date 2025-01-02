#include "customLightObject.h"


#ifndef NLIGHTS
#define NLIGHTS 8
#endif
struct lightqueue globallightqueue[NLIGHTS] = {{false,GL_LIGHT0}, {false,GL_LIGHT1}, {false,GL_LIGHT2}, {false,GL_LIGHT3}, {false,GL_LIGHT4}, {false,GL_LIGHT5}, {false,GL_LIGHT6}, {false,GL_LIGHT7}};



//--------------------------------------------------------------
// public
customLightObject::customLightObject(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, int _type, uint64_t _lifetime) : customGameObject(_position, _rotation, _scale, _color, NULL, NULL) {
    this->type = _type;

    this->Dir[0] = .0;
    this->Dir[1] = 1.0;
    this->Dir[2] = .0;
    this->Dir[3] = 1.0;

    this->Pos[0] = (GLfloat)_position[0];
    this->Pos[1] = (GLfloat)_position[1];
    this->Pos[2] = (GLfloat)_position[2];
    this->Pos[3] = 1.;

    this->Amb[0] = (GLfloat)_color[0];
    this->Amb[1] = (GLfloat)_color[1];
    this->Amb[2] = (GLfloat)_color[2];
    this->Amb[3] = 1.;

    this->Dif[0] = 1.0;
    this->Dif[1] = 1.0;
    this->Dif[2] = 1.0;
    this->Dif[3] = 1.0;

    this->Spec[0] = 1.0;
    this->Spec[1] = 1.0;
    this->Spec[2] = 1.0;
    this->Spec[3] = 1.0;


    this->lifetime = _lifetime;
    this->birthtime = ofGetElapsedTimeMillis();     // record birthtime again when turning the light on

}


void customLightObject::update() {
    this->Pos[0] = (GLfloat)this->position[0];
    this->Pos[1] = (GLfloat)this->position[1];
    this->Pos[2] = (GLfloat)this->position[2];
    this->Pos[3] = 1.;

    this->Amb[0] = (GLfloat)this->color[0];
    this->Amb[1] = (GLfloat)this->color[1];
    this->Amb[2] = (GLfloat)this->color[2];
    this->Amb[3] = 1.;

    if (this->light_id!=0  &&  this->lifetime!=0  &&  (ofGetElapsedTimeMillis()-this->birthtime > this->lifetime)) {
        this->lightOff();
    }
}


void customLightObject::draw2D() {
    this->draw3D();       // same thing anyway
}

void customLightObject::draw3D() {
    if (this->light_id==-1) {
        // light not turned on
        return;
    }

    switch (type) {
        case 0:
            // ambient
            glLightModelfv(GL_LIGHT_MODEL_AMBIENT, this->Amb);
            break;
        
        case 1:
            // directional
            glLightfv(this->light_id, GL_POSITION, this->Dir);
            glLightfv(this->light_id, GL_AMBIENT, this->Amb);
            glLightfv(this->light_id, GL_DIFFUSE, this->Dif);
            glLightfv(this->light_id, GL_SPECULAR, this->Spec);

            glEnable(this->light_id);
            break;
        
        case 2:
            // pontual
            glLightfv(this->light_id, GL_POSITION, this->Pos);
            glLightfv(this->light_id, GL_AMBIENT, this->Amb);
            glLightfv(this->light_id, GL_DIFFUSE, this->Dif);
            glLightfv(this->light_id, GL_SPECULAR, this->Spec);

            glLightf(this->light_id, GL_CONSTANT_ATTENUATION, 1);
            glLightf(this->light_id, GL_LINEAR_ATTENUATION, 0.0001);
            glLightf(this->light_id, GL_QUADRATIC_ATTENUATION, 0.00001);

            glEnable(this->light_id);
            break;
        
        case 3:
            // spotlight
            glLightfv(this->light_id, GL_POSITION, this->Pos);
            glLightfv(this->light_id, GL_SPOT_DIRECTION, this->Dir);

            glLightfv(this->light_id, GL_AMBIENT, this->Amb);
            glLightfv(this->light_id, GL_DIFFUSE, this->Dif);
            glLightfv(this->light_id, GL_SPECULAR, this->Spec);

            glLightf(this->light_id, GL_SPOT_EXPONENT, 192.);
            glLightf(this->light_id, GL_SPOT_CUTOFF, 30.);

            glLightf(this->light_id, GL_CONSTANT_ATTENUATION, 1.);
            glLightf(this->light_id, GL_LINEAR_ATTENUATION, 0.);
            glLightf(this->light_id, GL_QUADRATIC_ATTENUATION, 0.);

            glEnable(this->light_id);
            break;
        
        default:
            cout << "crazy" << endl;
            break;
    }
}



int customLightObject::lightOn() {
    if (this->light_id!=-1) {
        // light already on, disable and enable it just in case
        if (this->light_id!=0) {
            glDisable(this->light_id);
            glEnable(this->light_id);
        }
        return this->light_id;
    }

    switch (this->type) {
        case 0:
            this->light_id = 0;
            //cout << "ambient light" << endl;
            break;
        
        case 1:
        case 2:
        case 3:
            //cout << "trying to turn on " << this << " with type " << this->type << " and light " << this->color[0] << "," << this->color[1] << "," << this->color[2] << "," << endl;
            for (int i=0; i<NLIGHTS; i++) {
                if (!globallightqueue[i].used) {
                    //cout << "found available " << i << endl;
                    globallightqueue[i].used = true;
                    this->light_id = globallightqueue[i].light_id;
                    break;
                }
            }
            break;

        default:
            break;
    }

    if (this->light_id!=-1) {
        this->birthtime = ofGetElapsedTimeMillis();
    }

    return this->light_id;
}

int customLightObject::lightOff() {
    if (this->light_id==-1) {
        // light already off
        return light_id;
    }
    if (this->light_id<GL_LIGHT0) {
        // ambient light
    } else {
        glDisable(this->light_id);
        globallightqueue[this->light_id-GL_LIGHT0].used = false;
    }

    // reset light
    glLightf(this->light_id, GL_SPOT_EXPONENT, 0.0);
    glLightf(this->light_id, GL_SPOT_CUTOFF, 180.0);
    glLightf(this->light_id, GL_CONSTANT_ATTENUATION, 1.0);
    glLightf(this->light_id, GL_LINEAR_ATTENUATION, 0.0);
    glLightf(this->light_id, GL_QUADRATIC_ATTENUATION, 0.0);

    this->light_id = -1;
    return this->light_id;
}

int customLightObject::lightToggle() {
    if (this->light_id==-1) {
        return this->lightOn();
    } else {
        return this->lightOff();
    }
}