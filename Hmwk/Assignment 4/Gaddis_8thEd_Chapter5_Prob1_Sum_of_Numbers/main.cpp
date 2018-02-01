/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 22, 2018, 4:30 PM
 *Purpose: First Program Hello World
 */

//System Libraries
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
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
    
    return 0;
}

