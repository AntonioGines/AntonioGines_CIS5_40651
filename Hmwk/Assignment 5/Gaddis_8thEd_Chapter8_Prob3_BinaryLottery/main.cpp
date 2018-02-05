/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on Ferbuary, 4, 2018 12:00
 * Purpose:  Binary Search to compare lottery tickets
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
    int n,valid;
    int number[SIZE]={13579,26791,26792,33445,55555,62483,77777,
                      79422,85647,93121};
    
    //Initialize Variables
    
    //Input
    cout<<"This program is designed to compare your lottery ticket "<<endl;
    cout<<"to the winning numbers for this week."<<endl;
    cout<<"Please enter your lotto number."<<endl;
    cin>>n;
    //Process
    valid=compare(number, SIZE, n);

    //Output
    if(valid==-1){
        cout<<"You did not have a winning number."<<endl;
    }else{
    cout<<"Congrats you won the lottery!"<<endl;
    }

    return 0;
}

int compare(int nums[], int size, int input){
    int first=0,
        last=size-1,
            middle,
          place=-1;
    bool found=false;
    while(first<=last&&!found){
        middle=(first+last)/2;
        if(nums[middle]==input){
            found=true;
            place=middle;
        }else if(nums[middle]>input){
            last=middle-1;
        }else{
            first=middle+1;
        }
    }return place;
}