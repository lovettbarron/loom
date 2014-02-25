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
    
    target = this;
    
    for(int i=0;i<numberOfStrings;i++) {
        ofPoint pt = ofPoint(0,i*spacingBetweenStrings,0);
        points.push_back(pt);
    }
}

Loom::~Loom() {
    
}

void Loom::update() {
    float len = (numberOfStrings * spacingBetweenStrings) + (spacingBetweenStrings * 2);
    
    ofPushMatrix();
    ofTranslate(0,0,0);
    ofRotateZ(rotation*90);
    ofSetColor(190,190,255);
    ofDrawBox(2,len,1);
    
    for(int i=0;i<points.size();i++) {
        GLfloat m[16];
        glGetFloatv(GL_MODELVIEW_MATRIX, m);
        ofMatrix4x4 mat(m);
        ofVec3f point(0,i*spacingBetweenStrings,0);
        ofVec3f transformed_point = point * mat;
        points.at(i) = transformed_point;
    }
    ofPopMatrix();
}

void Loom::setTarget(Loom& loom) {
    target = &loom;
    populateString();
    
}

void Loom::populateString() {
    vector<ofPoint> * t = target->getPoints();
    if(t->size() == points.size()) {
        for(int i=0;i<numberOfStrings;i++) {
            ofPolyline line = ofPolyline();
            line.addVertex(t->at(i));
            line.addVertex(points.at(i));
            string.push_back(line);
        }
    }
}

void Loom::draw() {
    vector<ofPoint> * t = target->getPoints();
    
    ofPushMatrix();
    
    for(int i=0;i<t->size();i++) {
        ofLine(ofPoint(t->at(i).x, t->at(i).y, t->at(i).z), points.at(i));
    }
    
    ofPopMatrix();
    
}

void Loom::setRotation(float r) {
    rotation = r;
//    cout << rotation << endl;
}

vector<ofPoint> * Loom::getPoints() {
    return &points;
}