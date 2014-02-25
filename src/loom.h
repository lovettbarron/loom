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
#include "ofMain.h"

class Loom {
public:
    Loom();
    ~Loom();
    
    void update();
    void draw();
    void setRotation(float r);
    void setTarget(Loom& loom);
private:
    Loom * target;
    float rotation;
    vector<ofPolyline> * string;
    int numberOfStrings;
    float spacingBetweenStrings;
    
};

#endif /* defined(__eyeoSim__loom__) */
