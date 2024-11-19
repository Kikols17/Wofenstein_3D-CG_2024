#include "customColisionBox.h"


extern vector<customColisionBox*> globalcolisionBoxes;


/* PARA PERCEBER GRUPOS, IR PARA "customColisionBox.h" */


//--------------------------------------------------------------
customColisionBox::customColisionBox(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, int _group, vector<int> _groups, GLfloat _minX, GLfloat _minY, GLfloat _minZ, GLfloat _maxX, GLfloat _maxY, GLfloat _maxZ) : customColisionBox(_position, _rotation, _scale, ofVec3f(0.5,0.5,0.5), _group, _groups, _minX, _minY, _minZ, _maxX, _maxY, _maxZ) {
    // do nothing, call true constructor
}
customColisionBox::customColisionBox(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, int _group, vector<int> _groups, GLfloat _minX, GLfloat _minY, GLfloat _minZ, GLfloat _maxX, GLfloat _maxY, GLfloat _maxZ) : customGameObject(_position, _rotation, _scale, _color) {
    // run this to set up the object

    this->rel_minX = _minX * _scale.x;
    this->rel_minY = _minY * _scale.y;
    this->rel_minZ = _minZ * _scale.z;

    this->rel_minX = rotateY(ofVec3f(_minX*_scale.x, _minY*_scale.y, _minZ*_scale.z), glm::radians(_rotation.y)).x;
    this->rel_minZ = rotateY(ofVec3f(_minX*_scale.x, _minY*_scale.y, _minZ*_scale.z), glm::radians(_rotation.y)).z;


    this->rel_maxX = _maxX * _scale.x;
    this->rel_maxY = _maxY * _scale.y;
    this->rel_maxZ = _maxZ * _scale.z;

    this->rel_maxX = rotateY(ofVec3f(_maxX*_scale.x, _maxY*_scale.y, _maxZ*_scale.z), glm::radians(_rotation.y)).x;
    this->rel_maxZ = rotateY(ofVec3f(_maxX*_scale.x, _maxY*_scale.y, _maxZ*_scale.z), glm::radians(_rotation.y)).z;

    // make sure the min values are less than the max values
    // (quick and dirty fix :D)
    if (this->rel_minX > this->rel_maxX) {
        GLfloat temp = this->rel_minX;
        this->rel_minX = this->rel_maxX;
        this->rel_maxX = temp;
    }
    if (this->rel_minY > this->rel_maxY) {
        GLfloat temp = this->rel_minY;
        this->rel_minY = this->rel_maxY;
        this->rel_maxY = temp;
    }
    if (this->rel_minZ > this->rel_maxZ) {
        GLfloat temp = this->rel_minZ;
        this->rel_minZ = this->rel_maxZ;
        this->rel_maxZ = temp;
    }

    this->group = _group;
    this->groups = _groups;

    this->update();
    //cout << "collision box created " << this << endl;
    globalcolisionBoxes.push_back(this);
    //cout << "collision box added to global list " << globalcolisionBoxes[globalcolisionBoxes.size()-1] << endl;
}



void customColisionBox::update() {
    // run this every cycle

    // update the relative coordinates
    this->abs_minX = rel_minX;// * scale.x;
    this->abs_minY = rel_minY;// * scale.y;
    this->abs_minZ = rel_minZ;// * scale.z;

    this->abs_maxX = rel_maxX;// * scale.x;
    this->abs_maxY = rel_maxY;// * scale.y;
    this->abs_maxZ = rel_maxZ;// * scale.z;




    // get the absolute coordinates
    this->abs_minX = this->position.x + this->abs_minX;
    this->abs_minY = this->position.y + this->abs_minY;
    this->abs_minZ = this->position.z + this->abs_minZ;

    this->abs_maxX = this->position.x + this->abs_maxX;
    this->abs_maxY = this->position.y + this->abs_maxY;
    this->abs_maxZ = this->position.z + this->abs_maxZ;
}



void customColisionBox::draw3D() {
    // draw the object in 2D
    //cout << minX << " " << minY << " " << minZ << " " << maxX << " " << maxY << " " << maxZ << endl;
    glPushMatrix();

        glBegin(GL_LINE_LOOP);
            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(this->abs_minX, this->abs_minY, this->abs_minZ);
            glVertex3f(this->abs_minX, this->abs_minY, this->abs_maxZ);
            glVertex3f(this->abs_minX, this->abs_maxY, this->abs_maxZ);
            glVertex3f(this->abs_minX, this->abs_maxY, this->abs_minZ);
        glEnd();

        glBegin(GL_LINE_LOOP);
            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(this->abs_maxX, this->abs_minY, this->abs_minZ);
            glVertex3f(this->abs_maxX, this->abs_minY, this->abs_maxZ);
            glVertex3f(this->abs_maxX, this->abs_maxY, this->abs_maxZ);
            glVertex3f(this->abs_maxX, this->abs_maxY, this->abs_minZ);
        glEnd();

        glBegin(GL_LINES);
            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(this->abs_minX, this->abs_minY, this->abs_minZ);
            glVertex3f(this->abs_maxX, this->abs_minY, this->abs_minZ);

            glVertex3f(this->abs_minX, this->abs_minY, this->abs_maxZ);
            glVertex3f(this->abs_maxX, this->abs_minY, this->abs_maxZ);

            glVertex3f(this->abs_minX, this->abs_maxY, this->abs_maxZ);
            glVertex3f(this->abs_maxX, this->abs_maxY, this->abs_maxZ);

            glVertex3f(this->abs_minX, this->abs_maxY, this->abs_minZ);
            glVertex3f(this->abs_maxX, this->abs_maxY, this->abs_minZ);
        glEnd();
    glPopMatrix();
}




