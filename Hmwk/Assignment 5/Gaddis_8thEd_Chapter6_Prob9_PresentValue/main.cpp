/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 17, 2018
 * Purpose:  Calculate Phone Call Charges
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int PERCENT=100;

//Function Prototypes Here
float invest(int, float);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int years;
    float intrate;
    
    //Input
    cout<<"This program is designed to calculate the amount of money you"<<endl;
    cout<<"need to invest at a chosen interest rate over a given"<<endl;
    cout<<"quantity of years."<<endl;
    cout<<"Please enter the amount of years you would like to save money over"
        <<" the duration of."<<endl;
    cin>>years;
    cout<<"Please enter the desired interest rate."<<endl;
    cin>>intrate;
    intrate=intrate/100;
    
    
    //Output
    cout<<"Starting today you would need to save:"<<endl;
    cout<<"$"<<fixed<<setprecision(2)<<showpoint<<invest(years, intrate);
    
    return 0;
}

float invest(int a, float b){
    const int future=10000;
    float pre= future/(pow(a,1+b));
    
    return pre;
}

