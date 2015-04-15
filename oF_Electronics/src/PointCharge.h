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
    
    bool isMoved;
    
public:
    PointCharge(double Charge,ofPoint Position,bool isMoved = true){
        
        this->charge = Charge;
        this->position = Position;
        this->isMoved = isMoved;
        pointCharge = ofSpherePrimitive(10, 20);
        
    }
    
    void drawPointCharge(){
        
        pointCharge.setPosition(position);
        pointCharge.drawWireframe();
        
    }
};
