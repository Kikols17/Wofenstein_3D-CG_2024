#include "customParticle.h"


extern vector<shared_ptr<customGameObject>> globalgameobjects_toremove;


//--------------------------------------------------------------
// public
customParticle::customParticle(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, GLfloat fadeout, uint64_t _lifetime) : customPhysicsObjectMovable(_position, _rotation, _scale, _color, vector<customColisionBox*>({new customColisionBox(_position, _rotation, _scale, _color, -1, vector<int>({}), -0.5, -0.5, -0.5, 0.5, 0.5, 0.5)})) {
    // run this to set up the object
    this->fadeout = fadeout;
    this->lifetime = _lifetime;
    this->birthtime = ofGetElapsedTimeMillis();
    cout << "particle created at time " << this->birthtime << endl;
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
        // TODO: add gameObjects to a list to be deleted
        cout << "particle out of time" << endl;
        shared_ptr<customGameObject> p = shared_ptr<customGameObject>(this);
        //cout << "out of time " << p << endl;
        globalgameobjects_toremove.push_back(p);
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

            glVertex3f(-0.5, -0.5, 0.5);
            glVertex3f(0.5, -0.5, 0.5);
            glVertex3f(0.5, 0.5, 0.5);
            glVertex3f(-0.5, 0.5, 0.5);

            glVertex3f(-0.5, -0.5, -0.5);
            glVertex3f(-0.5, 0.5, -0.5);
            glVertex3f(-0.5, 0.5, 0.5);
            glVertex3f(-0.5, -0.5, 0.5);

            glVertex3f(0.5, -0.5, -0.5);
            glVertex3f(0.5, 0.5, -0.5);
            glVertex3f(0.5, 0.5, 0.5);
            glVertex3f(0.5, -0.5, 0.5);

            glVertex3f(-0.5, -0.5, -0.5);
            glVertex3f(0.5, -0.5, -0.5);
            glVertex3f(0.5, -0.5, 0.5);
            glVertex3f(-0.5, -0.5, 0.5);

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

            glVertex3f(-0.5, -0.5, 0.5);
            glVertex3f(0.5, -0.5, 0.5);
            glVertex3f(0.5, 0.5, 0.5);
            glVertex3f(-0.5, 0.5, 0.5);

            glVertex3f(-0.5, -0.5, -0.5);
            glVertex3f(-0.5, 0.5, -0.5);
            glVertex3f(-0.5, 0.5, 0.5);
            glVertex3f(-0.5, -0.5, 0.5);

            glVertex3f(0.5, -0.5, -0.5);
            glVertex3f(0.5, 0.5, -0.5);
            glVertex3f(0.5, 0.5, 0.5);
            glVertex3f(0.5, -0.5, 0.5);

            glVertex3f(-0.5, -0.5, -0.5);
            glVertex3f(0.5, -0.5, -0.5);
            glVertex3f(0.5, -0.5, 0.5);
            glVertex3f(-0.5, -0.5, 0.5);

            glVertex3f(-0.5, 0.5, -0.5);
            glVertex3f(0.5, 0.5, -0.5);
            glVertex3f(0.5, 0.5, 0.5);
            glVertex3f(-0.5, 0.5, 0.5);
        glEnd();
    glPopMatrix();

}