#include "ofApp.h"

int enemy_count = 0;
int kill_count = 0;
int gamestate = 3;      // -1=paused, 0=playing, 1=player died, 2=end reached, 3=level select menu
int last_gamestate = 3;


vector<customColisionBox*> globalcolisionBoxes;
vector<customColisionBox*> globalcolisionBoxes_toremove;

vector<shared_ptr<customGameObject>*> globalgameobjects;
vector<shared_ptr<customGameObject>*> globalgameobjects_toremove;

extern struct lightqueue globallightqueue[8];


ofImage tex_JailBlueBricks;
ofImage tex_BlueBricks;
ofImage tex_GreyBricks;
ofImage tex_MossBricks;
ofImage tex_RedBricks;
ofImage tex_CyanMetal;
ofImage tex_WoodWall;
ofImage tex_Floor;
ofImage tex_Door1;
ofImage tex_Door;
ofImage tex_Background;


bool global_ambientbool = true;
bool global_ambient_ambbool = true;
bool global_ambient_difbool = true;
bool global_ambient_specbool = true;

bool global_directionalbool = true;
bool global_directional_ambbool = true;
bool global_directional_difbool = true;
bool global_directional_specbool = true;

bool global_pontualbool = true;
bool global_pontual_ambbool = true;
bool global_pontual_difbool = true;
bool global_pontual_specbool = true;

bool global_spotlightbool = true;
bool global_spotlight_ambbool = true;
bool global_spotlight_difbool = true;
bool global_spotlight_specbool = true;




//--------------------------------------------------------------
void ofApp::setup(){
    
    // setup the window
    ofSetFrameRate(60);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_FRONT);
    ofBackground(0.05, 0.05, 0.05);
    ofBackground(1.0, 1.0, 1.0);

    ofDisableArbTex();
	glPointSize(5);
	glLineWidth(3);

    tex_JailBlueBricks.load("JailBlueBricks.png");
    tex_BlueBricks.load("BlueBricks.png");
    tex_GreyBricks.load("GreyBricks.png");
    tex_MossBricks.load("MossBricks.png");
    tex_RedBricks.load("RedBricks.png");
    tex_CyanMetal.load("CyanMetal.png");
    tex_WoodWall.load("WoodWall.png");
    tex_Floor.load("Floor.png");
    tex_Door1.load("Door1.png");
    tex_Door.load("Door.png");
    tex_Background.load("Background.png");


    globalcolisionBoxes = vector<customColisionBox*>({});
    globalcolisionBoxes_toremove = vector<customColisionBox*>({});


    // setup the gameobjects
    globalgameobjects = vector<shared_ptr<customGameObject>*>({});
    globalgameobjects_toremove = vector<shared_ptr<customGameObject>*>({});

    loadLevel(1);

    //cout << "light queue" << endl;
    //for (int i=0; i<NLIGHTS; i++) {
    //    cout << globallightqueue[i].used << " " << globallightqueue[i].light_id << endl;
    //}
}

//--------------------------------------------------------------
void ofApp::update(){

    // update player
    this->player.update(this->viewmode);

    if (gamestate!=0) {
        // game is over, either player is dead or end was reached
        return;
    }

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
}

