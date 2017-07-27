/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 23, 2017, 12:42 PM
 *Purpose: Land Calculation
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    int nAcrs,//Amount of Acres from Square Feet given
            nFtnAcr, //Number of square feet
            SFprAcr; //Total square feet per Acres
    
    //Initialize variables
    nFtnAcr = 43560;
    SFprAcr = 391876;
    
    //Map inputs to outputs or process the data
    nAcrs=SFprAcr/nFtnAcr; 
    
    //Output the transformed data
    cout<<" = "<<nAcrs<<" Acres in square feet given"<<endl;
    
    //Exit stage right!
    return 0;
}