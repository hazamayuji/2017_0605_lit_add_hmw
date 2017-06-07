//
//  Rectangle.cpp
//  2017_0605_lit_add_hmw
//
//  Created by 狭間祐至 on 2017/06/06.
//
//

#include "Rectangle.hpp"

void Rectangle::sound_set(float &volume){
    soundplayer.setLoop(false);
    soundplayer.setVolume(volume);
    soundplayer.play();
}
