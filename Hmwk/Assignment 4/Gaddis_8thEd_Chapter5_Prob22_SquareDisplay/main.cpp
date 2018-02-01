/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 29, 2018, 4:30 PM
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
    int length;
    
    //Initialize Variables
    
    //Input
    cout<<"This program is designed to create a square made up of X's "<<endl;
    cout<<"Enter the Length/Width of the Square"<<endl;
    cin>>length;
    
    for(int i=0;i<=length;i++){
        for(int i=0;i<=length;i++){
            cout<<"x";
        }cout<<endl;
    }

    return 0;
}

