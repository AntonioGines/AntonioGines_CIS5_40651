/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 11th, 2018, 1:15 PM
 * Purpose:  Menu
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int probNum;
    
    //Menu with input of choice
    cout<<"Choose from the following Menu"<<endl;
    cout<<"Problem 1 -> Gaddis_8thEd_Chapter5_Prob1_Sum_of_Numbers"<<endl;
    cout<<"Problem 2 -> Gaddis_8thEd_Chapter5_Prob3_OceanLevel"<<endl;
    cout<<"Problem 3 -> Gaddis_8thEd_Chapter5_Prob4_Calories_Burned"<<endl;
    cout<<"Problem 4 -> Gaddis_8thEd_Chapter5_Prob5_MembershipFee"<<endl;
    cout<<"Problem 5 -> Gaddis_8thEd_Chapter5_Prob6_Distance"<<endl;
    cout<<"Problem 6 -> Gaddis_8thEd_Chapter5_Prob11_Population"<<endl;
    cout<<"Problem 7 -> Gaddis_8thEd_Chapter5_Prob12_CelciusFarenheit"<<endl;
    cout<<"Problem 8 -> Gaddis_8thEd_Chapter5_Prob22_SquareDisplay"<<endl;
    cout<<"Problem 9 -> Gaddis_8thEd_Chapter5_Prob17_SalesBar"<<endl;
    cout<<"Type 1 to 9 only"<<endl;
    cin>>probNum;
    
    //Output the results
    switch(probNum){
        case 1: {
    //Declare Variables
    int number,
       counter,
           sum;
    
    //Initialize Variables
    sum=0;
    
    //Input
    cout<<"This program is designed to display the sum of an integer and"<<endl;
    cout<<"it's succeeding integers (ex: 32+33+34+35+...) up to 50."<<endl;
    cout<<"Please enter an integer between 0 and 50"<<endl;
    cin>>number;
    if(number<0||number>50){
        cout<<"You have entered an invalid number. Please re-run the"
                <<" program and enter a number between 0 and 50."<<endl;
    }if(number<0||number>50){
        exit(0);
    }
    
    //Process
    do{
        sum+=number;
        number+=1;
    }while(number<51);
    
    //Output
    cout<<"The sum of all numbers up to 50 is equal to "<<sum<<endl;
        }    
        case 2: {
    //Declare Variables
        int counter;
        float incrse;
             
    counter=0;
    
    //Input
    cout<<"This program is designed to display the increase of the ocean level"
            <<" every year over the course of 25 years "<<endl;
    cout<<" if the ocean rises at a rate of 1.5 millimeters."<<endl;
    
    //Process/Map Inputs to Outputs
    do{
        counter+=1;
        incrse=(counter*1.5);
        cout<<"After year "<<counter<<" the ocean has risen "
            <<fixed<<setprecision(1)<<showpoint<<incrse<<endl;
    }while(counter<=25);
    
    //Output Data
    
    //Exit Stage Right            
        }
        case 3: {
    //Declare Variables
    int sum;
    float calories;
    
    //Initialize Variables
    calories=18;
    sum=0;
    
    //Input
    cout<<"This program is designed to calculate the amount of calories "<<endl;
    cout<<"based on how much time is spent on a particular treadmill"<<endl;
    
    //Process
    for(int i=5;i<=30;i+=5){
        sum+=calories;
        cout<<"You have burned "<<sum<<" calories in "<<i<<" minutes"<<endl;
    }           
        }
        case 4: {
            //Declare Variables
    int time,cost,base;
    float increase;
    
    //Initialize Variables
    cost=2500;
    increase=.04;
    
    //Input
    cout<<"This program is designed to calculate the amount of calories "<<endl;
    cout<<"based on how much time is spent on a particular treadmill"<<endl;
    
    //Process
    for(int i=1;i<=6;i++){
        cost+=cost*.04;
        cout<<"The have membership fee costs $"<<cost<<" in year "<<i<<endl;
    }
        }
        case 5: {
                 //Declare Variables
        int hours,dstnce,speed;
    
    //Input
    cout<<"This program is designed to calculate the distance a car traveled at"
        <<" a given speed for a given quantity of time"<<endl;
    cout<<"Enter the speed of the car in miles per hour."<<endl;
    cin>>speed;
    cout<<"Enter the time in which the car traveled in hours"<<endl;
    cin>>hours;
    
    //Process/Map Inputs to Outputs
    cout<<"What is the speed of the car? "<<speed<<" mph"<<endl;
    cout<<"How many hours has it traveled? "<<hours<<" hours"<<endl;
    cout<<"Hours  Distance Traveled"<<endl;
    cout<<"--------------------------------"<<endl;
    for(int i=1;i<=hours;i++){
        dstnce=(speed*i);
        cout<<" "<<i<<setw(15)<<dstnce<<endl;
    }
    
    //Output Data
    
    //Exit Stage Right
        }
        case 6: {
    //Declare Variables
    int days,popltn;
    float incrse;
    
    //Initialize Variables
    
    //Input
    cout<<"This program is designed to calculate the increase of a "<<endl;
    cout<<"population of organisms based on the factors: The base quantity of"
            <<" organisms, daily population increase, and the given quantity"
            <<" of time"<<endl;
    cout<<"Enter the base size of the population"<<endl;
    cin>>popltn;
    cout<<"Enter the daily size increase as a percent"<<endl;
    cin>>incrse;
    cout<<"Enter the quantity of days in which this increase occurs"<<endl;
    cin>>days;
    
    //Process
    for(int i=1;i<=days;i++){
        popltn+=(popltn*(incrse/100));
        cout<<"The population increases to "<<popltn<<" after "<<i<<endl;
    }
                     
        }
        case 7: {
    //Declare Variables
    float farnht;
    
    //Initialize Variables
    
    //Input
    cout<<"This program is designed to convert 0-20 degrees Celsius to "
        <<" Fahrenheit"<<endl;

    
    for(int i=0;i<=20;i++){
        farnht=(i*(1.8))+32;
        cout<<i<<" degrees Celsius is equal to "<<fixed<<setprecision(1)
        <<showpoint<<farnht<<" degrees Fahrenheit"<<endl;
    }            
        }
        case 8: {
    //Declare Variables
    int length;
    
    //Initialize Variables
    
    //Input
    cout<<"This program is designed to create a square made up of X's "<<endl;
    cout<<"Enter the Length/Width of the Square"<<endl;
    cin>>length;
    
    for(int i=0;i<=length;i++){
        for(int i=0;i<=length;i++){
            cout<<"x";
        }cout<<endl;
    }
            
        }
        case 9: {
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
        }
        default:cout<<"You choose to exit"<<endl;
    }
   
    //Exit
    return 0;
}

