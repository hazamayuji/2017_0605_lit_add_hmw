//
//  Rectangle.hpp
//  2017_0605_lit_add_hmw
//
//  Created by 狭間祐至 on 2017/06/06.
//
//

#pragma once
#include "ofMain.h"

class Rectangle{
    
public:
    //純粋仮想関数をつくる
    virtual void draw() = 0;
    virtual void action() = 0;
    virtual void cover() = 0;
    virtual void set() = 0;
    
    
    ofSoundPlayer soundplayer;
    void sound_set(float &volume);
    
    
    float width = ofGetWidth();
    float height = ofGetHeight();
    
    
};
