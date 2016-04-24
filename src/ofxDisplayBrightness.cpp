#include "ofxDisplayBrightness.h"

void ofxDisplayBrightness::setBrightness(float ledValue) {
	CGDisplayErr dErr;
	io_service_t service;
	CGDirectDisplayID targetDisplay;
	CFStringRef key = CFSTR(kIODisplayBrightnessKey);
	targetDisplay = CGMainDisplayID();
	service = CGDisplayIOServicePort(targetDisplay);
	dErr = IODisplaySetFloatParameter(service, kNilOptions, key, ledValue);
    if (dErr != kIOReturnSuccess) {
        fprintf(stderr, "operation failed\n");
        exit(dErr);
    }
}
