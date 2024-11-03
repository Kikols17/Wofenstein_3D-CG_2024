#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    // setup the window
	ofSetFrameRate(60);
	glEnable(GL_DEPTH_TEST);
	ofBackground(0.05, 0.05, 0.05);

	glPointSize(200);
	glLineWidth(3);


    // setup the camara
    this->cam = customCamara();

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
            glOrtho(-zoom*gw(), zoom*gw(), -zoom*gh(), zoom*gh(), 0, 100);

            glPushMatrix();
                glMatrixMode(GL_MODELVIEW);
                glLoadIdentity();
                //lookat(this->cam.pos.x, this->cam.pos.y, this->cam.pos.z, this->cam.pos.x, this->cam.pos.y, this->cam.pos.z, this->cam.up.x, this->cam.up.y, this->cam.up.z);
                for (int i=0; i<gosize; i++) {
                    this->gameobjects[i]->draw2D();
                }
            glPopMatrix();
            break;

        
        case 1:
            /* 3D */
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            //glOrtho(-zoom*gw(), zoom*gw(), -zoom*gh(), zoom*gh(), 0, 100);

            glPushMatrix();
                glMatrixMode(GL_MODELVIEW);
                glLoadIdentity();
                lookat(this->cam.pos.x, this->cam.pos.y, this->cam.pos.z, this->cam.target.x, this->cam.target.y, this->cam.target.z, this->cam.up.x, this->cam.up.y, this->cam.up.z);
                
                perspective(60.0 / zoom, 10.0, 1000.0);
                //lookover(this->cam.pos.x, this->cam.pos.y, this->cam.pos.z, this->cam.looking.x, this->cam.looking.y, this->cam.looking.z, this->cam.up.x, this->cam.up.y, this->cam.up.z);
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
            ofSetWindowTitle("2D");
            this->viewmode = 0;
            break;
        case '2':
            ofSetWindowTitle("3D");
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

    if (key=='w') {
        cam.moveto(cam.pos.x+cam.front.x, cam.pos.y+cam.front.y, cam.pos.z+cam.front.z);
    }
    if (key=='s') {
        cam.moveto(cam.pos.x-cam.front.x, cam.pos.y-cam.front.y, cam.pos.z-cam.front.z);
    }
    if (key=='a') {
        cam.moveto(cam.pos.x-cam.right.x, cam.pos.y-cam.right.y, cam.pos.z-cam.right.z);
    }
    if (key=='d') {
        cam.moveto(cam.pos.x+cam.right.x, cam.pos.y+cam.right.y, cam.pos.z+cam.right.z);
    }
    if (key=='c') {
        cam.moveto(cam.pos.x-cam.trueup.x, cam.pos.y-cam.trueup.y, cam.pos.z-cam.trueup.z);
    }
    if (key==' ') {
        cam.moveto(cam.pos.x+cam.trueup.x, cam.pos.y+cam.trueup.y, cam.pos.z+cam.trueup.z);
    }

    if (key==OF_KEY_LEFT) {
        cam.looking_angleY -= 5;
    }
    if (key==OF_KEY_RIGHT) {
        cam.looking_angleY += 5;
    }
    if (key==OF_KEY_UP) {
        cam.looking_angleX += 5;
    }
    if (key==OF_KEY_DOWN) {
        cam.looking_angleX -= 5;
    }
    this->cam.updatelooking();
    cout << endl;
    cout << "pos: " << cam.pos.x << " " << cam.pos.y << " " << cam.pos.z << endl;
    cout << "target: " << cam.target.x << " " << cam.target.y << " " << cam.target.z << endl;
    cout << "looking: " << cam.looking.x << " " << cam.looking.y << " " << cam.looking.z << endl;
    cout << "up: " << cam.up.x << " " << cam.up.y << " " << cam.up.z << endl;
    cout << "right: " << cam.right.x << " " << cam.right.y << " " << cam.right.z << endl;
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
