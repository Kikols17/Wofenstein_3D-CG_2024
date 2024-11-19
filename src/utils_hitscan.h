#ifndef UTILS_HITSCAN_H
#define UTILS_HITSCAN_H


#include "ofMain.h"

#include "customColisionBox.h"
#include "customGameObject.h"
#include "customPhysicsObject.h"
#include "customPlayer.h"


extern vector<customColisionBox*> globalcolisionBoxes;


customColisionBox* hitscan_colisionbox(ofVec3f start, ofVec3f dir, vector<int> groups);
GLfloat hitscan_distance(ofVec3f start, ofVec3f dir, vector<int> groups);
pair<customColisionBox*, GLfloat> hitscan_all(ofVec3f start, ofVec3f dir, vector<int> groups);


GLfloat raycast(ofVec3f start, ofVec3f dir, customColisionBox* colisionBox);


#endif