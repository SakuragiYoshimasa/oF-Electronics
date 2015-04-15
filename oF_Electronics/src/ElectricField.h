//
//  ElectricField.h
//  oF_Electronics
//
//  Created by 櫻木善将 on 2015/04/15.
//
//

#include "ofMain.h"
#include "PointCharge.h"

class ElectricField {
private:
    
    vector<PointCharge *> pointCharges;
    
public:
    ElectricField(vector<ofPoint> positionsOfPointCharges,vector<double> charges){
        
        for(int i = 0; i < positionsOfPointCharges.size(); i++){
        
            pointCharges.push_back(new PointCharge(charges[i],positionsOfPointCharges[i],false));
            
        }
    }
    ElectricField(){}
    
    void Draw(){
        for(int i = 0; i < pointCharges.size(); i++){
            pointCharges[i]->drawPointCharge();
        }
    }
    

};
