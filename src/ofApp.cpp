#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cam = new ofEasyCam();
    cam->enableMouseInput();
    
    light = new ofLight();
    rail1 = new Rail(ofVec3f(0,0,0),
                     ofVec3f(-45,0,0),
                     1000);
    
    rail2 = new Rail(
                     ofVec3f(0,0,500),
                     ofVec3f(0,180,45),
                     1000);
    
    rail3 = new Rail(
                     ofVec3f(500,500,500),
                     ofVec3f(0,180,90),
                     1000);
    
    
    rail1->setPartner(rail2->getLoom());
    rail2->setPartner(rail3->getLoom());
    rail3->setPartner(rail1->getLoom());
    
    t=0;
}

//--------------------------------------------------------------
void ofApp::update(){
    rail1->update();
    rail1->moveToPoint(sin(t));
    rail1->setRotation(cos(t));
    
    rail2->update();
    rail2->moveToPoint(cos(t));
    rail2->setRotation(sin(t));

    rail3->update();
    rail3->moveToPoint(cos(t));
    rail3->setRotation(cos(t));
    
    t+=.01;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackgroundGradient(ofColor(90,90,90), ofColor(0,0,0));
    cam->begin();
//    light->enable();
    ofDrawAxis(100);
    rail1->draw();
    rail2->draw();
    rail3->draw();
//    light->disable();
    cam->end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
//    switch(key) {
//        case 'q':
//            pos += 5; break;
//        case 'w':
//            pos -= 5; break;
//        default: break;
//    }

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
