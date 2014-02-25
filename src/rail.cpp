//
//  rail.cpp
//  eyeoSim
//
//  Created by Andrew Lovett-Barron on 2/19/14.
//
//

#include "rail.h"

Rail::Rail(ofVec3f _loc, ofVec3f _ang, float _len) :
    loc(_loc),
    ang(_ang),
    length(_len)
{
    motor = new Motor();
    
}

Rail::~Rail() {
}

void Rail::update() {
    motor->setPosition(pos);
    motor->update();
}

void Rail::draw() {
    ofPushMatrix();
    ofSetColor(255,255,255);
    ofTranslate(loc);
    ofDrawBox(length,10,10);
    motor->draw();
    ofPopMatrix();
    
}

void Rail::moveToPoint(float p) {
    pos = p;
}

float Rail::getPosition() {
    return pos;
}

void Rail::reset() {
    pos = 0;
}