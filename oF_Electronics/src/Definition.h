//
//  Definition.h
//  oF_Electronics
//
//  Created by 櫻木善将 on 2015/04/15.
//
//
#include "ofMain.h"
#include "math.h"

class Definition{
public:
    const double DielectricConstant = 8.854/powf(10,-12); //真空の誘電率
    const double MagneticPermeability = 4*PI/powf(10,7); //真空の透磁率
    const double K = 8.9876*powf(10,9);
    const double LightSpeed = 2.998*powf(10,10);
    
};