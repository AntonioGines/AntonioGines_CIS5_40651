/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 5, 2018, 11:02 AM
 * Purpose:Distance Per Tank of Gas
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    int MileHwy,//How Many Miles Traveled On Highway
        MileSrt;//How Many Miles Traveled On Street
    
    //Inputs
    cout<<"This Program will tell you how many miles"
        <<" you can travel in a car with a twenty gallon gas tank."<<endl;
    
    //Map Inputs to Outputs
    MileSrt=20*23.5;
    MileHwy=20*28.9;
    
    //Outputs
    cout<<"When traveling solely by street you will be able to travel "
        <<MileSrt<<" miles with a full twenty gallon tank of gas."<<endl;
    cout<<"When traveling solely by highway you will be able to travel "
        <<MileHwy<<" miles with a full twenty gallon tank of gas."<<endl;
         

    return 0;
}

