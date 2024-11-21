#include "ofApp.h"


vector<customColisionBox*> globalcolisionBoxes;
vector<customColisionBox*> globalcolisionBoxes_toremove;

vector<shared_ptr<customGameObject>*> globalgameobjects;
vector<shared_ptr<customGameObject>*> globalgameobjects_toremove;


//--------------------------------------------------------------
void ofApp::setup(){
    
    // setup the window
	ofSetFrameRate(60);
	glEnable(GL_DEPTH_TEST);
	ofBackground(0.05, 0.05, 0.05);

	glPointSize(5);
	glLineWidth(3);

    globalcolisionBoxes = vector<customColisionBox*>({}); 

    // setup the player
    this->player = customPlayer(ofVec3f(0, 0.90, 0), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7));
    this->cam = &(this->player.cam);

    // setup the gameobjects
    globalgameobjects = vector<shared_ptr<customGameObject>*>();
    globalgameobjects_toremove = vector<shared_ptr<customGameObject>*>();


    //test_level(globalgameobjects, this->player);

    //circular_level(globalgameobjects, this->player);

    //training_level(globalgameobjects, this->player);

    //excapefromwolfenstein_level(globalgameobjects, this->player);

    wolfenstein(globalgameobjects, this->player);

    // add weapon to the floor
    //globalgameobjects.push_back( new shared_ptr<customGameObject>(new customWeapon(ofVec3f(2*4, 0.50, 2*32), ofVec3f(0, 0, 0), ofVec3f(0.5, 0.5, 0.5))) );


}

//--------------------------------------------------------------
void ofApp::update(){

    // remove all objects that need to be removed
    for (int i=0; i<(int)globalgameobjects_toremove.size(); i++) {
        for (int j=0; j<(int)globalgameobjects.size(); j++) {
            if ((*globalgameobjects[j]) == (*globalgameobjects_toremove[i])) {
                //cout << "removing object at " << globalgameobjects[j] << endl;
                globalgameobjects[j]->reset();
                globalgameobjects.erase(globalgameobjects.begin() + j);
                break;
            }
        }
    }
    globalgameobjects_toremove.clear();

    // remove all colisionBoxes that need to be removed
    for (int i=0; i<(int)globalcolisionBoxes_toremove.size(); i++) {
        for (int j=0; j<(int)globalcolisionBoxes.size(); j++) {
            if (globalcolisionBoxes[j] == globalcolisionBoxes_toremove[i]) {
                //cout << "removing colisionBox at " << globalcolisionBoxes[j] << endl;
                free(globalcolisionBoxes[j]);
                globalcolisionBoxes.erase(globalcolisionBoxes.begin() + j);
                break;
            }
        }
    }
    globalcolisionBoxes_toremove.clear();

    // update all objects
    int gosize = (int)globalgameobjects.size();
    for (int i=0; i<gosize; i++) {
        (*globalgameobjects[i])->update();
    }

    // update player
    this->player.update(this->viewmode);
}

//--------------------------------------------------------------
void ofApp::draw(){
    //cout << "hitscan_distance: " << hitscan_distance(this->player.cam.pos, this->player.cam.looking, vector<int>({1})) << endl;
    //this->cam->moveto(0, 0, -100);
    
    if (this->showcontrols) {
        // draw the controls
        ofSetColor(255, 255, 255);
        ofDrawBitmapString("Controls:\n\t1: 2D view\n\t2: 3D view\n\n\t+: zoom in (2D)\n\t-: zoom out (2D)\n\n\tm:toggle minimap (3D)\n\th: toggle hitboxes (3D)\n\tc: toggle controls [THIS SCREEN]\n\n\tw: walk forward\n\ts: walk backward\n\ta: walk left\n\td: walk right\n\tshift: run\n\n\tmouse: look around\n\tspace left: shoot", 10, 50);
    }

    // draw all objects in the correct viewmode
    int gosize = (int)globalgameobjects.size();
    switch (this->viewmode) {
        case 0:
            /* 2D */
            glViewport(0, 0, gw(), gh());
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();

            glPushMatrix();
                this->cam->draw2D();    // apply the 2D camara's transformations
                for (int i=0; i<gosize; i++) {
                    (*globalgameobjects[i])->draw2D();
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
                    (*globalgameobjects[i])->draw3D();
                }
                for (int i=0; showhitboxes && i<(int)globalcolisionBoxes.size(); i++) {
                    (*globalcolisionBoxes[i]).draw3D();
                }
                this->player.draw3D();
            glPopMatrix();

            // mini-map (2D)
            if (this->showminimap) {
                glViewport(3*gw()/4, 3*gh()/4, gw()/4, gh()/4);
                glMatrixMode(GL_PROJECTION);
                glLoadIdentity();
                glPushMatrix();
                    this->cam->draw2D();    // apply the 2D camara's transformations
                    for (int i=0; i<gosize; i++) {
                        (*globalgameobjects[i])->draw2D();
                    }
                    this->player.draw2D();
                glPopMatrix();
            }
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

        case 'm':
            this->showminimap = !this->showminimap;
            break;
        case 'h':
            this->showhitboxes = !this->showhitboxes;
            break;
        case 'c':
            this->showcontrols = !this->showcontrols;
            break;
        
        default:
            break;
    }


    if (key=='w' || key=='W') {
        this->player.walking_forward = true;
    }
    if (key=='s' || key=='S') {
        this->player.walking_backward = true;
    }
    if (key=='a' || key=='A') {
        this->player.walking_left = true;
    }
    if (key=='d' || key=='D') {
        this->player.walking_right = true;
    }
    if (key==OF_KEY_CONTROL) {
        //this->player.walking_
    }
    if (key==' ') {
        //this->player.walking_
    }
    if (key==OF_KEY_SHIFT) {
        this->player.running = true;
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
    if (key=='w' || key=='W') {
        this->player.walking_forward = false;
    }
    if (key=='s' || key=='S') {
        this->player.walking_backward = false;
    }
    if (key=='a' || key=='A') {
        this->player.walking_left = false;
    }
    if (key=='d' || key=='D') {
        this->player.walking_right = false;
    }
    if (key==OF_KEY_CONTROL) {
        //this->player.walking_
    }
    if (key==' ') {
        //this->player.walking_
    }
    if (key==OF_KEY_SHIFT) {
        this->player.running = false;
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
    if (button == 0) {
        this->player.shooting = true;
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    if (button == 0) {
        this->player.shooting = false;
    }
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
