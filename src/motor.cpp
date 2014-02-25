//
//  motor.cpp
//  eyeoSim
//
//  Created by Andrew Lovett-Barron on 2/19/14.
//
//

#include "motor.h"


Motor::Motor() {
    position = ofVec3f(0,0,10);
    loom = new Loom();
}

void Motor::update() {
    loom->setRotation(rotation);
}

void Motor::draw() {
    ofPushMatrix();
    ofTranslate(position);
    ofSetColor(255,190,190);
    ofDrawBox(10,10,10);
    loom->draw();
    ofPopMatrix();
    
}

void Motor::setPosition(float loc) {
    position.x = loc;
}

void Motor::setRotation(float r) {
    rotation = r;
}

void Motor::rotateToRad() { 
    
}

float Motor::getRotation() {
    
}

ofVec2f Motor::getBounds() {
    
}

ofVec2f Motor::getPosition() {
    
}

Loom& Motor::getLoom() {
    return *loom;
}

void Motor::setPartner(Loom& _loom) {
    loom->setTarget(_loom);
}