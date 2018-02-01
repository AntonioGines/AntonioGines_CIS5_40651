/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 29, 2018, 4:30 PM
 *Purpose: First Program Hello World
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Variables

//User Libraries

//Function Prototypes

int main(int argc, char** argv) {
    //Declare Variables
    int store1,store2,store3,store4,store5;
    
    //Initialize Variables
    
    //Input
    cout<<"This program is designed to create a bar graph out of "<<endl;
    cout<<"asterisks based on the profits of five stores"<<endl;
    cout<<"Enter the quantity of money each store has earned in Dollars"
          "divisible by $100 (Examples: $1000,$1700,$2500"<<endl;
    cin>>store1>>store2>>store3>>store4>>store5;
    
    //Process
    cout<<"Each * is equal to $100"<<endl;
    for(int i=1;i<=(store1/100);i++){
        cout<<"*";
    }cout<<endl;
    for(int i=1;i<=(store2/100);i++){
        cout<<"*";
    }cout<<endl;
    for(int i=1;i<=(store3/100);i++){
        cout<<"*";
    }cout<<endl;
    for(int i=1;i<=(store4/100);i++){
        cout<<"*";
    }cout<<endl;
    for(int i=1;i<=(store5/100);i++){
        cout<<"*";
    }cout<<endl;
    return 0;
}

