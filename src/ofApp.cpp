#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    // setup the window
	ofSetFrameRate(60);
	glEnable(GL_DEPTH_TEST);
	ofBackground(0.05, 0.05, 0.05);

	glPointSize(5);
	glLineWidth(3);


    // setup the player
    this->player = customPlayer(ofVec3f(0, 1, 0), ofVec3f(0, 0, 0), ofVec3f(1, 1, 1));
    this->cam = &(this->player.cam);

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

    // update player
    this->player.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

    //this->cam->moveto(0, 0, -100);

    // draw all objects in the correct viewmode
    int gosize = (int)this->gameobjects.size();
    switch (this->viewmode) {
        case 0:
            /* 2D */
            glViewport(0, 0, gw(), gh());
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();

            glPushMatrix();
                this->cam->draw2D();    // apply the 2D camara's transformations
                for (int i=0; i<gosize; i++) {
                    this->gameobjects[i]->draw2D();
                }
                this->player.draw2D();
            glPopMatrix();

            break;

        
        case 1:
            /* 3D */
            glViewport(0, 0, gw(), gh());
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            //glOrtho(-zoom*gw(), zoom*gw(), -zoom*gh(), zoom*gh(), 0, 100);

            glPushMatrix();
                this->cam->draw3D();     // apply the 3D camara's transformations
                //lookover(this->cam->pos.x, this->cam->pos.y, this->cam->pos.z, this->cam->looking.x, this->cam->looking.y, this->cam->looking.z, this->cam->up.x, this->cam->up.y, this->cam->up.z);
                for (int i=0; i<gosize; i++) {
                    this->gameobjects[i]->draw3D();
                }
                this->player.draw3D();
            glPopMatrix();

            // mini-map (2D)
            glViewport(0, 3*gh()/4, gw()/4, gh()/4);
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            glPushMatrix();
                this->cam->draw2D();    // apply the 2D camara's transformations
                for (int i=0; i<gosize; i++) {
                    this->gameobjects[i]->draw2D();
                }
                this->player.draw2D();
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
            this->cam->zoom /= 0.5;
            break;
        case '+':
            this->cam->zoom *= 0.5;
            break;
        default:
            break;
    }

    GLfloat step = 0.25;
    if (key=='w') {
        this->player.walking_forward = true;
    }
    if (key=='s') {
        this->player.walking_backward = true;
    }
    if (key=='a') {
        this->player.walking_left = true;
    }
    if (key=='d') {
        this->player.walking_right = true;
    }
    if (key==OF_KEY_CONTROL) {
        //this->player.walking_
    }
    if (key==' ') {
        //this->player.walking_
    }

    if (key==OF_KEY_LEFT) {
        this->player.looking_left = true;
    }
    if (key==OF_KEY_RIGHT) {
        this->player.looking_right = true;
    }
    if (key==OF_KEY_UP) {
        this->player.looking_up = true;
    }
    if (key==OF_KEY_DOWN) {
        this->player.looking_down = true;
    }
    this->cam->updatelooking();
    //cout << endl;
    //cout << "pos: " << cam->pos.x << " " << cam->pos.y << " " << cam->pos.z << endl;
    //cout << "target: " << cam->target.x << " " << cam->target.y << " " << cam->target.z << endl;
    //cout << "looking: " << cam->looking.x << " " << cam->looking.y << " " << cam->looking.z << endl;
    //cout << "up: " << cam->up.x << " " << cam->up.y << " " << cam->up.z << endl;
    //cout << "right: " << cam->right.x << " " << cam->right.y << " " << cam->right.z << endl;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key=='w') {
        this->player.walking_forward = false;
    }
    if (key=='s') {
        this->player.walking_backward = false;
    }
    if (key=='a') {
        this->player.walking_left = false;
    }
    if (key=='d') {
        this->player.walking_right = false;
    }
    if (key==OF_KEY_CONTROL) {
        //this->player.walking_
    }
    if (key==' ') {
        //this->player.walking_
    }

    if (key==OF_KEY_LEFT) {
        this->player.looking_left = false;
    }
    if (key==OF_KEY_RIGHT) {
        this->player.looking_right = false;
    }
    if (key==OF_KEY_UP) {
        this->player.looking_up = false;
    }
    if (key==OF_KEY_DOWN) {
        this->player.looking_down = false;
    }
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
