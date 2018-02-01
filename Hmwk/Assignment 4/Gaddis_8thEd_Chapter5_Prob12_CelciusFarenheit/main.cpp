/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 29, 2018, 4:30 PM
 *Purpose: First Program Hello World
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Variables

//User Libraries

//Function Prototypes

int main(int argc, char** argv) {
    //Declare Variables
    float farnht;
    
    //Initialize Variables
    
    //Input
    cout<<"This program is designed to convert 0-20 degrees Celsius to "
        <<" Fahrenheit"<<endl;

    
    for(int i=0;i<=20;i++){
        farnht=(i*(1.8))+32;
        cout<<i<<" degrees Celsius is equal to "<<fixed<<setprecision(1)
        <<showpoint<<farnht<<" degrees Fahrenheit"<<endl;
    }

    return 0;
}

