/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 22, 2017, 9:03 PM
 *Purpose: Total Purchase
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    float Prce1,Prce2,Prce3,Prce4,Prce5, //Price of 5 separate items
            txPrct,//Percent of tax
            sbTtl,//Subtotal of all product price
            txAmnt,//Tax amount
            payTtl;//Total purchase payment
    
    //Initialize variables
    Prce1=15.95f;
    Prce2=24.95f;
    Prce3=6.95f;
    Prce4=12.95f;
    Prce5=3.92f;
    txPrct=7.0f;
    
    //Map inputs to outputs or process the data
    sbTtl=Prce1+Prce2+Prce3+Prce4+Prce5;
    txAmnt=(sbTtl*txPrct)/100;
    payTtl=txAmnt+sbTtl;
    
    //Output the transformed data
    cout<<"Price of item 1 = $"<<Prce1<<endl;
    cout<<"Price of item 2 = $"<<Prce2<<endl;
    cout<<"Price of item 3 = $"<<Prce3<<endl;
    cout<<"Price of item 4 = $"<<Prce4<<endl;
    cout<<"Price of item 5 = $"<<Prce5<<endl;
    cout<<"Subtotal = $"<<sbTtl<<endl;
    cout<<"Sales Tax = $"<<txAmnt<<endl;
    cout<<"Total Amount =$ "<<payTtl<<endl;
    
    //Exit stage right!
    return 0;
}