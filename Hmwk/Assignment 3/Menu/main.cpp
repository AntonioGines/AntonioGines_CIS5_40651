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
    cout<<"Problem 4 -> Gaddis_9thEd_Chapter3_Prob7_TimeConversion"<<endl;
    cout<<"Problem 5 -> Savitch_9thEd_Chapter3_Prob1_PhoneCall_V1"<<endl;
    cout<<"Problem 6 -> Gaddis_9thEd_Chapter3_Prob12_SoftwareSales"<<endl;
    cout<<"Problem 7 -> Gaddis_9thEd_Chapter4_Prob14_BankCharges"<<endl;
    cout<<"Problem 8 -> Gaddis_8thEd_Chapter4_Prob15_ShippingCharges"<<endl;
    cout<<"Problem 9 -> Gaddis_9thEd_Chapter4_Prob20_SpeedOfSound"<<endl;
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
        }
        case 5: {
             //Declare all Variables Here
    unsigned short cost,//Cost of the Phone Call in Pennies
                   strTime,//Start Time in Military Format
                   tmSpan;//Time span of the call
    char day,//day of the week
         dm;//Dummy input unnecessary to the problem
    
    //Input or initialize values Here
    cout<<"Calculate cost of phone call"<<endl;
    cout<<"Input the day the phone call was made"<<endl;
    cout<<"Mo Tu We Th Fr Sa Su"<<endl;
    cin>>day>>dm;
    cout<<"Input the start time in military format"<<endl;
    cout<<"1:30 PM = 13:30"<<endl;
    cin>>setw(2)>>strTime>>dm>>dm>>dm;
    cout<<"Input the duration of phone call in minutes"<<endl;
    cin>>tmSpan;
    
    //Process/Calculations Here
    if(day=='S'||day=='s'){
        cost=tmSpan*15;//15 cents per Minute
    }else if (strTime>=8&&strTime<=18){
        cost=tmSpan*40;//40 cents Per minute
    }else{
        cost=tmSpan*25;//25 Cents per minute
    }
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"The phone call cost = $"<<cost/100.0f<<endl;

        }
        case 6: {
             //Declare all Variables Here
    float quant,//Quantity Purchased
      dscount,//Discount based on quantity purchased
         base,//base price per unit
         cost;//Total amount of money paid including discount
    //Constants
    base=99;
    
    //Input or initialize values Here
    cout<<"This program is designed to display how much it costs to purchase "
        <<endl;
    cout<<"a package from a software company if you are given a discount based"
            <<" on the amount of packages you purchased"<<endl;
    cout<<"A single package costs $99.";
    cout<<"How many packages did you purchase?"<<endl;
    cin>>quant;
    if(quant<0)cout<<"This is not a viable quantity, please re-run the program"
            <<" and insert a positive quantity"<<endl;
    if(quant<0)exit(0);
    
    //Process/Calculations Here
    if(quant>0&&quant<10){
        cost=base*quant;
    }else if(quant>=10||quant<20){
        cost=(base*quant)*.2;
    }else if(quant>=20||quant<50){
        cost=(base*quant)*.3;
    }else if(quant>=50||quant<100){
        cost=(base*quant)*.4;
    }else if(quant>=100)
        cost=(base*quant)*.5;
    
    //Output Located Here
    cout<<"It will cost $ "<<fixed<<setprecision(2)<<showpoint<<cost
        <<" to purchase "<<setprecision(0)<<quant<<" units."<<endl;

        }
        case 7: {
            //Declare Variables
    float checks,//number of checks
            invest,//initial investment
            base,//base fee for having the account
            under,//additional fee if checking account id under 400
            cost;//Total Cost this month
    //Constants
    base=10;
    under=15;
    //Input
    cout<<"This program is designed to calculate the amount of fees on"
        <<" one's checking account."<<endl;
    cout<<"How much money do you currently have in your account in USD?"<<endl;
    cin>>invest;
    cout<<"How many checks have you written this month?"<<endl;
    cin>>checks;
    
    //Process
    if(invest<0)
    {
        cout<<"Urgent:Your account is overdrawn!"<<endl;
    }
    if(invest<400)
    {
        if (checks<20)
        {
            cost=(checks*.10)+base+under;
            cout<<"You have a monthly checking account fee of $ "
                <<fixed<<setprecision(2)<<showpoint<<cost<<endl;
        }
        if (checks>=20&&checks<=39)
        {
            cost=(checks*.08)+base+under;
            cout<<"You have a monthly checking account fee of $ "
                <<fixed<<setprecision(2)<<showpoint<<cost<<endl;
        }
        if (checks>=40&&checks<=59)
        {
            cost=(checks*.06)+base+under;
            cout<<"You have a monthly checking account fee of $ "
                <<fixed<<setprecision(2)<<showpoint<<cost<<endl;
        }
        if (checks>60)
        {
            cost=(checks*.04)+base+under;
            cout<<"You have a monthly checking account fee of $ "
                <<fixed<<setprecision(2)<<showpoint<<cost<<endl;
        }
    }
    else if(invest>400)
    {
                if (checks<20)
        {
            cost=(checks*.10)+base;
            cout<<"You have a monthly checking account fee of $ "
                <<fixed<<setprecision(2)<<showpoint<<cost<<endl;
        }
        if (checks>=20&&checks<=39)
        {
            cost=(checks*.08)+base;
            cout<<"You have a monthly checking account fee of $ "
                <<fixed<<setprecision(2)<<showpoint<<cost<<endl;
        }
        if (checks>=40&&checks<=59)
        {
            cost=(checks*.06)+base;
            cout<<"You have a monthly checking account fee of $ "
                <<fixed<<setprecision(2)<<showpoint<<cost<<endl;
        }
        if (checks>60)
        {
            cost=(checks*.04)+base;
            cout<<"You have a monthly checking account fee of $ "
                <<fixed<<setprecision(2)<<showpoint<<cost<<endl;
        }
    }
        }
        case 8: {
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
        }
        case 9: {
             //Declare all Variables Here
    char Medium, //The Medium by which sound will travel
            dm;  //Dummy
    float dist,    //The distance the wave will travel
          time;    //How long it will take depending on the medium and distance
    
    //Input or initialize values Here
    cout<<"This program is designed to determine how long it will take"
        <<" for sound to travel a desired distance based on the medium it"
        <<" travels through."<<endl;
    cout<<"How much distance do you want it to cover(in feet)? Use up to "
        <<"2 decimal places?"<<endl;
    cin>>dist;
    if(dist<0)cout<<"This is not a viable distance, please re-run and try again"
                  <<endl;
    if(dist<0)exit(0);
    
    cout<<"Is the sound wave traveling through Air, Water, or Steel?"<<endl;
    cin>>Medium>>dm;
    
    //Process/Calculations Here
    if(Medium=='A'||Medium=='a'){
        time=dist/1100;
    }else if(Medium=='W'||Medium=='w'){
        time=dist/4900;
    }else if(Medium=='S'||Medium=='s'){
        time=dist/1640;
    }
    
    //Output Located Here
    cout<<"It will take approximately "<<fixed<<setprecision(6)<<showpoint
        <<time<<" seconds to travel "<<fixed
        <<setprecision(2)<<showpoint<<dist<<" feet."<<endl;

        }
        default:cout<<"You choose to exit"<<endl;
    }
   
    //Exit
    return 0;
}

