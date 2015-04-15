//
//  ElectricField.h
//  oF_Electronics
//
//  Created by 櫻木善将 on 2015/04/15.
//
//



#ifndef __oF_Electronics__ElectricField__
#define __oF_Electronics__ElectricField__

#include "PointCharge.h"
#include "ofMain.h"


class ElectricField {
    
public:
    vector<PointCharge> pointCharges;
    ElectricField(vector<ofPoint> positionsOfPointCharges,vector<double> charges,vector<bool> ismoved){
        
        for(int i = 0; i < positionsOfPointCharges.size(); i++){
        
            pointCharges.push_back(PointCharge(charges[i],positionsOfPointCharges[i],ismoved[i]));
            
        }
    }
    ElectricField(){}
    
    void Draw(){
        for(int i = 0; i < pointCharges.size(); i++){
            pointCharges[i].drawPointCharge(pointCharges);
        }
    }
    
    void addPointCharge(PointCharge pointCharge){
        this->pointCharges.push_back(pointCharge);
    }
    

};

#endif
