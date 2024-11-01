#pragma once

#include "ofMain.h"

#include "customGameObject.h"
#include "customRoom.h"
#include "customRoom_types.h"

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


		int viewmode = 0; // 0 = 2D, 1 = 3D

		vector<shared_ptr<customGameObject>> gameobjects;
		
};
