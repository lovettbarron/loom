#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cam = new ofEasyCam();
    cam->enableMouseInput();
    
    light = new ofLight();
    rail = new Rail(ofVec3f(0,0,0),ofVec3f(),1000);
}

//--------------------------------------------------------------
void ofApp::update(){
    rail->update();
    rail->moveToPoint(pos);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackgroundGradient(ofColor(90,90,90), ofColor(0,0,0));
    cam->begin();
//    light->enable();
    ofDrawAxis(100);
    rail->draw();
//    light->disable();
    cam->end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    switch(key) {
        case 'q':
            pos += 5; break;
        case 'w':
            pos -= 5; break;
        default: break;
    }

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
