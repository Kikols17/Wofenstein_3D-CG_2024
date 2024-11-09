#include "ofApp.h"

#include "setuplevels.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    // setup the window
	ofSetFrameRate(60);
	glEnable(GL_DEPTH_TEST);
	ofBackground(0.05, 0.05, 0.05);

	glPointSize(5);
	glLineWidth(3);


    // setup the camara
    this->cam = customCamara();

    // setup the gameobjects
    this->gameobjects = vector<shared_ptr<customGameObject>>();
    

    //test_level(this->gameobjects);

    circular_level(this->gameobjects);

    //training_level(this->gameobjects);


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

            glPushMatrix();
                this->cam.draw2D();     // apply the 2D camara's transformations
                for (int i=0; i<gosize; i++) {
                    this->gameobjects[i]->draw2D();
                }
                // place a point in the center of the screen
                glBegin(GL_POINTS);
                    ofColor(255, 0, 0);
                    glVertex2f(gw()/2, gh()/2);
                glEnd();
            glPopMatrix();

            break;

        
        case 1:
            /* 3D */
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            //glOrtho(-zoom*gw(), zoom*gw(), -zoom*gh(), zoom*gh(), 0, 100);

            glPushMatrix();
                this->cam.draw3D();     // apply the 3D camara's transformations
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
            this->cam.zoom /= 0.5;
            break;
        case '+':
            this->cam.zoom *= 0.5;
            break;
        default:
            break;
    }

    GLfloat step = 0.25;
    if (key=='w') {
        cam.moveto(cam.pos.x+cam.front.x*step, cam.pos.y+cam.front.y*step, cam.pos.z+cam.front.z*step);
    }
    if (key=='s') {
        cam.moveto(cam.pos.x-cam.front.x*step, cam.pos.y-cam.front.y*step, cam.pos.z-cam.front.z*step);
    }
    if (key=='a') {
        cam.moveto(cam.pos.x+cam.right.x*step, cam.pos.y+cam.right.y*step, cam.pos.z+cam.right.z*step);
    }
    if (key=='d') {
        cam.moveto(cam.pos.x-cam.right.x*step, cam.pos.y-cam.right.y*step, cam.pos.z-cam.right.z*step);
    }
    if (key==OF_KEY_CONTROL) {
        cam.moveto(cam.pos.x-cam.trueup.x*step, cam.pos.y-cam.trueup.y*step, cam.pos.z-cam.trueup.z*step);
    }
    if (key==' ') {
        cam.moveto(cam.pos.x+cam.trueup.x*step, cam.pos.y+cam.trueup.y*step, cam.pos.z+cam.trueup.z*step);
    }

    if (key==OF_KEY_LEFT) {
        cam.looking_angleY += 5;
    }
    if (key==OF_KEY_RIGHT) {
        cam.looking_angleY -= 5;
    }
    if (key==OF_KEY_UP) {
        cam.looking_angleX -= 5;
    }
    if (key==OF_KEY_DOWN) {
        cam.looking_angleX += 5;
    }
    this->cam.updatelooking();
    //cout << endl;
    //cout << "pos: " << cam.pos.x << " " << cam.pos.y << " " << cam.pos.z << endl;
    //cout << "target: " << cam.target.x << " " << cam.target.y << " " << cam.target.z << endl;
    //cout << "looking: " << cam.looking.x << " " << cam.looking.y << " " << cam.looking.z << endl;
    //cout << "up: " << cam.up.x << " " << cam.up.y << " " << cam.up.z << endl;
    //cout << "right: " << cam.right.x << " " << cam.right.y << " " << cam.right.z << endl;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

    
    //Mouse.CursorPos = ofVec2f(gw()/2, gh()/2);
    //ofSetMousePosition(gw()/2, gh()/2);
    //mouse.CursorPos = ofVec2f(gw()/2, gh()/2);
    //mouseX = gw()/2;
    //mouseY = gh()/2;
    //glColorPointer(gw()/2, gh()/2);
    //ofSetMouseX(gw()/2);
    //ofSetMouseY(gh()/2);
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
