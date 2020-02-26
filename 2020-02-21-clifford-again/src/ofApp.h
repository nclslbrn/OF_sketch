#pragma once

#include "ofMain.h"
#include "ofxGui.h"
//#include "ofxJSON.h"

class ofApp : public ofBaseApp {
   public:
    void setup();
    void update();
    void draw();
    void exit();
    void reset();
    void increasePixelBrightness(int x, int y, int amount);
    void reinitConstantsButtonClick();
    void saveImageButtonClick();
    void saveConstantsButtonClick();
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

    ofxPanel gui;
    ofxButton reinitConstantsButton, saveImageButton, saveConstantsButton;
    //ofxJSONElement dbFile;
    // Attractor constants
    float A, B, C, D;
    ofVec2f position;
    // how displacement on pos, displacement counter
    int iterations, step, i;
    // expand coordinate (polar system)
    float minX, minY, maxX, maxY;
    // our canvas
    ofImage img;
    std::string imgName;
};
