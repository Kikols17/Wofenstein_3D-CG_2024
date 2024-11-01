#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){

    this->gameobjects = vector<shared_ptr<customGameObject>>();

    // create a new room
    shared_ptr<customRoom_hallway> room = make_shared<customRoom_hallway>( ofVec3f(0, 0, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1) );
    this->gameobjects.push_back(room);

}

//--------------------------------------------------------------
void ofApp::update(){

    // update all objects
    int gosize = (int)this->gameobjects.size();
    for (int i = 0; i < this->gameobjects.size(); i++) {
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
        for (int i = 0; i < gosize; i++) {
            this->gameobjects[i]->draw2D();
        }
        break;

    case 1:
        /* 3D */
        for (int i = 0; i < gosize; i++) {
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
