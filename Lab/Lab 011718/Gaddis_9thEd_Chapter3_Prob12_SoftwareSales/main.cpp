/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 17, 2018, 1:30 PM
 * Purpose: Calculating Discounts on Software Based on Quantity Purchased
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float quant,//Quantity Purchased
      dscount,//Discount based on quantity purchased
         base,//base price per unit
         cost;//Total amount of money paid including discount
    //Constants
    base=99;
    
    //Input or initialize values Here
    cout<<"This program is designed to display how much it costs to purchase "
        <<endl;
    cout<<"a package from a software company if you are given a discount based"
            <<" on the amount of packages you purchased"<<endl;
    cout<<"A single package costs $99.";
    cout<<"How many packages did you purchase?"<<endl;
    cin>>quant;
    if(quant<0)cout<<"This is not a viable quantity, please re-run the program"
            <<" and insert a positive quantity"<<endl;
    if(quant<0)exit(0);
    
    //Process/Calculations Here
    if(quant>0&&quant<10){
        cost=base*quant;
    }else if(quant>=10||quant<20){
        cost=(base*quant)*.2;
    }else if(quant>=20||quant<50){
        cost=(base*quant)*.3;
    }else if(quant>=50||quant<100){
        cost=(base*quant)*.4;
    }else if(quant>=100)
        cost=(base*quant)*.5;
    
    //Output Located Here
    cout<<"It will cost $ "<<fixed<<setprecision(2)<<showpoint<<cost
        <<" to purchase "<<setprecision(0)<<quant<<" units."<<endl;

    //Exit
    return 0;
}

