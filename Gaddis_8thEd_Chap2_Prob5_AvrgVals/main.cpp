/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 21, 2017, 7:30 PM
 *Purpose: Average of Values
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    unsigned char num1,num2,num3,num4,num5;//1 Byte data type range [0,255]
    unsigned char ttNums;//1 Byte data type range [0,255]
    unsigned char sumall;//1 Byte data type range [0,255]
    unsigned char divd5;//1 Byte data type range [0,255]
    
    //Initialize variables
    num1=28;
    num2=32;
    num3=37;
    num4=24;
    num5=33;
    ttNums=5;
    
    //Map inputs to outputs or process the data
    sumall=num1+num2+num3+num4+num5;
    divd5=sumall/ttNums;
    
    //Output the transformed data
    cout<<"Result is in range for a char but iostream/cout prints ascii code"<<endl;
     cout<<"Cast char to integer"<<endl;
    cout<<static_cast<int>(num1)<<"+"
        <<static_cast<int>(num2)<<"+"
        <<static_cast<int>(num3)<<"+"
        <<static_cast<int>(num4)<<"+"
        <<static_cast<int>(num5)<<"="
        <<static_cast<int>(sumall)<<endl;
    cout<<static_cast<int>(sumall)<<"/"
        <<static_cast<int>(ttNums)<<"="
        <<static_cast<int>(divd5)<<endl;
    
    //Exit stage right!
    return 0;
}