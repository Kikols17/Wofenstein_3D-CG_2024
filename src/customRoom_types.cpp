#include "customRoom_types.h"


#define TEX_SIZE 1024
#define TEX_SIZE2 1504


extern int gamestate;

//--------------------------------------------------------------
// customRoom_axis
//--------------------------------------------------------------
customRoom_axis::customRoom_axis(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, ofImage *_texture, struct custommaterial *_material) : customPhysicsObjectStatic(_position, _rotation, _scale, _color, _texture, _material, vector<customColisionBox*>({})) {
    // run this to set up the object
}
void customRoom_axis::draw2D() {
    // draws the 2D version of the object

    glPushMatrix();
        this->customPhysicsObjectStatic::draw2D();      // move to the position, rotate, and scale the room
        glBegin(GL_LINES);
            glColor3f(1.0, 0.0, 0.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(1.0, 0.0, 0.0);

            glColor3f(0.0, 1.0, 0.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.0, 1.0, 0.0);

            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.0, 0.0, 1.0);
        glEnd();
    glPopMatrix();
}

void customRoom_axis::draw3D() {
    // draws the 3D version of the object

    glPushMatrix();
        this->customPhysicsObjectStatic::draw3D();      // move to the position, rotate, and scale the room
        glBegin(GL_LINES);
            glColor3f(1.0, 0.0, 0.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(1.0, 0.0, 0.0);

            glColor3f(0.0, 1.0, 0.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.0, 1.0, 0.0);

            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.0, 0.0, 1.0);
        glEnd();
    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_Xhallway
//--------------------------------------------------------------
customRoom_Xhallway::customRoom_Xhallway(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, ofImage *_texture, struct custommaterial *_material) : customPhysicsObjectStatic(_position, _rotation, _scale, _color, _texture, _material, vector<customColisionBox*>( {new customColisionBox(_position, _rotation, _scale, _color, _material, 1, vector<int>({}), -0.5, -0.04, -0.5, 0.5, 0.0, 0.5), new customColisionBox(_position, _rotation, _scale, _color, _material, 1, vector<int>({}), -0.5, 1.0, -0.5, 0.5, 1.04, 0.5)} )) {
    //ofVec3f(0.4, 0.4, 0.4)
    // run this to set up the object
}
void customRoom_Xhallway::draw2D() {
    // draws the 2D version of the object
    
    glPushMatrix();
        this->customPhysicsObjectStatic::draw2D();      // move to the position, rotate, and scale the room

        glEnable(GL_TEXTURE);
        this->texture->bind();

        glColor3f(this->color.x, this->color.y, this->color.z);
        glBegin(GL_QUADS);
            // floor
            glTexCoord2f(0, 0);                 glVertex3f(0.5, 0, -0.5);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(0.5, 0, 0.5);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(-0.5, 0, 0.5);
            glTexCoord2f(0, TEX_SIZE);          glVertex3f(-0.5, 0, -0.5);
        glEnd();

        this->texture->unbind();
        glDisable(GL_TEXTURE);

    glPopMatrix();
}
void customRoom_Xhallway::draw3D() {
    // draws the 3D version of the object
    
    glPushMatrix();
        this->customPhysicsObjectStatic::draw3D();      // move to the position, rotate, and scale the room

        glEnable(GL_TEXTURE);
        this->texture->bind();

        glColor3f(this->color.x, this->color.y, this->color.z);
        glBegin(GL_QUADS);
            // floor
            glTexCoord2f(0, 0);                 glVertex3f(0.5, 0, -0.5);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(0.5, 0, 0.5);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(-0.5, 0, 0.5);
            glTexCoord2f(0, TEX_SIZE);          glVertex3f(-0.5, 0, -0.5);

            // ceiling
            glTexCoord2f(0, TEX_SIZE);          glVertex3f(-0.5, 1, -0.5);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(-0.5, 1, 0.5);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(0.5, 1, 0.5);
            glTexCoord2f(0, 0);                 glVertex3f(0.5, 1, -0.5);
        glEnd();

        this->texture->unbind();
        glDisable(GL_TEXTURE);

    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_wall
//--------------------------------------------------------------
customRoom_wall::customRoom_wall(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, ofImage *_texture, struct custommaterial *_material) : customPhysicsObjectStatic(_position, _rotation, _scale, _color, _texture, _material, vector<customColisionBox*>( {new customColisionBox(_position, _rotation, _scale, _color, _material, 1, vector<int>({}), -0.5, 0.0, -0.5, 0.5, 1.0, 0.5)} )) {
    // run this to set up the object
}
void customRoom_wall::draw2D() {
    // draws the 3D version of the object
    
    glPushMatrix();
        this->customPhysicsObjectStatic::draw2D();      // move to the position, rotate, and scale the room

        glEnable(GL_TEXTURE);
        this->texture->bind();

        glColor3f(this->color.x, this->color.y, this->color.z);
        glBegin(GL_QUADS);
            // ceiling
            glNormal3f(0, 1, 0);
            glTexCoord2f(0, 0);                 glVertex3f(-0.5, 1, -0.5);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(0.5, 1, -0.5);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(0.5, 1, 0.5);
            glTexCoord2f(0, TEX_SIZE);          glVertex3f(-0.5, 1, 0.5);

            // left wall
            glNormal3f(-1, 0, 0);
            glTexCoord2f(0, 0);                 glVertex3f(-0.5, 1, -0.5);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(-0.5, 1, 0.5);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(-0.5, 0, 0.5);
            glTexCoord2f(0, TEX_SIZE);          glVertex3f(-0.5, 0, -0.5);

            // right wall
            glNormal3f(1, 0, 0);
            glTexCoord2f(0, 0);                 glVertex3f(0.5, 1, 0.5);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(0.5, 1, -0.5);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(0.5, 0, -0.5);
            glTexCoord2f(0, TEX_SIZE);          glVertex3f(0.5, 0, 0.5);

            // front wall
            glNormal3f(0, 0, 1);
            glTexCoord2f(0, 0);                 glVertex3f(-0.5, 1, 0.5);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(0.5, 1, 0.5);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(0.5, 0, 0.5);
            glTexCoord2f(0, TEX_SIZE);          glVertex3f(-0.5, 0, 0.5);

            // back wall
            glNormal3f(0, 0, -1);
            glTexCoord2f(0, 0);                 glVertex3f(0.5, 1, -0.5);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(-0.5, 1, -0.5);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(-0.5, 0, -0.5);
            glTexCoord2f(0, TEX_SIZE);          glVertex3f(0.5, 0, -0.5);
        glEnd();

        this->texture->unbind();
        glDisable(GL_TEXTURE);

    glPopMatrix();
}
void customRoom_wall::draw3D() {
    // run this every draw cycle
    
    glPushMatrix();
        this->customPhysicsObjectStatic::draw3D();      // move to the position, rotate, and scale the room

        glEnable(GL_TEXTURE);
        this->texture->bind();

        glColor3f(this->color.x, this->color.y, this->color.z);
        glBegin(GL_QUADS);
            // ceiling
            glNormal3f(0, 1, 0);
            glTexCoord2f(0, 0);                 glVertex3f(-0.5, 1, -0.5);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(0.5, 1, -0.5);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(0.5, 1, 0.5);
            glTexCoord2f(0, TEX_SIZE);          glVertex3f(-0.5, 1, 0.5);

            // left wall
            glNormal3f(-1, 0, 0);
            glTexCoord2f(0, 0);                 glVertex3f(-0.5, 1, -0.5);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(-0.5, 1, 0.5);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(-0.5, 0, 0.5);
            glTexCoord2f(0, TEX_SIZE);          glVertex3f(-0.5, 0, -0.5);

            // right wall
            glNormal3f(1, 0, 0);
            glTexCoord2f(0, 0);                 glVertex3f(0.5, 1, 0.5);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(0.5, 1, -0.5);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(0.5, 0, -0.5);
            glTexCoord2f(0, TEX_SIZE);          glVertex3f(0.5, 0, 0.5);

            // front wall
            glNormal3f(0, 0, 1);
            glTexCoord2f(0, 0);                 glVertex3f(-0.5, 1, 0.5);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(0.5, 1, 0.5);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(0.5, 0, 0.5);
            glTexCoord2f(0, TEX_SIZE);          glVertex3f(-0.5, 0, 0.5);

            // back wall
            glNormal3f(0, 0, -1);
            glTexCoord2f(0, 0);                 glVertex3f(0.5, 1, -0.5);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(-0.5, 1, -0.5);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(-0.5, 0, -0.5);
            glTexCoord2f(0, TEX_SIZE);          glVertex3f(0.5, 0, -0.5);
        glEnd();

        this->texture->unbind();
        glDisable(GL_TEXTURE);

    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_door
//--------------------------------------------------------------
customRoom_door::customRoom_door(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, ofImage *_texture, struct custommaterial *_material) : customPhysicsObjectStatic(_position, _rotation, _scale, _color, _texture, _material, vector<customColisionBox*>( { new customColisionBox(_position, _rotation, _scale, _color, _material, 1, vector<int>({}), -0.5, 0.0, -0.2, 0.5, 1.0, 0.2), } )) {
    //ofVec3f(0.0, 0.7, 0.7)
    // run this to set up the object
}

void customRoom_door::update() {
    // run this every update cycle
    this->customPhysicsObjectStatic::update();      // update the position, rotation, and scale of the room

    if (this->open) {
        if (this->open_percent < 0.95f) {
            this->open_percent += 0.01f;
            this->position = this->position + (0.01 * this->scale.x) * rotateY(ofVec3f(1, 0, 0), glm::radians(this->rotation.y));
        } else {
            //this->open = false;
        }
    } else {
        if (this->open_percent > 0.0f) {
            this->open_percent -= 0.01f;
            this->position = this->position - (0.01 * this->scale.x) * rotateY(ofVec3f(1, 0, 0), glm::radians(this->rotation.y));
        } else {
            //this->open = true;
        }
    }

    for (int i = 0; i < (int)this->colisionBoxes.size(); i++) {
        if (this->colisionBoxes[i]->hasCollided==0) {
            // player touched the door
            this->colisionBoxes[i]->hasCollided = -2;
            //cout << "Player touching door" << endl;
            this->open = true;
        }
        this->colisionBoxes[i]->position = this->position;
        this->colisionBoxes[i]->update();
    }
}

void customRoom_door::draw2D() {
    // run this every draw cycle
    glPushMatrix();
        this->customPhysicsObjectStatic::draw2D();      // move to the position, rotate, and scale the room

        glEnable(GL_TEXTURE);
        this->texture->bind();

        glColor3f(this->color.x, this->color.y, this->color.z);
        glBegin(GL_QUADS);
            // door top
            glNormal3f(0, 1, 0);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(0.5, 0.9, -0.2);
            glTexCoord2f(TEX_SIZE2, 0);         glVertex3f(0.5, 0.9, 0.2);
            glTexCoord2f(TEX_SIZE2, TEX_SIZE);  glVertex3f(-0.5, 0.9, 0.2);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(-0.5, 0.9, -0.2);

            // door left
            glNormal3f(-1, 0, 0);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(-0.5, 1, -0.2);
            glTexCoord2f(TEX_SIZE2, 0);         glVertex3f(-0.5, 1, 0.2);
            glTexCoord2f(TEX_SIZE2, TEX_SIZE);  glVertex3f(-0.5, 0, 0.2);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(-0.5, 0, -0.2);

            // door right
            glNormal3f(1, 0, 0);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(0.5, 1, -0.2);
            glTexCoord2f(TEX_SIZE2, 0);         glVertex3f(0.5, 1, 0.2);
            glTexCoord2f(TEX_SIZE2, TEX_SIZE);  glVertex3f(0.5, 0, 0.2);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(0.5, 0, -0.2);

            // door back
            glNormal3f(0, 0, -1);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(0.5, 1, -0.2);
            glTexCoord2f(0, 0);                 glVertex3f(-0.5, 1, -0.2);
            glTexCoord2f(0, TEX_SIZE);          glVertex3f(-0.5, 0, -0.2);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(0.5, 0, -0.2);

            // door front
            glNormal3f(0, 0, 1);
            glTexCoord2f(0, 0);                 glVertex3f(-0.5, 1, 0.2);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(0.5, 1, 0.2);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(0.5, 0, 0.2);
            glTexCoord2f(0, TEX_SIZE);          glVertex3f(-0.5, 0, 0.2);
        glEnd();

        this->texture->unbind();
        glDisable(GL_TEXTURE);

    glPopMatrix();
}

void customRoom_door::draw3D() {
    // run this every draw cycle
    glPushMatrix();
        this->customPhysicsObjectStatic::draw3D();      // move to the position, rotate, and scale the room

        glEnable(GL_TEXTURE);
        this->texture->bind();

        glColor3f(this->color.x, this->color.y, this->color.z);
        glBegin(GL_QUADS);
            // door top
            glNormal3f(0, 1, 0);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(0.5, 0.9, -0.2);
            glTexCoord2f(TEX_SIZE2, 0);         glVertex3f(0.5, 0.9, 0.2);
            glTexCoord2f(TEX_SIZE2, TEX_SIZE);  glVertex3f(-0.5, 0.9, 0.2);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(-0.5, 0.9, -0.2);

            // door left
            glNormal3f(-1, 0, 0);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(-0.5, 1, -0.2);
            glTexCoord2f(TEX_SIZE2, 0);         glVertex3f(-0.5, 1, 0.2);
            glTexCoord2f(TEX_SIZE2, TEX_SIZE);  glVertex3f(-0.5, 0, 0.2);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(-0.5, 0, -0.2);

            // door right
            glNormal3f(1, 0, 0);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(0.5, 1, -0.2);
            glTexCoord2f(TEX_SIZE2, 0);         glVertex3f(0.5, 1, 0.2);
            glTexCoord2f(TEX_SIZE2, TEX_SIZE);  glVertex3f(0.5, 0, 0.2);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(0.5, 0, -0.2);

            // door back
            glNormal3f(0, 0, -1);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(0.5, 1, -0.2);
            glTexCoord2f(0, 0);                 glVertex3f(-0.5, 1, -0.2);
            glTexCoord2f(0, TEX_SIZE);          glVertex3f(-0.5, 0, -0.2);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(0.5, 0, -0.2);

            // door front
            glNormal3f(0, 0, 1);
            glTexCoord2f(0, 0);                 glVertex3f(-0.5, 1, 0.2);
            glTexCoord2f(TEX_SIZE, 0);          glVertex3f(0.5, 1, 0.2);
            glTexCoord2f(TEX_SIZE, TEX_SIZE);   glVertex3f(0.5, 0, 0.2);
            glTexCoord2f(0, TEX_SIZE);          glVertex3f(-0.5, 0, 0.2);
        glEnd();

        this->texture->unbind();
        glDisable(GL_TEXTURE);

    glPopMatrix();
}








//--------------------------------------------------------------
// customRoom_end
//--------------------------------------------------------------
customRoom_end::customRoom_end(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, ofVec3f _color, ofImage *_texture, struct custommaterial *_material) : customPhysicsObjectStatic(_position, _rotation, _scale, _color, _texture, _material, vector<customColisionBox*>( { new customColisionBox(_position, _rotation, _scale, _color, _material, 3, vector<int>({0}), -0.5, -0.5, -0.5, 0.5, 0.5, 0.5) } )) {
    // run this to set up the object
}

void customRoom_end::update() {
    // run this every update cycle
    this->customPhysicsObjectStatic::update();      // update the position, rotation, and scale of the room

    for (int i = 0; i < (int)this->colisionBoxes.size(); i++) {
        this->colisionBoxes[i]->position = this->position;
        this->colisionBoxes[i]->update();
    }

    for (int i = 0; i < (int)this->colisionBoxes.size(); i++) {
        if (this->colisionBoxes[i]->hasCollided==0) {
            this->color = ofVec3f(0.9, 0.0, 0.0);
            gamestate = 2;
            cout << "GAME OVER, Player won!" << endl;
        }
        this->colisionBoxes[i]->hasCollided = -2;
    }
}

void customRoom_end::draw2D() {
    // run this every draw cycle
    glPushMatrix();
        this->customPhysicsObjectStatic::draw2D();      // move to the position, rotate, and scale the room

        glColor3f(this->color.x, this->color.y, this->color.z);
        cube_unit_posscale(ofVec3f(0.0, 0.0, 0.0), ofVec3f(1.1, 0.1, 1.1) );

    glPopMatrix();
}

void customRoom_end::draw3D() {
    // run this every draw cycle
    glPushMatrix();
        this->customPhysicsObjectStatic::draw3D();      // move to the position, rotate, and scale the room

        glColor3f(this->color.x, this->color.y, this->color.z);
        cube_unit_posscale(ofVec3f(0.0, 0.0, 0.0), ofVec3f(1.1, 0.1, 1.1) );

    glPopMatrix();
}