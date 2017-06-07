//
//  Rectangle_A.cpp
//  2017_0605_lit_add_hmw
//
//  Created by 狭間祐至 on 2017/06/06.
//
//

#include "Rectangle_A.hpp"

void Rectangle_A::set(){
    ofDrawRectangle(width/4, height/4, width/4, height/2);
}


//四角形を書く(1)
void Rectangle_A::draw(){
    //赤色
    ofSetColor(255, 0, 0);
    set();
}

void Rectangle_A::action(){
    ofNoFill();
    for(int i = 0; i < 15; i++){
        ofSetColor(0, 0, 255);
        ofDrawRectangle(width/2, height/4, ofRandom(-width/2, 0), ofRandom(-height/4,height*3/4));
    }
    ofFill();
}

void Rectangle_A::cover(){
    ofSetColor(0, 0, 255, 127);
    set();
}

void Rectangle_A::sound_play_A(){
    soundplayer.load("1.wav");
    float volume_a = 10.0;
    sound_set(volume_a);
    }
