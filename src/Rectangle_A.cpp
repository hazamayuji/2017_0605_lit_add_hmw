//
//  Rectangle_A.cpp
//  2017_0605_lit_add_hmw
//
//  Created by 狭間祐至 on 2017/06/06.
//
//

#include "Rectangle_A.hpp"

void Rectangle_A::set_rectangle(){
    ofDrawRectangle(width/4, height/4, width/4, height/2);
}


//四角形を書く(1)
void Rectangle_A::draw_rectangle(){
    //赤色
    ofSetColor(255, 0, 0);
    set_rectangle();
}

void Rectangle_A::click_action(){
    ofNoFill();
    for(int i = 0; i < 15; i++){
        ofSetColor(0, 0, 255);
        ofDrawRectangle(width/2, height/4, ofRandom(-width/2, 0), ofRandom(-height/4,height*3/4));
    }
    ofFill();
}

void Rectangle_A::white_cover(){
    ofSetColor(255, 255, 255, 127);
    set_rectangle();

}
