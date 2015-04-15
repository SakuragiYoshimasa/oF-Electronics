#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    vector<ofPoint> positions;
    vector<double> charges;
    vector<bool> ismoved;
    
    positions.push_back(ofPoint(100.00,400,0));
    positions.push_back(ofPoint(900.00,400,0));
    positions.push_back(ofPoint(500.00,50,0));
    
    charges.push_back(10);
    charges.push_back(10);
    charges.push_back(-10);
    
    ismoved.push_back(false);
    ismoved.push_back(false);
    ismoved.push_back(true);
    
    electricField = ElectricField(positions,charges,ismoved);
    
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofSetColor(255, 255, 0);
    
    electricField.Draw();

    
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
