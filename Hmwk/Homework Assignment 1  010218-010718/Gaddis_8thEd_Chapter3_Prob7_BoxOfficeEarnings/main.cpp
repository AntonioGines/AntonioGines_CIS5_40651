/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 8, 2018, 5:01 PM
 * Purpose: Display Gross Earnings of a Box Office
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(int argc, char** argv) {
    //Declare Variables
    string Moviename;
    float AdlTikt,//Adult Tickets Sold
          ChdTikt,//Child's Tickets Sold
          GrsProf,//Gross Profits
          BoxProf,//Box Office Profits
          DisProf;//Distributor's Profits
            
    //Inputs
    cout<<"This program is designed to calculate a Box Office's earnings "
        <<"based on the combined amounts of Tickets sold to adults "<<endl;
    cout<<"and children assuming Adult Tickets are $10.00 each and Child"
        <<"tickets are $6.00 each."<<endl;
    cout<<"What is the name of the movie?"<<endl;
    getline(cin, Moviename);
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>AdlTikt;
    cout<<"How many child tickets were sold?"<<endl;
    cin>>ChdTikt;
    
    //Process
    GrsProf=(AdlTikt*10.00)+(ChdTikt*6.00);
    BoxProf=GrsProf*.2;
    DisProf=GrsProf-BoxProf;
    
    //Output
    cout<<"Name:"<<setw(32)<<Moviename<<endl;
    cout<<"Adult Tickets Sold:"<<setw(18)<<AdlTikt<<endl;
    cout<<"Child Tickets Sold:"<<setw(18)<<ChdTikt<<endl;
    cout<<"Gross Box Office:"<<setw(15)<<setprecision(2)
        <<fixed<<"$"<<GrsProf<<endl;
    cout<<"Net Box Office Profit:"<<setw(10)<<setprecision(2)
        <<fixed<<"$"<<BoxProf<<endl;
    cout<<"Amount Paid to Distribution"<<setw(5)<<setprecision(2)
        <<fixed<<"$"<<DisProf<<endl;

    return 0;
}

