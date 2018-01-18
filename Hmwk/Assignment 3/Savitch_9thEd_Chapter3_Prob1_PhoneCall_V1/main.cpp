/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 17, 2018
 * Purpose:  Calculate Phone Call Charges
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
    unsigned short cost,//Cost of the Phone Call in Pennies
                   strTime,//Start Time in Military Format
                   tmSpan;//Time span of the call
    char day,//day of the week
         dm;//Dummy input unnecessary to the problem
    
    //Input or initialize values Here
    cout<<"Calculate cost of phone call"<<endl;
    cout<<"Input the day the phone call was made"<<endl;
    cout<<"Mo Tu We Th Fr Sa Su"<<endl;
    cin>>day>>dm;
    cout<<"Input the start time in military format"<<endl;
    cout<<"1:30 PM = 13:30"<<endl;
    cin>>setw(2)>>strTime>>dm>>dm>>dm;
    cout<<"Input the duration of phone call in minutes"<<endl;
    cin>>tmSpan;
    
    //Process/Calculations Here
    if(day=='S'||day=='s'){
        cost=tmSpan*15;//15 cents per Minute
    }else if (strTime>=8&&strTime<=18){
        cost=tmSpan*40;//40 cents Per minute
    }else{
        cost=tmSpan*25;//25 Cents per minute
    }
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"The phone call cost = $"<<cost/100.0f<<endl;

    //Exit
    return 0;
}

