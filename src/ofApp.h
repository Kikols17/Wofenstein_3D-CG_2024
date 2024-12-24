#pragma once

#include "ofMain.h"

#include "cg_cam_extras.h"

#include "customGameObject.h"
#include "customPhysicsObject.h"
#include "customRoom_types.h"
#include "customCamara.h"
#include "customPlayer.h"
#include "customNPC.h"
#include "customWeapon.h"

#include "utils_hitscan.h"

#include "setuplevels.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		void drawUI();
		void loadLevel(int level);


		int viewmode = 1; // 0 = 2D, 1 = 3D

		GLfloat theta = 60.0;
		GLfloat alpha = 1.0;
		GLfloat beta = 100.0;

		customPlayer player = customPlayer(ofVec3f(0, 1, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1));
		customCamara *cam;
		

		bool showcontrols = true;
		bool showhitboxes = false;
		bool showminimap = true;
		bool showobjective = false;
};;
