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
    int sum;
    float calories;
    
    //Initialize Variables
    calories=18;
    sum=0;
    
    //Input
    cout<<"This program is designed to calculate the amount of calories "<<endl;
    cout<<"based on how much time is spent on a particular treadmill"<<endl;
    
    //Process
    for(int i=5;i<=30;i+=5){
        sum+=calories;
        cout<<"You have burned "<<sum<<" calories in "<<i<<" minutes"<<endl;
    }
    
    
    
    
    return 0;
}

