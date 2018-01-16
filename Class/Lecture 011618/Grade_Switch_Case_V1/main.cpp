/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2018, 9:58 AM
 * Purpose:  Grade With a switch case
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    short score;
    char grade;
              
    //Input or initialize values Here
    cout<<"This program gives you a grade"<<endl;
    cout<<"Type in an integer score form 0 to 100"<<endl;
    cin>>score;
    
    //Process/Calculations Here
    switch(score/10){
        case 10:score==100?grade='A':grade='I';break;
        case 9:grade='A';break;
        case 8:grade='B';break;
        case 7:grade='B';break;
        case 6:grade='B';break;
        case 5:case 4:case 3:case 2:case 1:grade='F';break;
        case 0:score<0?grade='I':grade='F';
        default: grade='I';
    }
    //Output Located Here
    
    cout<<"Your score is = "<<score<<" and your grade is = "<<grade<<endl;
    

    //Exit
    return 0;
}

