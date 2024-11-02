#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    // setup the window
	ofSetFrameRate(60);
	glEnable(GL_DEPTH_TEST);

	glPointSize(200);
	glLineWidth(3);


    // setup the gameobjects
    this->gameobjects = vector<shared_ptr<customGameObject>>();

    // create a new room
    shared_ptr<customRoom_axis> axis = make_shared<customRoom_axis>( ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(0, 0, 0) );
    this->gameobjects.push_back(axis);

}

//--------------------------------------------------------------
void ofApp::update(){

    // update all objects
    int gosize = (int)this->gameobjects.size();
    for (int i=0; i<gosize; i++) {
        this->gameobjects[i]->update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){

    // draw all objects in the correct viewmode
    int gosize = (int)this->gameobjects.size();
    switch (this->viewmode) {
        case 0:
            /* 2D */
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            glOrtho(-10, 10, -10, 10, -10, 10);

            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            for (int i=0; i<gosize; i++) {
                this->gameobjects[i]->draw2D();
            }
            break;

        
        case 1:
            /* 3D */
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            perspective(60, 1, 1000);

            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            lookat(0, 0, 10, 0, 0, 0, 0, 1, 0);
            glLineWidth(3);
            for (int i=0; i<gosize; i++) {
                this->gameobjects[i]->draw3D();
            }
            break;
        

        default:
            cout << "[Error]: viewmode \"" << this->viewmode << "\" does not exist!!" << endl;
            return;
            break;
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
