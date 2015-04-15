//
//  BasicElectronicsCalculation.h
//  oF_Electronics
//
//  Created by 櫻木善将 on 2015/04/15.
//
//

#ifndef __oF_Electronics__BasicElectronicsCalculation__
#define __oF_Electronics__BasicElectronicsCalculation__

#include "ofMain.h"
#include "ElectricField.h"
#include "PointCharge.h"
#include "Definition.h"

class BasicElectronicsCalculation{
 

public:
    static double distance(ofPoint point1,ofPoint point2){
    
        return sqrt((point1.x-point2.x)*(point1.x-point2.x) + (point1.y-point2.y)*(point1.y-point2.y) + (point1.y-point2.y)*(point1.y-point2.y));
    }
    

  /*  static ofVec3f calcTwoChargesAffection(PointCharge charge1, PointCharge charge2){
        
        ofVec3f affectPower = ofVec3f(0,0,0);
        double absR = distance(charge1.position, charge2.position);
        
        affectPower.x = charge1.charge * charge2.charge * (charge1.position.x - charge2.position.x) / powf(absR, 3) / 4 / PI / DielectricConstant ;
        affectPower.y = charge1.charge * charge2.charge * (charge1.position.y - charge2.position.y) / powf(absR, 3) / 4 / PI / DielectricConstant ;
        affectPower.z = charge1.charge * charge2.charge * (charge1.position.z - charge2.position.z) / powf(absR, 3) / 4 / PI / DielectricConstant ;
        
        return affectPower;
    }*/

};

#endif
