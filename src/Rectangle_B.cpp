//
//  Rectangle_B.cpp
//  2017_0605_lit_add_hmw
//
//  Created by 狭間祐至 on 2017/06/06.
//
//

#include "Rectangle_B.hpp"


void Rectangle_B::set_rectangle(){
     ofDrawRectangle(width/2, height/4, width/4, height/2);
}


//四角形を書く(2)
void Rectangle_B::draw_rectangle(){
    //緑色
    ofSetColor(0, 255, 0);
    set_rectangle();
}

void Rectangle_B::click_action(){
    ofSetColor(0, 0, 255);
    ofDrawCircle(ofRandom(width/2, width), ofRandom(0, height), 20);
    
}

void Rectangle_B::white_cover(){
    ofSetColor(255, 255, 255, 127);
    set_rectangle();
}
