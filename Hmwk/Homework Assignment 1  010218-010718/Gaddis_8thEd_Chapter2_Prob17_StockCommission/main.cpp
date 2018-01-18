/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on January 5, 2018, 1:26 PM
 * Purpose: Determine the Cost of Shares of Stock with Commissions Included
 */
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    //Declare Variables
    float Stock,//Amount Paid for Shares
          Commiss,//Amount Paid for Commission
          TotCost;//Total Cost
            
    //Inputs
    cout<<"This program is designed to determine the amount paid "
        <<"for 750 shares of a stock  at a price of $35.00 per share "
        <<"including a 2 percent commission."<<endl;
    
    //Map Inputs to Outputs
    Stock=750*35;
    Commiss=(750*35)*2e-2;
    TotCost=Stock+Commiss;
    
    //Outputs
    cout<<"The cost of the shares alone is $"<<Stock<<endl;
    cout<<"The cost of the commission alone is $"<<Commiss<<endl;
    cout<<"The cost to purchase these shares is $"<<TotCost<<endl;

    return 0;
}

