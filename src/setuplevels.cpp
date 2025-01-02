#include "setuplevels.h"



extern ofImage tex_JailBlueBricks;
extern ofImage tex_BlueBricks;
extern ofImage tex_GreyBricks;
extern ofImage tex_MossBricks;
extern ofImage tex_RedBricks;
extern ofImage tex_CyanMetal;
extern ofImage tex_WoodWall;
extern ofImage tex_Floor;
extern ofImage tex_Door;


extern struct custommaterial mat_greybricks;
extern struct custommaterial mat_bluebricks;
extern struct custommaterial mat_redbricks;
extern struct custommaterial mat_wood;
extern struct custommaterial mat_cyanmetal;
extern struct custommaterial mat_clothes;
extern struct custommaterial mat_emerald;

//int wolfenstein(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player) {
//	return 0;
//}
//
//int eisenfaust(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player) {
//	return 0;
//}




// CRIADO POR MAPCREATOR
int wolfenstein(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player) {

	// clear vector and enemy_count
	gameobjects.clear();
	int enemy_count = 0;

	shared_ptr<customGameObject>* go;

	go = new shared_ptr<customGameObject>( new customLightObject( ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1), ofVec3f(1, 1, 1), 0, 0 ) );
	dynamic_pointer_cast<customLightObject>(*go)->lightOn();
	gameobjects.push_back(go);


	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*35, 0.8, 2*1), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*43, 0.8, 2*2), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*48, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*33, 2*0, 2*4), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*45, 2*0, 2*4), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*48, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*29, 0.8, 2*5), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*48, 0.8, 2*5), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*48, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*15, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*39, 2*0, 2*8), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*13, 0.8, 2*9), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*24, 0.8, 2*9), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*20, 2*0, 2*10), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*20, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*26, 0.8, 2*11), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*40, 0.8, 2*11), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*6, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*7, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*8, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*13, 0.8, 2*12), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*7, 0.8, 2*14), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*15, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*37, 0.8, 2*15), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*42, 0.8, 2*15), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*6, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*7, 2*0, 2*16), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*8, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*7, 0.8, 2*20), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*12, 0.8, 2*20), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*15, 0.8, 2*20), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*15, 2*0, 2*21), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*39, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*59, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*63, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*65, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*66, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*11, 0.8, 2*22), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*60, 0.8, 2*22), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*34, 0.8, 2*23), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*42, 0.8, 2*24), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*50, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*53, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*55, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*65, 0.8, 2*25), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*10, 2*0, 2*26), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*48, 2*0, 2*26), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*48, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*58, 2*0, 2*26), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_JailBlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*15, 0.8, 2*27), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*45, 0.8, 2*28), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*50, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*55, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*66, 0.8, 2*28), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*18, 0.8, 2*30), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*65, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*66, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*15, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*39, 2*0, 2*31), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*59, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*63, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*65, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*66, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*67, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*63, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*65, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*7, 0.8, 2*34), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*11, 0.8, 2*34), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*53, 0.8, 2*34), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*59, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*63, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*55, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*65, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*55, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*65, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*55, 2*0, 2*37), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*64, 0.8, 2*37), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*65, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_JailBlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*39, 0.8, 2*38), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*53, 0.8, 2*38), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*55, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*64, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*65, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*20, 0.8, 2*39), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*20, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*53, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*55, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*61, 0.8, 2*39), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*65, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*20, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*23, 2*0, 2*40), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_end( ofVec3f(2*26, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.9, 0.0), &tex_Door, &mat_emerald ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*59, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*63, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*9, 0.8, 2*41), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*20, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*6, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*7, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*8, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*15, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*39, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*37, 2*0, 2*45), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*41, 2*0, 2*45), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*37, 2*0, 2*50), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*41, 2*0, 2*50), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*34, 0.8, 2*54), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*44, 0.8, 2*54), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_JailBlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_JailBlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_JailBlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_JailBlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_JailBlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);




	// set player position
	player.position = ofVec3f(2*34, 0.80, 2*50);


	return enemy_count;
}





