#pragma once

#include "ofMain.h"
#include "Rectangle.hpp"
#include "Rectangle_A.hpp"
#include "Rectangle_B.hpp"

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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    Rectangle *rect_a = new Rectangle_A();
    Rectangle *rect_b = new Rectangle_B();

    
    
    
    //使いやすく
    float width = ofGetWidth();
    float height = ofGetHeight();
    
    //判定
    bool rect_clicked[2] = {false, false};//{rect_a,rect_b}
    bool mouse_moved[2] = {false, false};//{rect_a,rect_b}
    bool enter_range[2] = {false, false};//{rect_a,rect_b}
    
};
