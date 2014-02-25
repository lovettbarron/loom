//
//  motor.h
//  eyeoSim
//
//  Created by Andrew Lovett-Barron on 2/19/14.
//
//

#ifndef __eyeoSim__motor__
#define __eyeoSim__motor__

#include <iostream>
#include "ofMain.h"
#include "loom.h"

class Motor {
public:
    Motor();
    ~Motor();
    
    void update();
    void draw();
    
    void setPosition(float loc); // override of rail?
    void rotateToRad();
    float getRotation();
    void setRotation(float r);
    ofVec2f getBounds();
    ofVec2f getPosition();
    Loom& getLoom();
    void setPartner(Loom& _loom);
    
private:
    Loom * loom;
    float rotation;
    ofVec3f position; // define by Rail
    ofVec3f angle; // Define by Rail
};

#endif /* defined(__eyeoSim__motor__) */
