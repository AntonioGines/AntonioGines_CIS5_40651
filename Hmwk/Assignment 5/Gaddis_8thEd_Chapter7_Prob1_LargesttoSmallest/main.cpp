/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on Ferbuary,3, 2018
 * Purpose:  Pull Largest and Smallest Values from an Array
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float invest(int, float);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=10;
    int years, largest, small;
    int number[SIZE];
    
    //Initialize Variables
    
    //Input
    cout<<"This program is designed to pull the largest and smallest"<<endl;
    cout<<"numbers entered into the program out from an array."<<endl;
    cout<<"Please enter 10 numbers."<<endl;
    
    //Process
    for(int i=0;i<=SIZE-1;i++){
        cin>>number[i];
    }
    largest=small=number[0];
    for(int i=0;i<=SIZE-1;i++){
        if(number[i]>largest){
            largest=number[i];
        }
    }
    for(int i=0;i<=SIZE-1;i++){
        if(number[i]<small){
            small=number[i];
        }
    }
    
    //Output
    cout<<"Your smallest number is "<<small<<endl;
    cout<<"Your largest number is "<<largest<<endl;

    return 0;
}

