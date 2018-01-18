/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 17, 2018, 4:15 PM
 * Purpose: to convert seconds to either minutes, hours, or days
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    char convert;//what unit to convert to
    float seconds,//How many seconds
          newtime;//Converted Time
    
    //Inputs
    cout<<"This program is designed to convert seconds into another unit of "
        <<"time."<<endl;
    cout<<"How many seconds would you like to convert?"<<endl;
    cin>>seconds;
    if(seconds<0)cout<<"This is not a valid input, please re-run the program"
            <<" and enter a valid quantity of seconds."<<endl;
    if(seconds<0)exit(0);
    cout<<"What unit would you like to convert it to: minutes, hours, or days?"
        <<endl;
    cin>>convert;
    
    
    //Process
    if(convert=='M'||convert=='m'){
        newtime=seconds/60;
    }else if(convert=='H'||convert=='h'){
        newtime=seconds/3600;
    }else if(convert=='D'||convert=='d'){
        newtime=seconds/86400;
    }
    
    //Output
    if(convert=='M'||convert=='m'){
    cout<<seconds<<" seconds converts to "<<fixed<<setprecision(2)
            <<showpoint<<newtime<<" minutes"<<endl;
    }else if(convert=='H'||convert=='h'){
        cout<<seconds<<" seconds converts to "<<fixed<<setprecision(2)
                <<showpoint<<newtime<<" hours"<<endl;
    }else if(convert=='D'||convert=='d'){
        cout<<seconds<<" seconds converts to "<<fixed<<setprecision(2)
                <<showpoint<<newtime<<" days"<<endl;
    }

    return 0;
}

