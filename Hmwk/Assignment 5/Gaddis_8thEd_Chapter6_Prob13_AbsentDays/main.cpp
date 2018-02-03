/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February,3, 2018
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

//Function Prototypes Here
int Nemploy(int);
int missing(int);
void average(float, float);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int quant,missed;
    
    //Input
    cout<<"This program is designed to calculate the amount of days "<<endl;
    cout<<"a company's employees are absent"<<endl;
    
    quant=Nemploy(quant);
    missed=missing(quant);
    quant*=1.0f;
    missed*=1.0f;
    average(quant,missed);
    
    return 0;
}

void average(float a,float b){
    float aver;
    cout<<"The average quantity of days missed is"<<endl;
    aver=((b/a)*1.0f);
    cout<<fixed<<setprecision(1)<<showpoint<<aver<<" days per employee"
        <<endl;
}

int missing(int b){
    int miss;
    int total;
    int count=1;
    while(count<=b){
        cout<<"Enter the number of missed days for employee number "<<count
            <<endl;
        cin>>miss;
        total+=miss;
        count+=1;
    }
    return total;
}

int Nemploy(int a){
    cout<<"How many employees work at this company?"<<endl;
    cin>>a;
    return a;
}
