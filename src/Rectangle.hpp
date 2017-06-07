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
    virtual void draw_rectangle() = 0;
    virtual void click_action() = 0;
    virtual void white_cover() = 0;
    virtual void set_rectangle() = 0;
    
    float width = ofGetWidth();
    float height = ofGetHeight();
    
    
};
