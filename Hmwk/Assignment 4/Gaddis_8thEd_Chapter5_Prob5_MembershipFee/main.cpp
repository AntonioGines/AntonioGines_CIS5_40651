/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 22, 2018, 4:30 PM
 *Purpose: First Program Hello World
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Variables

//User Libraries

//Function Prototypes

int main(int argc, char** argv) {
    //Declare Variables
    int time,cost,base;
    float increase;
    
    //Initialize Variables
    cost=2500;
    increase=.04;
    
    //Input
    cout<<"This program is designed to calculate the amount of calories "<<endl;
    cout<<"based on how much time is spent on a particular treadmill"<<endl;
    
    //Process
    for(int i=1;i<=6;i++){
        cost+=cost*.04;
        cout<<"The have membership fee costs $"<<cost<<" in year "<<i<<endl;
    }
    
    
    
    
    return 0;
}

