#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    ofEnableDepthTest();
    //light
    light.setPosition(500, 500, 500);
    light.enable();
    
    //camera
    cam.setPosition(0, -440, 300);
    cam.lookAt(ofVec3f(0, 0, 20));
    
    //plane
    plane.setPosition(100, 50, 0);
    plane.set(640, 480);
    plane.setResolution(20, 20);
    
    auto point1 = ofVec3f(0, 0, 0);
    auto point2 = ofVec3f(0, 0, 100);
    auto point3 = ofVec3f(0, 0, 100);
    auto point4 = ofVec3f(100, 0, 200);
    auto point5 = ofVec3f(0, 0, 100);
    auto point6 = ofVec3f(-100, 0, 200);
    
    container1.push_back(point1);
    container1.push_back(point2);
    container2.push_back(point3);
    container2.push_back(point4);
    container3.push_back(point5);
    container3.push_back(point6);
    
    tube1.setUseVbo(true);
    tube1.setup(container1, 20);
    
    tube2.setUseVbo(true);
    tube2.setup(container2, 20);
    
    tube3.setUseVbo(true);
    tube3.setup(container3, 20);
}

//--------------------------------------------------------------
void ofApp::update(){
    tube1.update();
    tube2.update();
    tube3.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableDepthTest();
    cam.begin();
    plane.drawWireframe();
    tube1.drawTubeRings();
    tube2.draw();
    tube3.draw();
    cam.end();
    ofDisableDepthTest();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
