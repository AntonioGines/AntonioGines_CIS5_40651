/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 16, 2018, 4:56 PM
 * Purpose: Calculate Charges of Shipping Based on Weight and Distance
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float weight,//Weight of Package
          dist,//Distance
          cost;//Cost of Shipping
    
    //Input
    cout<<"This program is designed to calculate the cost of shipping "<<endl;
    cout<<"based on the weight of the package and the distance from the "
        <<"destination."<<endl; 
    cout<<"Your package must be less than 20 Kg and"
        <<" can only be shipped up to 3000 miles away."<<endl;
    cout<<"How much does the package weigh in kilograms?"<<endl;
    cin>>weight;
    cout<<"How many miles away is the package's destination?"<<endl;
    cin>>dist;
    
    //Process
    if(dist<10||dist>3000||weight<=0||weight>20)
    {
        cout<<"you do not qualify for this service"<<endl;
    }
    if(dist<=10&&dist>=500&&weight<=2)cost=1.10;
    else if(dist>500&&dist<=1000&&weight<=2)cost=2.20;
    else if(dist>1000&&dist<=1500&&weight<=2)cost=3.30;
    else if(dist>1500&&dist<=2000&&weight<=2)cost=4.40;
    else if(dist>2000&&dist<=2500&&weight<=2)cost=5.50;
    else if(dist>2500&&dist<=3000&&weight<=2)cost=6.60;
    else if(dist>=10&&dist<=500&&weight>=2&&weight<=6)cost=2.20;
    else if(dist>500&&dist<=1000&&weight>=2&&weight<=6)cost=3.30;
    else if(dist>1000&&dist<=1500&&weight>=2&&weight<=6)cost=4.40;
    else if(dist>1500&&dist<=2000&&weight>=2&&weight<=6)cost=5.50;
    else if(dist>2000&&dist<=2500&&weight>=2&&weight<=6)cost=6.60;
    else if(dist>2500&&dist<=3000&&weight>=2&&weight<=6)cost=7.70;
    else if(dist>=10&&dist<=500&&weight>=6&&weight<=10)cost=3.70;
    else if(dist>500&&dist<=1000&&weight>=6&&weight<=10)cost=7.40;
    else if(dist>1000&&dist<=1500&&weight>=6&&weight<=10)cost=11.10;
    else if(dist>1500&&dist<=2000&&weight>=6&&weight<=10)cost=14.80;
    else if(dist>2000&&dist<=2500&&weight>=6&&weight<=10)cost=18.50;
    else if(dist>2500&&dist<=3000&&weight>=6&&weight<=10)cost=22.20;
    else if(dist>=10&&dist<=500&&weight>=10&&weight<=20)cost=4.80;
    else if(dist>500&&dist<=1000&&weight>=10&&weight<=20)cost=9.60;
    else if(dist>1000&&dist<=1500&&weight>=10&&weight<=20)cost=14.40;
    else if(dist>1500&&dist<=2000&&weight>=10&&weight<=20)cost=19.20;
    else if(dist>2000&&dist<=2500&&weight>=10&&weight<=20)cost=24.00;
    else if(dist>2500&&dist<=3000&&weight>=10&&weight<=20)cost=28.80;
    
    //Output
    cout<<"It will cost $"<<fixed<<setprecision(2)<<showpoint<<cost
            <<" to ship this package"<<endl;
    return 0;
}

