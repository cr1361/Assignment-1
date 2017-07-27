/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 22, 2017, 6:19 PM
 *Purpose: Restaurant Bill
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    float prcntTx,    //Tax percent amount
            prcntTp, //Bill percentage
            mlChrg, //Amount owed for meal
            totTx,  //Tax cost of meal
            totTp,  //Tip total
            totBll; //Bill total
    
    //Initialize variables
    prcntTx =6.75f;
    prcntTp =20.0f;
    mlChrg =88.67f;
    
    //Input data
    
    //Map inputs to outputs or process the data
    totTx=mlChrg*prcntTx/100;
    totTp=(totTx+mlChrg)*prcntTp/100;
    totBll=totTx+totTp+mlChrg;
    
    //Output the transformed data
    cout<<"Tax amount + $"<<totTx<<endl;
    cout<<"Tip amount + $"<<totTp<<endl;
    cout<<"Total Bill = $"<<totBll<<endl;
    
    //Exit stage right!
    return 0;
}