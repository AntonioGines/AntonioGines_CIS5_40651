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
        int hours,dstnce,speed;
    
    //Input
    cout<<"This program is designed to calculate the distance a car traveled at"
        <<" a given speed for a given quantity of time"<<endl;
    cout<<"Enter the speed of the car in miles per hour."<<endl;
    cin>>speed;
    cout<<"Enter the time in which the car traveled in hours"<<endl;
    cin>>hours;
    
    //Process/Map Inputs to Outputs
    cout<<"What is the speed of the car? "<<speed<<" mph"<<endl;
    cout<<"How many hours has it traveled? "<<hours<<" hours"<<endl;
    cout<<"Hours  Distance Traveled"<<endl;
    cout<<"--------------------------------"<<endl;
    for(int i=1;i<=hours;i++){
        dstnce=(speed*i);
        cout<<" "<<i<<setw(15)<<dstnce<<endl;
    }
    
    //Output Data
    
    //Exit Stage Right
    return 0;
}

