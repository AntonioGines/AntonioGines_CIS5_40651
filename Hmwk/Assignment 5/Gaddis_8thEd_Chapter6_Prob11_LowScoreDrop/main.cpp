/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Febuary 2, 2018
 * Purpose:  Dropping Lowest Score
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void Score(int &);
void Average(int, int, int, int, int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int score1,score2,score3,score4,score5;
    
    //Input
    cout<<"This program is designed to calculate the average test score "<<endl;
    cout<<"among five tests as well as drop the lowest score."<<endl;
    Score(score1);
    Score(score2);
    Score(score3);
    Score(score4);
    Score(score5);
    Average(score1,score2,score3,score4,score5);
    //Output
    
    return 0;
}

void Average(int score1,int score2,int score3,int score4,int score5){
    int Lowest(int, int, int, int, int, int &);
    int lowest;
    float average;
    Lowest(score1,score2,score3,score4,score5,lowest);
    average=((score1+score2+score3+score4+score5)-lowest)/4.0;
    cout<<"The average of the 4 remaining tests is "<<fixed<<setprecision(2)
        <<showpoint<<average<<endl;
}

int Lowest(int score1,int score2,int score3,int score4,int score5,int& lowest){
    lowest=score1;
    if(score2<lowest){
        lowest=score2;
    }else if(score3<lowest){
        lowest=score3;
    }else if(score4<lowest){
        lowest=score4;
    }else if(score5<lowest){
        lowest=score5;
    }cout<<"The lowest score is "<<lowest<<endl;
    return lowest;
}

void Score(int& score){
    cout<<"Please enter a test grade between 1 and 100"<<endl;
    cin>>score;
    while(score<1||score>100){
        cout<<"You entered an invalid score, please try again"<<endl;
        cin>>score;
    }   
}

