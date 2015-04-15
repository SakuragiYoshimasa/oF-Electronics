//
//  PointCharge.h
//  oF_Electronics
//
//  Created by 櫻木善将 on 2015/04/15.
//
//

#ifndef __oF_Electronics__PointCharge__
#define __oF_Electronics__PointCharge__

#include "ofMain.h"
#include "BasicElectronicsCalculation.h"
#include "ElectricField.h"


class PointCharge {

public:
    
    double charge;
    
    ofVec3f acceptPowerVector;
    ofVec3f acceralateVector;
    ofVec3f speedVector;
    ofPoint position;
    
    ofSpherePrimitive pointCharge;
    
    bool isMoved;
    
    double weight;
    
    PointCharge(double Charge,ofPoint Position,bool isMoved = true){
        
        this->charge = Charge;
        this->position = Position;
        this->isMoved = isMoved;
        this->speedVector = ofVec3f(0,0,0);
        
        this->weight = 1000000000;
        
        pointCharge = ofSpherePrimitive(10, 20);
        
    }
    
    void drawPointCharge(vector<PointCharge> pointCharges){
        
        updateAcceptPower(pointCharges);
        updatePosition();
        pointCharge.setPosition(position);
        if(charge > 0){
        
            ofSetColor(255, 255, 0);

        }else{
        
            ofSetColor(0, 255, 255);

        }
        
        pointCharge.drawWireframe();
        
    }
    
    void updateAcceptPower(vector<PointCharge> pointCharges){
        
        this->acceralateVector = ofVec3f(0,0,0);
        
        for(int i = 0; i < pointCharges.size(); i++){
            if(!( (pointCharges[i].position == this->position) && (pointCharges[i].charge == this->charge)) ){
                
                acceptPowerVector = calcTwoChargesAffection(*this,pointCharges[i]);
         
                acceralateVector.x += acceptPowerVector.x/weight;
                acceralateVector.y += acceptPowerVector.y/weight;
                acceralateVector.z += acceptPowerVector.z/weight;
            }
        }
    }
    
    void updatePosition(){
        
        if(isMoved){
            this->speedVector.x += acceralateVector.x;
            this->speedVector.y += acceralateVector.y;
            this->speedVector.z += acceralateVector.z;
        
            this->position.x += this->speedVector.x;
            this->position.y += this->speedVector.y;
            this->position.z += this->speedVector.z;
        }
    }
    
    ofVec3f calcTwoChargesAffection(PointCharge charge1, PointCharge charge2){
        
        ofVec3f affectPower = ofVec3f(0,0,0);
        double absR = distance(charge1.position, charge2.position);
        
        affectPower.x = charge1.charge * charge2.charge * (charge1.position.x - charge2.position.x) / powf(absR, 3) / 4 / PI / DielectricConstant ;
        affectPower.y = charge1.charge * charge2.charge * (charge1.position.y - charge2.position.y) / powf(absR, 3) / 4 / PI / DielectricConstant ;
        affectPower.z = charge1.charge * charge2.charge * (charge1.position.z - charge2.position.z) / powf(absR, 3) / 4 / PI / DielectricConstant ;
        
        return affectPower;
    }
    
    double distance(ofPoint point1,ofPoint point2){
        
        return sqrt((point1.x-point2.x)*(point1.x-point2.x) + (point1.y-point2.y)*(point1.y-point2.y) + (point1.y-point2.y)*(point1.y-point2.y));
    }

};


#endif
