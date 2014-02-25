#pragma once

#include "ofMain.h"
#include "ofxXmlSettings.h"
#include "ofxUI.h"
#include "rail.h"
#include "motor.h"
#include "loom.h"
//#include "ofEasyCam.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    
    
    private:
//        vector<Rail> * rails;
    ofEasyCam * cam;
    ofLight * light;
    Rail * rail1;
    Rail * rail2;
    float t;
};
