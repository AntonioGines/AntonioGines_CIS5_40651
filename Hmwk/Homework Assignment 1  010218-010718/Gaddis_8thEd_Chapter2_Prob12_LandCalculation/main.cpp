/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 5, 2018, 12:55 PM
 * Purpose: Calculate how Many Acres are in a given Area of Land
 */

#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int QtyAcre;//Total Acres in a Given Quantity of Space
    
    //Inputs
    cout<<"This program is designed to show how many acres there are "
        <<"in 391876 square feet."<<endl;
    
    //Map Inputs to Outputs
    QtyAcre=(391876/43560)+1;
    
    //Outputs
    cout<<"Given that an acre is equal to 43560 square feet, there are "
        <<QtyAcre<<" Acres in 391876 square feet"<<endl;
         
    return 0;
}

