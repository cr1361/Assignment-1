/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 22, 2017, 9:54 PM
 *Purpose: Distance per Tank of Gas
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    float nGllns,     //Number of Gallons in a full Tank
            twnAvg, //Average miles per gallon in town
            hgwyAvg,//Average miles per gallon in highway
            twnDis, //Total Distance traveled in town with full tank
            hgwyDis;//Total Distance traveled in highway with full tank
    
    //Initialize variables
    nGllns=20.0f;
    twnAvg=23.5f;
    hgwyAvg=28.9f;
    
    //Input data
    
    //Map inputs to outputs or process the data
    twnDis=nGllns*twnAvg;
    hgwyDis=nGllns*hgwyAvg;
    
    //Output the transformed data
    cout<<nGllns<<" gallons"<<" * "<<twnAvg<<" miles"
            <<" = "<<twnDis<<" total Miles driven in Town"<<endl;
    cout<<nGllns<<" gallons"<<" * "<<hgwyAvg<<" miles"
            <<" = "<<hgwyDis<<" total Miles driven in Highway"<<endl;
    
    //Exit stage right!
    return 0;
}