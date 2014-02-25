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
}

void Motor::update() {
    
}

void Motor::draw() {
    ofPushMatrix();
    ofTranslate(position);
    ofSetColor(255,190,190);
    ofDrawBox(10,10,10);
    ofPopMatrix();
    
}

void Motor::setPosition(float loc) {
    position.x = loc;
}

void Motor::rotateToRad() { 
    
}

float Motor::getRotation() {
    
}

ofVec2f Motor::getBounds() {
    
}

ofVec2f Motor::getPosition() {
    
}