ofVec3f customColisionBox::checkCollision_SetVelocity(customColisionBox* other, ofVec3f velocity, uint64_t deltaT) {
    // check if this object is colliding with another object using AABB collision detection

    //use AABB collision detection to get with which side the object is colliding
    //the side that is colliding is the one that will be set to 0

    GLfloat k_x1 = (other->abs_minX - this->abs_maxX) / velocity.x;
    GLfloat k_y1 = (other->abs_minY - this->abs_maxY) / velocity.y;
    GLfloat k_z1 = (other->abs_minZ - this->abs_maxZ) / velocity.z;
    cout << k_x1 << " " << k_y1 << " " << k_z1 << endl;

    GLfloat k_x2 = (other->abs_maxX - this->abs_minX) / velocity.x;
    GLfloat k_y2 = (other->abs_maxY - this->abs_minY) / velocity.y;
    GLfloat k_z2 = (other->abs_maxZ - this->abs_minZ) / velocity.z;
    cout << k_x2 << " " << k_y2 << " " << k_z2 << endl;


    ofVec3f new_velocity = velocity;
    if (k_x1 > 0 && k_x1 < deltaT) {
        new_velocity.x = 0;
    }
    if (k_y1 > 0 && k_y1 < deltaT) {
        new_velocity.y = 0;
    }
    if (k_z1 > 0 && k_z1 < deltaT) {
        new_velocity.z = 0;
    }

    if (k_x2 > 0 && k_x2 < deltaT) {
        new_velocity.x = 0;
    }
    if (k_y2 > 0 && k_y2 < deltaT) {
        new_velocity.y = 0;
    }
    if (k_z2 > 0 && k_z2 < deltaT) {
        new_velocity.z = 0;
    }
    cout << new_velocity.x << " " << new_velocity.y << " " << new_velocity.z << endl << endl;

    return new_velocity;
}


bool customColisionBox::checkCollision(customColisionBox* other, ofVec3f velocity, uint64_t deltaT) {
    // check if this object is colliding with another object using AABB collision detection
    // return true if collision, false if no collision)
    //cout << endl;
    //cout << (this->abs_minX+velocity.x*(deltaT/1000) > other->abs_maxX) << " " << (this->abs_maxX+velocity.x*(deltaT/1000) < other->abs_minX) << " ";
    //cout << (this->abs_minY+velocity.y*(deltaT/1000) > other->abs_maxY) << " " << (this->abs_maxY+velocity.y*(deltaT/1000) < other->abs_minY) << " ";
    //cout << (this->abs_minZ+velocity.z*(deltaT/1000) > other->abs_maxZ) << " " << (this->abs_maxZ+velocity.z*(deltaT/1000) < other->abs_minZ) << " ";

    //cout << endl;
    //cout << this->abs_minX << " " << this->abs_maxX << " " << other->abs_minX << " " << other->abs_maxX << " ";
    //cout << this->abs_minY << " " << this->abs_maxY << " " << other->abs_minY << " " << other->abs_maxY << " ";
    //cout << this->abs_minZ << " " << this->abs_maxZ << " " << other->abs_minZ << " " << other->abs_maxZ << " ";
    //cout << endl;
    bool result = (
        this->abs_minX+(velocity.x*(deltaT/1000.0f)) < other->abs_maxX  &&  this->abs_maxX+(velocity.x*(deltaT/1000.0f)) > other->abs_minX  &&
        this->abs_minY+(velocity.y*(deltaT/1000.0f)) < other->abs_maxY  &&  this->abs_maxY+(velocity.y*(deltaT/1000.0f)) > other->abs_minY  &&
        this->abs_minZ+(velocity.z*(deltaT/1000.0f)) < other->abs_maxZ  &&  this->abs_maxZ+(velocity.z*(deltaT/1000.0f)) > other->abs_minZ);
    
    if (result) {
        this->hasCollided = true;
        other->hasCollided = true;
    }
    return result;
}


// function from github copilot
ofVec3f customColisionBox::getCollisionPos(customColisionBox* other, ofVec3f velocity, uint64_t deltaT) {
    // assuming the "other" object is immovable, and that this object is moving with the velocity "velocity"
    // return the position where the object should be if it were to collide with the "other" object

    // get the distance to the other object
    GLfloat dx = (this->position.x + velocity.x) - other->position.x;
    GLfloat dy = (this->position.y + velocity.y) - other->position.y;
    GLfloat dz = (this->position.z + velocity.z) - other->position.z;

    // get the distance to the other object
    GLfloat distX = (this->abs_maxX - this->abs_minX) / 2 + (other->abs_maxX - other->abs_minX) / 2;
    GLfloat distY = (this->abs_maxY - this->abs_minY) / 2 + (other->abs_maxY - other->abs_minY) / 2;
    GLfloat distZ = (this->abs_maxZ - this->abs_minZ) / 2 + (other->abs_maxZ - other->abs_minZ) / 2;

    // get the overlap
    GLfloat overlapX = distX - abs(dx);
    GLfloat overlapY = distY - abs(dy);
    GLfloat overlapZ = distZ - abs(dz);

    // get the smallest overlap
    if (overlapX < overlapY && overlapX < overlapZ) {
        return ofVec3f(overlapX * (dx < 0 ? -1 : 1), 0, 0);
    } else if (overlapY < overlapX && overlapY < overlapZ) {
        return ofVec3f(0, overlapY * (dy < 0 ? -1 : 1), 0);
    } else {
        return ofVec3f(0, 0, overlapZ * (dz < 0 ? -1 : 1));
    }

    return ofVec3f(0, 0, 0);
}