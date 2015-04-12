#pragma once

#include "ofMain.h"

class ofxDisplayBrightness {
public:
	string fTs;
    int ret;
	void displayBrightness(float dbLevel) {

		fTs = ofToString(dbLevel);
    	stringstream s;
    	s << "../../../../../../../addons/ofxDisplayBrightness/src/display-brightness " << dbLevel;
    	ret = system(s.str().c_str());
	}
};