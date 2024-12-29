#include "customGameObject.h"


//--------------------------------------------------------------
customGameObject::customGameObject(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, ofImage *_texture, struct custommaterial *_material){
    // run this to set up the object

    this->position = _position;
    this->rotation = _rotation;
    this->scale = _scale;

    this->color = _color;
    this->texture = _texture;
    this->material = _material;
}




void customGameObject::update(){
    // run this every update cycle
}




void customGameObject::draw2D(){
    // draws the 2D version of the object
    glTranslatef(this->position.x, this->position.y, this->position.z);
    glScalef(this->scale.x, this->scale.y, this->scale.z);
    glRotatef(this->rotation.x, 1, 0, 0);
    glRotatef(this->rotation.y, 0, 1, 0);
    glRotatef(this->rotation.z, 0, 0, 1);
}

void customGameObject::draw3D(){
    // draws the 3D version of the object
    glTranslatef(this->position.x, this->position.y, this->position.z);
    glScalef(this->scale.x, this->scale.y, this->scale.z);
    glRotatef(this->rotation.x, 1, 0, 0);
    glRotatef(this->rotation.y, 0, 1, 0);
    glRotatef(this->rotation.z, 0, 0, 1);
}