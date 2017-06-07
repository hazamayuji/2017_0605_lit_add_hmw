//
//  Rectangle_B.hpp
//  2017_0605_lit_add_hmw
//
//  Created by 狭間祐至 on 2017/06/06.
//
//

#pragma once

#include "ofMain.h"
#include "Rectangle.hpp"

//クラスを継承する
class Rectangle_B :public Rectangle{
    
public:
    //純粋仮想関数を使用
    void draw();
    void action();
    void cover();
    void set();
    
    void sound_play_B();
};
