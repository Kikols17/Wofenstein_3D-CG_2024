#pragma once

#include "ofMain.h"

#include "cg_cam_extras.h"

#include "customGameObject.h"
#include "customPhysicsObject.h"
#include "customRoom_types.h"
#include "customCamara.h"

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


		int viewmode = 1; // 0 = 2D, 1 = 3D

		GLfloat theta = 60.0;
		GLfloat alpha = 1.0;
		GLfloat beta = 100.0;

		customCamara cam;

		vector<shared_ptr<customGameObject>> gameobjects;
		
};