// CRIADO POR MAPCREATOR
int eisenfaust(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player) {

	// clear vector and enemy_count
	gameobjects.clear();
	int enemy_count = 0;

	shared_ptr<customGameObject>* go;

	go = new shared_ptr<customGameObject>( new customLightObject( ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1), ofVec3f(1, 1, 1), 0, 0 ) );
	dynamic_pointer_cast<customLightObject>(*go)->lightOn();
	gameobjects.push_back(go);


	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*7, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*8, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*15, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*0), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*0, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*1, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*2, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*3, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*7, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*53, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*55, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*59, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*1), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*0, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*1, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*2, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*3, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*4, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*6, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*7, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*8, 0.8, 2*2), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*15, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*16, 0.8, 2*2), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*37, 0.8, 2*2), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*53, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*2), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*0, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*1, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*2, 0.8, 2*3), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*2, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*3, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*4, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*5, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*7, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*15, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*41, 0.8, 2*3), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*53, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*59, 0.8, 2*3), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*3), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*0, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*1, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*2, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*3, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*4, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*5, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*7, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*8, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*15, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*20, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*53, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*56, 0.8, 2*4), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*4), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*0, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*1, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*2, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*3, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*4, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*5, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_CyanMetal, &mat_cyanmetal ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*18, 0.8, 2*5), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*20, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*23, 2*0, 2*5), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*29, 2*0, 2*5), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*33, 2*0, 2*5), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*50, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*53, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*55, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*58, 0.8, 2*5), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*5), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*0, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*1, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*2, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*3, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*4, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*5, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*7, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*8, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*15, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*20, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*39, 0.8, 2*6), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*6), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*0, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*1, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*2, 0.8, 2*7), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*2, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*3, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*4, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*5, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*7, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*15, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*35, 2*0, 2*7), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*44, 2*0, 2*7), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*7), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*0, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*1, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*2, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*3, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*4, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*6, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*7, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*15, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*40, 0.8, 2*8), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*47, 0.8, 2*8), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*54, 0.8, 2*8), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*59, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*8), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*0, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*1, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*2, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*3, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*32, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*42, 2*0, 2*9), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*50, 2*0, 2*9), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*53, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*55, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*9), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*48, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*10), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*3, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*4, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*6, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*39, 0.8, 2*11), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*40, 2*0, 2*11), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*45, 0.8, 2*11), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*48, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*52, 2*0, 2*11), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*55, 0.8, 2*11), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*63, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*11), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*2, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*3, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*4, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*5, 0.8, 2*12), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*5, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*6, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*7, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*8, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*47, 0.8, 2*12), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*48, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*58, 0.8, 2*12), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*63, 0.8, 2*12), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*12), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*2, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*3, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*4, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*5, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*50, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*13), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*0, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*1, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*2, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*3, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*4, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*5, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*12, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*45, 0.8, 2*14), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*62, 0.8, 2*14), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*14), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*0, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*1, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*2, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*3, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*4, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*5, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*10, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*11, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*37, 0.8, 2*15), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*40, 2*0, 2*15), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*51, 0.8, 2*15), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*59, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*63, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*15), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*0, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*1, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*2, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*3, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*4, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*5, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*9, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*11, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*41, 0.8, 2*16), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*47, 0.8, 2*16), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*61, 0.8, 2*16), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*16), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*0, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*1, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*2, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*3, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*4, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*5, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*6, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*7, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*8, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*10, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*32, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*50, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*51, 2*0, 2*17), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*53, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*55, 2*0, 2*17), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*60, 0.8, 2*17), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*17), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*0, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*1, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*2, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*3, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*4, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*5, 0.8, 2*18), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*5, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*6, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*7, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*8, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.3, 0.3, 0.3), &tex_GreyBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*9, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*53, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*57, 0.8, 2*18), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*63, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*18), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*2, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*3, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*4, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*4, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*6, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*53, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*19), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*2, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*3, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*4, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*5, 0.8, 2*20), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*5, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*6, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*53, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*57, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*20), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*2, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*3, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*4, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*5, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*6, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*53, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*55, 2*0, 2*21), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*59, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*21), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*2, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*3, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*4, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*5, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*6, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*51, 0.8, 2*22), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*62, 0.8, 2*22), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*22), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*2, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*3, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*4, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*5, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*6, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.5, 0.0), &tex_MossBricks, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*20, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*23), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*50, 0.8, 2*24), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*52, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*53, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*54, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*55, 0.8, 2*24), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*55, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*56, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*58, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*59, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*60, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*61, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*62, 0.8, 2*24), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*62, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*63, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*24), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*50, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*53, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*54, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*55, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*56, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*57, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*58, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*59, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*60, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*61, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*62, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*63, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*64, 2*0, 2*25), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.8, 0.1, 0.1), &tex_RedBricks, &mat_redbricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*26), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*27), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*20, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*28), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*29), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*30), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*31), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*27, 0.8, 2*32), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*30, 2*0, 2*32), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*34, 2*0, 2*32), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*37, 0.8, 2*32), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*32), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*33), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*32, 2*0, 2*34), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*34), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*35), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*36), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*32, 0.8, 2*37), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*37), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*38), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*39), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*40), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*41), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*42), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*32, 0.8, 2*43), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*43), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*44), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*45), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*46), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*15, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*50, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*47), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*21, 0.8, 2*48), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*43, 0.8, 2*48), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*50, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*48), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*18, 0.8, 2*49), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*48, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*49), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*20, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*48, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*50), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*15, 0.8, 2*51), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*19, 2*0, 2*51), ofVec3f(0, 270, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*19, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*20, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*45, 2*0, 2*51), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*45, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*51), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*13, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*20, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*34, 0.8, 2*52), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*44, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*48, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*51, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*52), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*14, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*16, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*18, 0.8, 2*53), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*18, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*46, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*48, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*50, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*53), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*15, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*17, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*32, 2*0, 2*54), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*47, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*49, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*50, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*54), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*12, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*13, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*14, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*15, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*16, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*17, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*18, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*19, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*21, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*22, 0.8, 2*55), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*22, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*23, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*24, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*34, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*35, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*36, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*37, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*38, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*39, 0.8, 2*55), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*39, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*40, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*41, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*42, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*43, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*45, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*46, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*47, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*48, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*49, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*50, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*51, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*52, 2*0, 2*55), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*20, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*21, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*22, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*23, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*35, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*36, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*37, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*38, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*39, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*40, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*41, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*42, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*43, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*44, 2*0, 2*56), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*57), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*57), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*57), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*57), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*57), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.0, 0.5), &tex_BlueBricks, &mat_bluebricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*58), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*58), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*32, 2*0, 2*58), ofVec3f(0, 180, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*58), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*58), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*58), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*59), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*59), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*59), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*59), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*59), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*59), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*59), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*59), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*59), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*60), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*60), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*60), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*60), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*60), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*60), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*30, 0.8, 2*60), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*60), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*60), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*60), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*60), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*60), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*61), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_end( ofVec3f(2*25, 2*0, 2*61), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.9, 0.0), &tex_Door, &mat_emerald ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*25, 2*0, 2*61), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f(2*26, 2*0, 2*61), ofVec3f(0, 90, 0), ofVec3f(2, 2, 2), ofVec3f(0.0, 0.7, 0.7), &tex_Door, &mat_cyanmetal ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*26, 2*0, 2*61), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*61), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*28, 0.8, 2*61), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*61), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customNPC( ofVec3f(2*29, 0.8, 2*61), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );
	gameobjects.push_back(go);
	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*61), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);
	enemy_count++;

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*61), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*61), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*61), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*61), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*61), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*24, 2*0, 2*62), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*25, 2*0, 2*62), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*62), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*27, 2*0, 2*62), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*28, 2*0, 2*62), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*29, 2*0, 2*62), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*30, 2*0, 2*62), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*31, 2*0, 2*62), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*32, 2*0, 2*62), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f(2*33, 2*0, 2*62), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.4, 0.4, 0.4), &tex_Floor, &mat_greybricks ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*62), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*26, 2*0, 2*63), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*27, 2*0, 2*63), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*28, 2*0, 2*63), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*29, 2*0, 2*63), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*30, 2*0, 2*63), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*31, 2*0, 2*63), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*32, 2*0, 2*63), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*33, 2*0, 2*63), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);

	go = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f(2*34, 2*0, 2*63), ofVec3f(0, 0, 0), ofVec3f(2, 2, 2), ofVec3f(0.5, 0.25, 0.0), &tex_WoodWall, &mat_wood ) );
	gameobjects.push_back(go);




	// set player position
	player.position = ofVec3f(2*1, 0.80, 2*5);


	return enemy_count;
}
