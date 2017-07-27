/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 22, 2017, 8:35 PM
 *Purpose: Ocean Levels
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    float ocnRise,//Yearly Ocean Rise
            yrFiv,yrSvn,yrTen, //5, 7, 10 year lapse
            fivMl,svnMl,tenMl; //Millimeter increase per year lapse
    
    //Initialize variables
    ocnRise=1.5f;
    yrFiv=5.0f;
    yrSvn=7.0f;
    yrTen=10.0f;
    
    //Map inputs to outputs or process the data
    fivMl=yrFiv*ocnRise;
    svnMl=yrSvn*ocnRise;
    tenMl=yrTen*ocnRise;
    
    //Output the transformed data
    cout<<"Five year Ocean Rise = "<<fivMl<<" millimeter"<<endl;
    cout<<"Seven year Ocean Rise = "<<svnMl<<" millimeter"<<endl;
    cout<<"Ten year Ocean Rise = "<<tenMl<<" millimeter"<<endl;
    
    //Exit stage right!
    return 0;
}