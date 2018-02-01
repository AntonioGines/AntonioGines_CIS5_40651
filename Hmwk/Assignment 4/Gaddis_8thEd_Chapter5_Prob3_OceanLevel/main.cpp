/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 22, 2018, 5:12 PM
 * Purpose: CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                     2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
        int counter;
        float incrse;
             
    counter=0;
    
    //Input
    cout<<"This program is designed to display the increase of the ocean level"
            <<" every year over the course of 25 years "<<endl;
    cout<<" if the ocean rises at a rate of 1.5 millimeters."<<endl;
    
    //Process/Map Inputs to Outputs
    do{
        counter+=1;
        incrse=(counter*1.5);
        cout<<"After year "<<counter<<" the ocean has risen "
            <<fixed<<setprecision(1)<<showpoint<<incrse<<endl;
    }while(counter<=25);
    
    //Output Data
    
    //Exit Stage Right
    return 0;
}

