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

class Motor {
public:
    Motor();
    ~Motor();
    
    void update();
    void draw();
    
    void setPosition(float loc); // override of rail?
    void rotateToRad();
    float getRotation();
    ofVec2f getBounds();
    ofVec2f getPosition();
    
private:
    float rotation;
    ofVec3f position; // define by Rail
    ofVec3f angle; // Define by Rail
};

#endif /* defined(__eyeoSim__motor__) */
