/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 3, 2018, 12:45 PM
 * Purpose:  Solve a Paint Coverage Problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short htFence,//Height of Fence in Feet
                   ltFence,//Length of Fence in Feet
                   ptCoverg,//Paint Coverage in ft^2/Gallon
                   nGallns;//Number of Gallons to Cover the Fence
    //Initialize Variables
    htFence=6;
    ltFence=100;
    ptCoverg=340;
    //Process/Map inputs to outputs
    nGallns=(2*(htFence*ltFence)/ptCoverg)+1;//Add One to Compensate for truncation
    //Output data
    cout<<"Height of Fence = "<<htFence<<" ft"<<endl;
    cout<<"Length of Fence = "<<ltFence<<" ft"<<endl;
    cout<<"Number of Gallons to Cover 1 side";
    cout<<" of fence twice = "<<nGallns<<endl;
    //Exit stage right!
    return 0;
}