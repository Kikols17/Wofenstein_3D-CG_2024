#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    // setup the window
	ofSetFrameRate(60);
	glEnable(GL_DEPTH_TEST);
	ofBackground(0.05, 0.05, 0.05);

	glPointSize(200);
	glLineWidth(3);


    // setup the gameobjects
    this->gameobjects = vector<shared_ptr<customGameObject>>();

    // create a new room
    shared_ptr<customRoom_axis> axis = make_shared<customRoom_axis>( ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(2048, 2048, 2048) );
    this->gameobjects.push_back(axis);

    shared_ptr<customRoom_hallway> hallway = make_shared<customRoom_hallway>( ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    this->gameobjects.push_back(hallway);

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
            glOrtho(-zoom*gw(), zoom*gw(), -zoom*gh(), zoom*gh(), -10, 10);

            glPushMatrix();
                glMatrixMode(GL_MODELVIEW);
                glLoadIdentity();
                for (int i=0; i<gosize; i++) {
                    this->gameobjects[i]->draw2D();
                }
            glPopMatrix();
            break;

        
        case 1:
            /* 3D */
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            glOrtho(-zoom*gw(), zoom*gw(), -zoom*gh(), zoom*gh(), -10, 10);
            //perspective(60, 10, 100);

            glPushMatrix();
                glMatrixMode(GL_MODELVIEW);
                glLoadIdentity();
                lookat(5, 5, 5, 0, 0, 0, 0, 1, 0);
                for (int i=0; i<gosize; i++) {
                    this->gameobjects[i]->draw3D();
                }
            glPopMatrix();
            break;
        

        default:
            cout << "[Error]: viewmode \"" << this->viewmode << "\" does not exist!!" << endl;
            return;
            break;
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
    switch (key) {
        case '1':
            cout << "2D mode" << endl;
            this->viewmode = 0;
            break;
        case '2':
            cout << "3D mode" << endl;
            this->viewmode = 1;
            break;

        case '-':
            this->zoom /= 0.5;
            break;
        case '+':
            this->zoom *= 0.5;
            break;
        default:
            break;
    }
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
