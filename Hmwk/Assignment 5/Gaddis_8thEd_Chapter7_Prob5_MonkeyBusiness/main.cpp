/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on February,3, 2018
 * Purpose:  Monkey Business
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
    const int ROW=3,COL=5;
    int pounds, largest, small, total;
    int monkey[ROW][COL];
    float average;
    
    //Initialize Variables
    total=0;
    //Input
    cout<<"This program is designed to place the amount of food "<<endl;
    cout<<"three monkeys consume every day five days a week into any "<<endl;
    cout<<"array."<<endl;
    cout<<"Please enter the "<<endl;
    
    //Process
    for(int i=0;i<=ROW-1;i++){
        for(int j=0;j<=COL-1;j++){
        cout<<"Please enter the amount of food monkey "<<i+1<<" ate on "<<endl; 
        cout<<"day "<<j+1<<endl;
        cin>>monkey[i][j];
        total+=monkey[i][j];
        }        
    }
    largest=small=monkey[0][0];
    for(int i=0;i<=ROW-1;i++){
        for(int j=0;j<=COL-1;j++){
            if(monkey[i][j]>largest){
                largest=monkey[i][j];
            }
        }
    }for(int i=0;i<=ROW-1;i++){
        total=0;
        for(int j=0;j<=COL-1;j++){
            if(monkey[i][j]<largest){
                small=monkey[i][j];
            }
        }
    }
    average=(total/5.0f);
    
    //Output
    cout<<"The average amount of food eaten by one monkey per day is "<<fixed
        <<setprecision(2)<<showpoint<<endl;
    cout<<"The least any monkey ate in one day was "<<small<<endl;
    cout<<"The most any monkey ate in one day  "<<largest<<endl;

    return 0;
}

