//
//  loom.cpp
//  eyeoSim
//
//  Created by Andrew Lovett-Barron on 2/19/14.
//
//

#include "loom.h"

Loom::Loom()
{
    numberOfStrings = 20;
    spacingBetweenStrings = 10;
}

Loom::~Loom() {
    
}

void Loom::update() {

}

void Loom::setTarget(Loom& loom) {
    target = &loom;
}

void Loom::draw() {
    float len = (numberOfStrings * spacingBetweenStrings) + (spacingBetweenStrings * 2);
    
    ofPushMatrix();
    ofTranslate(0,0,0);
    ofRotateZ(rotation*90);
    ofSetColor(190,190,255);
    ofDrawBox(2,len,1);
    ofPopMatrix();
    
}

void Loom::setRotation(float r) {
    rotation = r;
//    cout << rotation << endl;
}