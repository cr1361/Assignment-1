/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 22, 2017, 9:28 PM
 *Purpose: Miles per Gallon
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    int nMils,      //Number of miles driven before refueling
            nGllns, //Amount of gallons in a full tank
            MlprGln;//Miles driven per each gallon
    
    //Initialize variables
    nMils=375;
    nGllns=15;
    
    //Map inputs to outputs or process the data
    MlprGln=nMils/nGllns;
    
    //Output the transformed data
    cout<<"Car's miles per gallon = "<<MlprGln<<endl;
    
    //Exit stage right!
    return 0;
}