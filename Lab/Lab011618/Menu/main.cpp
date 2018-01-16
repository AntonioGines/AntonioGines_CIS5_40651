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
    cout<<"Problem 1 -> Gaddis 9thEd Chapter4 Prob11 MathTutor"<<endl;
    cout<<"Problem 2 -> Savitch 9thEd Chapter3 Prob6 FibonacciSequence"<<endl;
    cout<<"Problem 3 -> Savitch 9thEd Chapter3 Prob7 etox"<<endl;
    cout<<"Problem 4 -> Author_Edition_Chapter_Problem_Description 4"<<endl;
    cout<<"Problem 5 -> Author_Edition_Chapter_Problem_Description 5"<<endl;
    cout<<"Problem 6 -> Author_Edition_Chapter_Problem_Description 6"<<endl;
    cout<<"Problem 7 -> Author_Edition_Chapter_Problem_Description 7"<<endl;
    cout<<"Problem 8 -> Author_Edition_Chapter_Problem_Description 8"<<endl;
    cout<<"Problem 9 -> Author_Edition_Chapter_Problem_Description 9"<<endl;
    cout<<"Type 1 to 9 only"<<endl;
    cin>>probNum;
    
    //Output the results
    switch(probNum){
        case 1: {
            
                //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    unsigned short op1, op2, result, answer;
    
    //Input or initialize values Here
    op1=rand()%900+100;//Three Digit Number
    op2=rand()%1000;   //Any 1 to 3 Digit number
    
    //Process/Calculations Here
    result=op1+op2;
    
    //Output Located Here
    cout<<"Test your addition skills, solve the following"<<endl;
    cout<<setw(5)<<op1<<endl;
    cout<<"+ "<<setw(3)<<op2<<endl;
    cout<<"-----"<<endl<<(result>1000?" ":"  ");
    cin>>answer;
    cout<<(result==answer?"Correct":"Incorrect")<<endl;
        }    
        case 2: {
                //Declare all Variables Here
    unsigned int fi, fim1, fim2;
    
    //Input or initialize values Here
    fim1=1;
    fim2=1;
    cout<<fim2<<","<<fim1;
    
    //Process/Calculations Here
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    
     //Process/Calculations Here
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    
     //Process/Calculations Here
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    
     //Process/Calculations Here
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    
     //Process/Calculations Here
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    
     //Process/Calculations Here
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    
     //Process/Calculations Here
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    
     //Process/Calculations Here
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    
     //Process/Calculations Here
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    
    
    //Comparison of the ratio of Fibonacci
    cout<<endl<<"ratio = "<<1.0f*fim1/fim2<<endl;
    

        }
        case 3: {
            //Declare all Variables Here
    float aproxE, term, x;
    int counter;
    
    //Input or initialize values Here
    aproxE=1.0f;
    counter=1;
    x=1.0f;
    term=x/counter++;
    
    //Process/Calculations Here
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Process/Calculations Here
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    //Process/Calculations Here
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
        //Process/Calculations Here
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
        //Process/Calculations Here
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    
    
    //Output Located Here
    cout<<"e^"<<x<<"       exactly = "<<exp(x)<<endl;
   
        }
        case 4: {
            cout<<"Put problem 4 here "<<endl;break;
        }
        case 5: {
            cout<<"Put problem 5 here "<<endl;break;
        }
        case 6: {
            cout<<"Put problem 6 here "<<endl;break;
        }
        case 7: {
            cout<<"Put problem 7 here "<<endl;break;
        }
        case 8: {
            cout<<"Put problem 8 here "<<endl;break;
        }
        case 9: {
            cout<<"Put problem 9 here "<<endl;break;
        }
        default:cout<<"You choose to exit"<<endl;
    }
   
    //Exit
    return 0;
}

