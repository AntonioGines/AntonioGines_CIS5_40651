/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 4, 2018, 11:00 PM
 *Purpose: AddAndMultiply
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions, 
//                     2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int a,//First Integer
                       b,//Second Integer
                       c,//Sum of the Integers
                       d;//Product of the Integers
    //Inputs
    cout<<"This program is designed to find the sum and product "
       <<"of two positive integers in a range of 0 to 10,000."<<endl;
    cout<<"What is the first integer?"<<endl;
    cin>>a;
    cout<<"What is the second integer?"<<endl;
    cin>>b;

    //Process/Map Inputs to Outputs
    c=a+b;
    d=a*b;
    
    //Outputs
    cout<<"The sum of these integers is"<<endl;
    cout<<a<<" + "<<b<<" = "<<c<<endl;
    cout<<"And the product of these integers is"<<endl;
    cout<<a<<" * "<<b<<" = "<<d<<endl;
    
   
    //Exit Stage Right;
    return 0;
}

