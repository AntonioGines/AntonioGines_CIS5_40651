/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on Ferbuary, 4, 2018 12:00
 * Purpose:  Larger Than N
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
int compare(int [], int, int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=10;
    int n;
    int number[SIZE]={10,20,30,40,50,60,70,80,90,100};
    
    //Initialize Variables
    
    //Input
    cout<<"This program is designed to compare an input number to "<<endl;
    cout<<"numbers in an array and display any larger numbers."<<endl;
    cout<<"Please enter a number"<<endl;
    cin>>n;
    //Process
    compare(number, SIZE, n);
    
    //Output

    return 0;
}

int compare(int nums[], int size, int input){
    cout<<"The numbers larger than "<<input<<" in the array are."<<endl;
    for(int i=0;i<=size;i++){
        if(nums[i]>input){
            cout<<nums[i]<<" ";
        }
    }
}