/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 26, 2017, 12:00 PM
 *Purpose: Circuit Board Price
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    float crctPrc, //Selling price of Circuit Board without profit percentage
            prftP, //Percentage of profit
            prftA, //Amount of profit in currency
            totPrc; //Total selling price
    
    //Initialize variables
    crctPrc=14.95f;
    prftP=.35f;
    
    //Map inputs to outputs or process the data
    prftA=crctPrc*prftP;
    totPrc=prftA+crctPrc;
    
    //Output the transformed data
    cout<<"Profit in currency = $"<<prftA<<endl;
    cout<<"$"<<crctPrc<<" + $"<<prftA<<endl;
    cout<<""<<endl;
    cout<<"Total Selling Price = $"<<totPrc<<endl;
    
    //Exit stage right!
    return 0;
}