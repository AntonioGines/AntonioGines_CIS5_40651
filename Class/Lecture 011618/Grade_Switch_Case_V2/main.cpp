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
    switch(score<0||score>100){
        case true:grade='I';
        default:{
            switch(score>=90){
                case true:grade='A';break;
                default:{
                    switch(score>=80){
                       case true:(grade='B');break;
                        default:{
                            switch(score>=70){
                                case true:grade='C';break;
                                default:{
                                    switch(score>=60){
                                        case true:grade='D';break;
                                        default:grade='F';
                                    }
                                }    
                            }
                        }
                }
            }
        }
    }
    //Output Located Here
    
    cout<<"Your score is = "<<score<<" and your grade is = "<<grade<<endl;
    

    //Exit
    return 0;
}

