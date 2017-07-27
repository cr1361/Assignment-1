/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 22, 2017, 8:15 PM
 *Purpose: Annual Pay
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    int biweek,  //Total pay per pay period
            oneyr, //Pay periods per year
            ttpay; //Total amount earned in a year
    
    //Initialize variables
    biweek=2200;
    oneyr=26;
    
    //Map inputs to outputs or process the data
    ttpay=biweek*oneyr;
    
    //Output the transformed data
    cout<<"Pay period amount = "<<biweek<<endl;
    cout<<"Pay periods in a year = "<<oneyr<<endl;
    cout<<biweek<<"*"<<oneyr<<"="<<ttpay<<endl;
    cout<<"Annual Pay = $"<<ttpay<<endl;
    
    //Exit stage right!
    return 0;
}