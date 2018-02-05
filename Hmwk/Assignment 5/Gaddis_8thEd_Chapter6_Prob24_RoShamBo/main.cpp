/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on February,3, 2018
 * Purpose:  Calculate Phone Call Charges
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
int player();
int computer();
int whoWins(int, int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    srand(time(0));
    //Declare all Variables Here
    int playchc,compchc;
    
    //Input
    cout<<"This program is designed to simulate the rock,paper,scissors "<<endl;
    cout<<"against the computer"<<endl;
    playchc=player();
    compchc=computer();
    whoWins(playchc,compchc);
    

    return 0;
}

int whoWins(int compu,int playerc){
    if(compu==1){
        if(playerc==1){
            cout<<"You tied"<<endl;
        }else if(playerc==2){
            cout<<"You win!"<<endl;
        }else if(playerc==3){
            cout<<"You lose!"<<endl;
        }
    }if(compu==2){
        if(playerc==1){
            cout<<"You lose!"<<endl;
        }else if(playerc==2){
            cout<<"You tied"<<endl;
        }else if(playerc==3){
            cout<<"You win!"<<endl;
        }
    }if(compu==3){
        if(playerc==1){
            cout<<"You win!"<<endl;
        }else if(playerc==2){
            cout<<"You lose!"<<endl;
        }else if(playerc==3){
            cout<<"You tied"<<endl;
        }
    }
}

int computer(){
    //Seed Random Number Generator
    srand(time(0));
    int comp;
    comp=rand()%3+1;
    if(comp==1){
        cout<<"The computer chose rock"<<endl;
    }else if(comp==2){
        cout<<"The computer chose paper"<<endl;
    }else if(comp==3){
        cout<<"The computer chose scissors"<<endl;
    }
    return comp;
    
    
}

int player(){
    int choice;
    cout<<"Press 1 to choose rock"<<endl;
    cout<<"Press 2 to choose paper"<<endl;
    cout<<"Press 3 to choose scissors"<<endl;
    cin>>choice;
    if(choice==1){
        cout<<"You chose rock"<<endl;
    }else if(choice==2){
        cout<<"You chose paper"<<endl;
    }else if(choice==3){
        cout<<"You chose scissors"<<endl;
    }
    return choice;
}