//--------------------------------------------------------------
void ofApp::draw(){
    //cout << "hitscan_distance: " << hitscan_distance(this->player.cam.pos, this->player.cam.looking, vector<int>({1})) << endl;
    //this->cam->moveto(0, 0, -100);

    // draw the UI
    //glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
    drawUI();

    // draw all objects in the correct viewmode
    int gosize = (int)globalgameobjects.size();

    // stuff for textures
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glTexParameteri(GL_TEXTURE, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE, GL_TEXTURE_WRAP_T, GL_REPEAT);


    glEnable(GL_LIGHTING);//habilita o uso de ilumina��o
    glEnable(GL_NORMALIZE);//utiliza versores para normais (normais normalizadas)
    glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_TRUE);
    glDisable(GL_COLOR_MATERIAL);
    glShadeModel(GL_FLAT);
    //glShadeModel(GL_SMOOTH);

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
        case 2:
            /* 3D */
            glViewport(0, 0, gw(), gh());
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            //glOrtho(-zoom*gw(), zoom*gw(), -zoom*gh(), zoom*gh(), 0, 100);

            glPushMatrix();
                if (this->viewmode == 1) {
                    this->cam->draw3D_1();    // apply the 3D camara's transformations for first
                } else {
                    this->cam->draw3D_3();    // apply the 3D camara's transformations for 3rd person view
                }
                //lookover(this->cam->pos.x, this->cam->pos.y, this->cam->pos.z, this->cam->looking.x, this->cam->looking.y, this->cam->looking.z, this->cam->up.x, this->cam->up.y, this->cam->up.z);
                for (int i=0; i<gosize; i++) {
                    (*globalgameobjects[i])->draw3D();
                }
                for (int i=0; showhitboxes && i<(int)globalcolisionBoxes.size(); i++) {
                    (*globalcolisionBoxes[i]).draw3D();
                }
                this->player.draw3D();
            glPopMatrix();

            // mini-map (2D) n se pode ter minimapa :(
            //if (this->showminimap) {
            //    glViewport(3*gw()/4, 3*gh()/4, gw()/4, gh()/4);
            //    glMatrixMode(GL_PROJECTION);
            //    glLoadIdentity();
            //    glPushMatrix();
            //        this->cam->draw2D();    // apply the 2D camara's transformations
            //        for (int i=0; i<gosize; i++) {
            //            (*globalgameobjects[i])->draw2D();
            //        }
            //        this->player.draw2D();
            //    glPopMatrix();
            //}
            break;
        

        default:
            cout << "[Error]: viewmode \"" << this->viewmode << "\" does not exist!!" << endl;
            return;
            break;
    }


    glDisable(GL_LIGHTING);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
    switch (key) {
        case '1':
            if (gamestate==3) {
                loadLevel(1);
            } else {
                ofSetWindowTitle("2D");
                this->viewmode = 0;
            }
            break;
        case '2':
            if (gamestate==3) {
                loadLevel(2);
            } else {
                ofSetWindowTitle("3D (1st person)");
                this->viewmode = 1;
            }
            break;
        case '3':
            ofSetWindowTitle("3D (3rd person)");
            this->viewmode = 2;
            break;

        case '-':
            this->cam->zoom /= 0.9;
            break;
        case '+':
            this->cam->zoom *= 0.9;
            break;

        case 'm':
        case 'M':
            this->showminimap = !this->showminimap;
            break;
        case 'h':
        case 'H':
            this->showhitboxes = !this->showhitboxes;
            break;
        case 'c':
        case 'C':
            this->showcontrols = !this->showcontrols;
            break;
        case 'o':
        case 'O':
            this->showobjective = !this->showobjective;
            break;
        case 'r':
        case 'R':
            // choose level
            gamestate = 3;
            break;
        
        case 'f':
        case 'F':
            if (!this->player.flashlight->debounce) {
                this->player.flashlight->lightToggle();
                this->player.flashlight->debounce = true;
            }
            global_spotlight_ambbool = true;
            global_spotlight_difbool = true;
            global_spotlight_specbool = true;
            break;
        
        case ' ':
            if (gamestate == -1) {
                gamestate = last_gamestate;
            } else {
                last_gamestate = gamestate;
                gamestate = -1;
            }
            break;
        

        case 'w':
        case 'W':
            this->player.walking_forward = true;
            break;
        
        case 's':
        case 'S':
            this->player.walking_backward = true;
            break;
        
        case 'a':
        case 'A':
            this->player.walking_left = true;
            break;
        
        case 'd':
        case 'D':
            this->player.walking_right = true;
            break;
        
        case OF_KEY_SHIFT:
            this->player.running = true;
            break;



        // lights
        // ambient
        case OF_KEY_F1:
            global_ambientbool = !global_ambientbool;
            break;
        case OF_KEY_F2:
            global_spotlight_difbool = !global_spotlight_difbool;
            break;
        case OF_KEY_F3:
            global_spotlight_specbool = !global_spotlight_specbool;
            break;
        case OF_KEY_F4:
            global_spotlight_ambbool = !global_spotlight_ambbool;
            break;

        // directional
        case OF_KEY_F5:
            global_directionalbool = !global_directionalbool;
            global_directional_ambbool = true;
            global_directional_difbool = true;
            global_directional_specbool = true;
            cout << true << endl;
            break;
        case OF_KEY_F6:
            global_directional_ambbool = !global_directional_ambbool;
            break;
        case OF_KEY_F7:
            global_directional_difbool = !global_directional_difbool;
            break;
        case OF_KEY_F8:
            global_directional_specbool = !global_directional_specbool;
            break;

        // pontual
        case OF_KEY_F9:
            global_pontualbool = !global_pontualbool;
            global_pontual_ambbool = true;
            global_pontual_difbool = true;
            global_pontual_specbool = true;
            break;
        case OF_KEY_F10:
            global_pontual_ambbool = !global_pontual_ambbool;
            break;
        case OF_KEY_F11:
            global_pontual_difbool = !global_pontual_difbool;
            break;
        case OF_KEY_F12:
            global_pontual_specbool = !global_pontual_specbool;
            break;

        
        default:
            break;
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

    if (key=='f') {
        this->player.flashlight->debounce = false;
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
    // mouse outside the window, pause the game
    last_gamestate = gamestate;
    gamestate = -1;
}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY) {
    // mouse scrolled, zoom in/out
    if (scrollY < 0) {
        this->cam->zoom /= 0.95*abs(scrollY);
    } else if (scrollY > 0) {
        this->cam->zoom *= 0.95*abs(scrollY);
    }
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







//--------------------------------------------------------------
// custom functions
void ofApp::drawUI() {
    // draw the controls

    string s = "";
    int pos_x, pos_y;
    int color[3];

    if (gamestate == -1) {
        color[0] = 255; color[1] = 255; color[2] = 0;
        pos_x = gw()/2*0.8;
        pos_y = gh()/2*0.8;
        s += "\tPAUSED\n\n\tpress 'space' to continue\n\tpress 'r' to restart/choose level\n";

    } else if (gamestate == 3) {
        color[0] = 255; color[1] = 255; color[2] = 255;
        pos_x = gw()/2*0.8;
        pos_y = gh()/2*0.8;
        s += "\tChoose gamemode: press 1 or 2\n";

    } else if (gamestate == 1) {
        color[0] = 255; color[1] = 0; color[2] = 0;
        pos_x = gw()/2*0.8;
        pos_y = gh()/2*0.8;
        //cout << pos_x << " " << pos_y << endl;
        s += "\tGAME OVER\n\t""player died! :(\n\n\tpress 'r' to restart/choose level\n";

    } else if (gamestate == 2) {
        color[0] = 0; color[1] = 255; color[2] = 0;
        pos_x = gw()/2*0.8;
        pos_y = gh()/2*0.8;
        s += "\tGAME OVER\n\tplayer won! :D\n\n\tpress 'r' to restart\n";

        // stats
        s += "Points (enemies defeated)x(health left) = " + to_string(kill_count) + "x" + to_string(this->player.health) + " = " + to_string(kill_count*this->player.health) + "\n";

    } else {
        color[0] = 255; color[1] = 255; color[2] = 255;
        pos_x = 30;
        pos_y = 30;
        if (this->showcontrols) {
            // draw the controls
            s += "Controls:\n";
            s += "\t1: 2D view\n";
            s += "\t2: 3D view (1st person)\n";
            s += "\t3: 3D view (3rd person)\n\n";

            s += "\t+/-: zoom in/out (2D)\n\n";

            s += "\tm: toggle minimap (3D)\n";
            s += "\th: toggle hitboxes (3D)\n";
            //s += "\to: toggle objective\n";
            s += "\tc: toggle controls [THIS SCREEN]\n";
            s += "\tf: use flashlight\n\n";

            s += "\tr: restart/choose level\n";
            s += "\tspace: pause\n\n";

            s += "\t[w,a,s,d]: walk around\n";
            s += "\tshift: run\n\n";

            s += "\tmouse: look around\n";
            s += "\tmouse left: shoot\n";
            s += "\tmouse scroll: zoom in/out (2D)\n\n";

            s += "\t(walk into doors to open)\n";
            s += "\t(reach green pad to end) [CHECK 2D]\n\n\n\n\n\n\n\n\n\n\n";

        } else {
            s += "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        }

        s += "Health: " + to_string(this->player.health) + "\n\n";
        //s += "Ammo: " + to_string(this->player.ammo) + "\n";
        s += "Enemies: " + to_string(kill_count) + "/" + to_string(enemy_count) + "\n";


        if (this->showobjective) {
            s += "\n\n\n\n\nObjective (\"o\" to hide):\n";
            s += "\tB.J. Blazkowicz e um soldado americano aprisionado no castelo Wolfenstein num universo em que a Alemanha venceu a segunda guerra mundial.\n";
            s += "\tEscape do castelo chegando a saida (marcado a verde no mapa 2D), enquanto serve violenta justica aos soldados alemaes para destruir o seu terrivel regime e plano de dominacao.\n";
        }
    }

    ofSetColor(color[0], color[1], color[2]);
    ofDrawBitmapString(s, pos_x, pos_y);
}



void ofApp::loadLevel(int level) {
    // load the level

    // remove all objects
    for (int i=0; i<(int)globalgameobjects.size(); i++) {
        globalgameobjects[i]->reset();
    }
    globalgameobjects.clear();
    globalgameobjects_toremove.clear();

    // remove all colisionBoxes
    for (int i=0; i<(int)globalcolisionBoxes.size(); i++) {
        free(globalcolisionBoxes[i]);
    }
    globalcolisionBoxes.clear();
    globalcolisionBoxes_toremove.clear();

    // reset all lights
    for (int i=0; i<8; i++) {
        globallightqueue[i].used = false;
        glDisable(globallightqueue[i].light_id);
    }



    // reset stats
    enemy_count = 0;
    kill_count = 0;


    // setup the player
    this->player = customPlayer(ofVec3f(0, 0.80, 0), ofVec3f(0, 0, 0), ofVec3f(1.0, 1.0, 1.0));
    this->cam = &(this->player.cam);
    //this->player.flashlight->lightOn();



    switch (level) {
        case 1:
            enemy_count = wolfenstein(globalgameobjects, this->player);
            break;
        case 2:
            enemy_count = eisenfaust(globalgameobjects, this->player);
            break;
        default:
            cout << "[Error]: level \"" << level << "\" does not exist!!" << endl;
            break;
    }

    gamestate = 0;
}