//
//  PointCharge.h
//  oF_Electronics
//
//  Created by 櫻木善将 on 2015/04/15.
//
//
#include "ofMain.h"

class PointCharge{

private:
    
    double charge;
    
    ofVec3f acceptPowerVector;
    ofVec3f speedVector;
    ofPoint position;
    
    ofSpherePrimitive pointCharge;
    
public:
    PointCharge(double Charge,ofPoint Position){
        this->charge = Charge;
        this->position = Position;
        pointCharge = ofSpherePrimitive(10, 20);
    }
    
    void drawPointCharge(){
        pointCharge.setPosition(position);
        pointCharge.draw();
    }
};
