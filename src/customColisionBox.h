#pragma once
#ifndef CUSTOMCOLISIONBOX_H
#define CUSTOMCOLISIONBOX_H

#include "customGameObject.h"
#include "cg_extras.h"

#include "ofMain.h"

/*  NOTAS SOBRE GROUPS:
 *      Os grupos são usados para definir quais objetos colidem com quais.
 *      Assim posso ter collision boxes para as paredes, para o jogador, para os inimigos, etc.
 *      Pode também ser usada para ter "hitboxes" para os NPCs e o player
 *
 *      Numenclatura:
 *          -1: para as particulas  (para colidirem com paredes mas nao interferir com player ou tiros)
 *          0: para o player        (para colidir com paredes e receber tiros)
 *          1: para as paredes      (impedir player e inimigos de passar, e receber tiros)
 *          2: para os inimigos     (para colidir com paredes e receber tiros)
 *
 */


class customColisionBox : public customGameObject {

    public:
        customColisionBox(ofVec3f _position, ofVec3f _rotation, ofVec3f _scale, int group, vector<int> groups, GLfloat _minX, GLfloat _minY, GLfloat _minZ, GLfloat _maxX, GLfloat _maxY, GLfloat _maxZ);

        void update() override;

        using customGameObject::draw2D;
        void draw3D() override;


        ofVec3f checkCollision_SetVelocity(customColisionBox* other, ofVec3f velocity, uint64_t deltaT);
        bool checkCollision(customColisionBox* other, ofVec3f velocity, uint64_t deltaT);
        ofVec3f getCollisionPos(customColisionBox* other, ofVec3f velocity, uint64_t deltaT);


        using customGameObject::position;
        using customGameObject::rotation;
        using customGameObject::scale;

        // relative coordinates
        GLfloat rel_minX;
        GLfloat rel_minY;
        GLfloat rel_minZ;

        GLfloat rel_maxX;
        GLfloat rel_maxY;
        GLfloat rel_maxZ;


        // absolute coordinates
        GLfloat abs_minX;
        GLfloat abs_minY;
        GLfloat abs_minZ;

        GLfloat abs_maxX;
        GLfloat abs_maxY;
        GLfloat abs_maxZ;

        int group;          // group number of this object
        vector<int> groups;     // group numbers of objects that this object is looking for collisions with
};

#endif