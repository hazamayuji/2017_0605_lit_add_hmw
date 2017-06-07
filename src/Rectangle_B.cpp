//
//  Rectangle_B.cpp
//  2017_0605_lit_add_hmw
//
//  Created by 狭間祐至 on 2017/06/06.
//
//

#include "Rectangle_B.hpp"


void Rectangle_B::set(){
     ofDrawRectangle(width/2, height/4, width/4, height/2);
}


//四角形を書く(2)
void Rectangle_B::draw(){
    //緑色
    ofSetColor(0, 255, 0);
    set();
}

void Rectangle_B::action(){
    ofSetColor(0, 0, 255);
    ofDrawCircle(ofRandom(width/2, width), ofRandom(0, height), 20);
    
}

void Rectangle_B::cover(){
    ofSetColor(255, 0, 0, 127);
    set();
}


void Rectangle_B::sound_play_B(){
    soundplayer.load("2.wav");
    float volume_b = 5.0;
    sound_set(volume_b);
}
