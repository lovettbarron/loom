//
//  loom.cpp
//  eyeoSim
//
//  Created by Andrew Lovett-Barron on 2/19/14.
//
//

#include "loom.h"

Loom::Loom(Motor& _source, Motor& _target) :
    source(&_source),
    target(&_target)
{
    numberOfStrings = 10;
    spacingBetweenStrings = 5;
}

Loom::~Loom() {
    
}

void Loom::update() {

}

void Loom::draw() {
    float len = (numberOfStrings * spacingBetweenStrings) + (spacingBetweenStrings * 2);
    
    
    ofPushMatrix();
    ofTranslate(0,0,0);
    ofRotateY(source->getRotation());
    ofSetColor(190,190,255);
    ofDrawBox(len,2,1);
    ofPopMatrix();
    
}