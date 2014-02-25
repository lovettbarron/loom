//
//  rail.h
//  eyeoSim
//
//  Created by Andrew Lovett-Barron on 2/19/14.
//
//

#ifndef __eyeoSim__rail__
#define __eyeoSim__rail__

#include <iostream>
#include "ofMain.h"
#include "motor.h"
#include "loom.h"

class Rail {
public:
    Rail(ofVec3f _loc, ofVec3f _ang, float _len);
    ~Rail();
    
    void update();
    void draw();
    
    void moveToPoint(float p);
    float getPosition();
    
    void setRotation(float r);
    
    void reset();
    
    Loom& getLoom();
    void setPartner(Loom& loom);
private:
    Motor * motor;
    float pos;
    ofVec3f loc,ang;
    float length; // in cm
};

#endif /* defined(__eyeoSim__rail__) */
