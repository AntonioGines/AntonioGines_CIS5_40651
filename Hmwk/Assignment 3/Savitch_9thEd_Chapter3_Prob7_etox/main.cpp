/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January, 2018, 1:04 PM
 * Purpose:  e to the power of x
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float aproxE, term, x;
    int counter;
    
    //Input or initialize values Here
    aproxE=1.0f;
    counter=1;
    x=1.0f;
    term=x/counter++;
    
    //Process/Calculations Here
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Process/Calculations Here
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Process/Calculations Here
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
        //Process/Calculations Here
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
        //Process/Calculations Here
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    
    //Output Located Here
    cout<<"e^"<<x<<"       exactly = "<<exp(x)<<endl;
   

    //Exit
    return 0;
}

