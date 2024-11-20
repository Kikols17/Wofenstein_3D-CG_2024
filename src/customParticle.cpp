#include "customParticle.h"


extern vector<shared_ptr<customGameObject>*> globalgameobjects_toremove;
extern vector<customColisionBox*> globalcolisionBoxes_toremove;


//--------------------------------------------------------------
// public
customParticle::customParticle(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, GLfloat fadeout, uint64_t _lifetime) : customParticle(_position, _rotation, _scale, _color, fadeout, _lifetime, -1, vector<int>({})) {
    // do nothing, call true constructor
}
customParticle::customParticle(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, GLfloat fadeout, uint64_t _lifetime, int _group, vector<int> _groups) : customPhysicsObjectMovable(_position, _rotation, _scale, _color, vector<customColisionBox*>({new customColisionBox(_position, _rotation, _scale, _color, _group, _groups, -0.5, -0.5, -0.5, 0.5, 0.5, 0.5)})) {
    // run this to set up the object
    this->fadeout = fadeout;
    this->lifetime = _lifetime;
    this->birthtime = ofGetElapsedTimeMillis();
    //cout << "particle created at time " << this->birthtime << endl;
    //cout << "particle will die at time " << this->birthtime+this->lifetime << endl;
    //cout << endl;
}

void customParticle::update() {
    // run this every cycle
    if (this->dead) {
        return;
    }

    // run the physics update
    this->customPhysicsObjectMovable::update();

    // shrink the particle
    this->scale = this->scale * this->fadeout;

    for (int i=0; i<(int)this->colisionBoxes.size(); i++) {
        this->colisionBoxes[i]->scale = this->scale;
        this->colisionBoxes[i]->update();
    }

    if (ofGetElapsedTimeMillis() - this->birthtime > this->lifetime) {
        // Set the particle and all its colisionBoxes to be removed
        //cout << "particle out of time" << endl;
        //cout << "out of time " << p << endl;
        for (int i=0; i<(int)this->colisionBoxes.size(); i++) {
            globalcolisionBoxes_toremove.push_back(this->colisionBoxes[i]);
        }
        globalgameobjects_toremove.push_back( new shared_ptr<customGameObject>(this) );
        this->dead = true;
    }
}

void customParticle::draw2D() {
    // draw the particle in 2D
    glPushMatrix();
        this->customPhysicsObjectMovable::draw2D();      // move to the position, rotate, and scale the particle
        glBegin(GL_QUADS);
            glColor3f(this->color.x, this->color.y, this->color.z);
            glVertex3f(-0.5, -0.5, -0.5);
            glVertex3f(0.5, -0.5, -0.5);
            glVertex3f(0.5, 0.5, -0.5);
            glVertex3f(-0.5, 0.5, -0.5);

            glColor3f(this->color.x+0.05, this->color.y-0.03, this->color.z-0.04);
            glVertex3f(-0.5, -0.5, 0.5);
            glVertex3f(0.5, -0.5, 0.5);
            glVertex3f(0.5, 0.5, 0.5);
            glVertex3f(-0.5, 0.5, 0.5);

            glColor3f(this->color.x-0.02, this->color.y-0.06, this->color.z+0.02);
            glVertex3f(-0.5, -0.5, -0.5);
            glVertex3f(-0.5, 0.5, -0.5);
            glVertex3f(-0.5, 0.5, 0.5);
            glVertex3f(-0.5, -0.5, 0.5);

            glColor3f(this->color.x+0.03, this->color.y+0.02, this->color.z-0.01);
            glVertex3f(0.5, -0.5, -0.5);
            glVertex3f(0.5, 0.5, -0.5);
            glVertex3f(0.5, 0.5, 0.5);
            glVertex3f(0.5, -0.5, 0.5);

            glColor3f(this->color.x-0.01, this->color.y+0.03, this->color.z-0.02);
            glVertex3f(-0.5, -0.5, -0.5);
            glVertex3f(0.5, -0.5, -0.5);
            glVertex3f(0.5, -0.5, 0.5);
            glVertex3f(-0.5, -0.5, 0.5);

            glColor3f(this->color.x+0.02, this->color.y-0.01, this->color.z+0.03);
            glVertex3f(-0.5, 0.5, -0.5);
            glVertex3f(0.5, 0.5, -0.5);
            glVertex3f(0.5, 0.5, 0.5);
            glVertex3f(-0.5, 0.5, 0.5);
        glEnd();
    glPopMatrix();
}


void customParticle::draw3D() {
    // draw the particle in 3D
    glPushMatrix();
        this->customPhysicsObjectMovable::draw3D();      // move to the position, rotate, and scale the particle
        glBegin(GL_QUADS);
            glColor3f(this->color.x, this->color.y, this->color.z);
            glVertex3f(-0.5, -0.5, -0.5);
            glVertex3f(0.5, -0.5, -0.5);
            glVertex3f(0.5, 0.5, -0.5);
            glVertex3f(-0.5, 0.5, -0.5);

            glColor3f(this->color.x+0.05, this->color.y-0.03, this->color.z-0.04);
            glVertex3f(-0.5, -0.5, 0.5);
            glVertex3f(0.5, -0.5, 0.5);
            glVertex3f(0.5, 0.5, 0.5);
            glVertex3f(-0.5, 0.5, 0.5);

            glColor3f(this->color.x-0.02, this->color.y-0.04, this->color.z+0.02);
            glVertex3f(-0.5, -0.5, -0.5);
            glVertex3f(-0.5, 0.5, -0.5);
            glVertex3f(-0.5, 0.5, 0.5);
            glVertex3f(-0.5, -0.5, 0.5);

            glColor3f(this->color.x+0.03, this->color.y+0.02, this->color.z-0.01);
            glVertex3f(0.5, -0.5, -0.5);
            glVertex3f(0.5, 0.5, -0.5);
            glVertex3f(0.5, 0.5, 0.5);
            glVertex3f(0.5, -0.5, 0.5);

            glColor3f(this->color.x-0.01, this->color.y+0.03, this->color.z-0.02);
            glVertex3f(-0.5, -0.5, -0.5);
            glVertex3f(0.5, -0.5, -0.5);
            glVertex3f(0.5, -0.5, 0.5);
            glVertex3f(-0.5, -0.5, 0.5);

            glColor3f(this->color.x+0.02, this->color.y-0.01, this->color.z+0.03);
            glVertex3f(-0.5, 0.5, -0.5);
            glVertex3f(0.5, 0.5, -0.5);
            glVertex3f(0.5, 0.5, 0.5);
            glVertex3f(-0.5, 0.5, 0.5);
        glEnd();
    glPopMatrix();

}