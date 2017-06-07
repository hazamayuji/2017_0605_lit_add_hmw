#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //背景を黒に
    ofBackground(0,0,0);
    //フレームレートを60に設定
    ofSetFrameRate(60);
    
    ofEnableAlphaBlending();
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //クリックされた時
    if(rect_clicked[0]){
        rect_a.click_action();
    }else if(rect_clicked[1]){
        rect_b.click_action();
    }
    
    //左側の四角形を描画
    rect_a.draw_rectangle();

    //右側の四角形を描画
    rect_b.draw_rectangle();

    
    //カバーをかける
    if(mouse_moved[0]){
        rect_a.white_cover();
    }else if(mouse_moved[1]){
        rect_b.white_cover();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    //カバー
    if(width/4 < x && x < width/2 && height/4 < y && height*3/4 > y){
        mouse_moved[0] = true;
    }else{
        mouse_moved[0] = false;
    }
    
    if(width/2 < x && x < width*3/4 && height/4 < y && height*3/4 > y){
        mouse_moved[1] = true;
    }else{
        mouse_moved[1] = false;
    }

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    //マウスが押された時
    //ここの条件のところを綺麗にしようとしましたが思いつきませんでした
    if(width/4 < x && x < width/2 && height/4 < y && height*3/4 > y){
        rect_clicked[0] = true;
    }
    
    if(width/2 < x && x < width*3/4 && height/4 < y && height*3/4 > y){
        rect_clicked[1] = true;
    }

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
   
    //マウスがはなされた時
    if(width/4 < x && x < width/2 && height/4 < y && height*3/4 > y){
        rect_clicked[0] = false;
    }
    
    if(width/2 < x && x < width*3/4 && height/4 < y && height*3/4 > y){
        rect_clicked[1] = false;
    }
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
