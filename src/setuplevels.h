#ifndef SETUPLEVELS_H
#define SETUPLEVELS_H


#include "customRoom_types.h"
#include "customNPC.h"
#include "customPlayer.h"


void test_level(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player);

void circular_level(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player);

void training_level(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player);

void excapefromwolfenstein_level(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player);

int wolfenstein(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player);

int eisenfaust(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player);



#endif