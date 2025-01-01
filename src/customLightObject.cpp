#include "customLightObject.h"



//--------------------------------------------------------------
// public
customLightObject::customLightObject(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, int _type) : customGameObject(_position, _rotation, _scale, _color, NULL, NULL) {
    this->type = _type;

    this->Pos[0] = (GLfloat)_position[0];
    this->Pos[1] = (GLfloat)_position[1];
    this->Pos[2] = (GLfloat)_position[2];
    this->Pos[3] = 1.;

    this->Amb[0] = (GLfloat)_color[0];
    this->Amb[1] = (GLfloat)_color[1];
    this->Amb[2] = (GLfloat)_color[2];
    this->Amb[3] = 1.;

}


void customLightObject::draw2D() {
    draw3D();       // same thing anyway
}

void customLightObject::draw3D() {
    GLfloat lightcolor[4];

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

            glLightf(this->light_id, GL_SPOT_EXPONENT, 64.);
            glLightf(this->light_id, GL_SPOT_CUTOFF, 45.);

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
    this->light_id = 0;

    return this->light_id;
}

int customLightObject::lightOff() {
    if (this->light_id==-1) {
        // light already off, disable it just in case
        return light_id;
    }
    if (this->light_id!=0) {
        glDisable(this->light_id);
    }
    this->light_id==-1;

    return this->light_id;
}