#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
       switch(key) {
    case '1':
        sound.sendEvent(SOUND_EVENT_START);
        break;
    case '2':
        sound.sendEvent(SOUND_EVENT_SOMEONE_THERE);
        break;
    case '3':
        sound.sendEvent(SOUND_EVENT_NOONE_THERE);
        break;
    case '0':
        sound.sendEvent(SOUND_EVENT_STOP);
        break;
        default:
        break;
       }

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

