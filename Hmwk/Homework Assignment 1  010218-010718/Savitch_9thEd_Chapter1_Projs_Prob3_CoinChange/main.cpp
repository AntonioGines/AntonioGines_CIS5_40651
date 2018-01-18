/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 3, 2018, 4:30 PM
 *Purpose: Calculate the Quantity of Cents
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions, 
//                     2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short nickels,//worth five cents
                   dimes,//worth ten cents
                   quarters,//worth twenty-five cents
                   QtyCnts;//Total Cents
    
    //Input Quantity of Cents
    cout<<"This program is designed to count your change "
            <<"based on nickels, dimes, and quarters"<<endl;
    cout<<"How many nickels do you have?"<<endl;
    cin>>nickels;
    cout<<"How many dimes do you have?"<<endl;
    cin>>dimes;
    cout<<"How many quarters do you have?"<<endl;
    cin>>quarters;
                   
    //Process/Map Inputs to Outputs
    QtyCnts=(nickels*5)+(dimes*10)+(quarters*25);
    //Output Data
    cout<<"You have a total of "<<QtyCnts<<"Cents"<<endl;
    //Exit Stage Right;
    return 0;
}

