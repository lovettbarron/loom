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
    motor->setPosition((pos*length)/2);
    motor->update();
}

void Rail::draw() {
    ofPushMatrix();
    ofSetColor(255,255,255);
    ofTranslate(loc);
    ofRotateX(ang.x);
    ofRotateY(ang.y);
    ofRotateZ(ang.z);
    ofDrawBox(length,10,10);
    motor->draw();
    ofPopMatrix();
    ofPushMatrix();
    ofLoadMatrix(ofMatrix4x4::newIdentityMatrix());
    motor->drawLoom();
    ofPopMatrix();
    
}

void Rail::moveToPoint(float p) {
    pos = p;
}

void Rail::setRotation(float r) {
    motor->setRotation(r);
}

float Rail::getPosition() {
    return pos;
}

void Rail::reset() {
    pos = 0;
}

Loom& Rail::getLoom() {
    return motor->getLoom();
}

void Rail::setPartner(Loom &loom) {
    motor->setPartner(loom);
}