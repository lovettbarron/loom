//
//  loom.h
//  eyeoSim
//
//  Created by Andrew Lovett-Barron on 2/19/14.
//
//

#ifndef __eyeoSim__loom__
#define __eyeoSim__loom__

#include <iostream>
#include "motor.h"

class Loom {
public:
    Loom(Motor& _source, Motor& _target);
    ~Loom();
    
    void update();
    void draw();
private:
    Motor * source;
    Motor * target;
    vector<ofPolyline> * string;
    int numberOfStrings;
    float spacingBetweenStrings;
    
};

#endif /* defined(__eyeoSim__loom__) */
