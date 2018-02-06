/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on January 29, 2018, 6:20 PM
 * Purpose:  Blackjack 21
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int ace();
int Dealt(int &,int &);                       //Player's Total Cards Dealt
void Dealt(int [],int = 10);                  //Cards Dealt to the Dealer

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE=10;
    int bet,newbet,total,rng1,rng2,card1,card2,card3,card4,payout;
    int total1,total2,split1,split2,dealer1,dealer2,dealer3,dealtot;
    int dealer[SIZE];
    char choice, hitagn, playagn;
    bool win;
    string name;
    ifstream file;
    
    //Seed Random Number Generator
    srand(static_cast<int>(time(0)));
    
    //Initialize Variables

    //Rules of the Game
    file.open("Blackjack.txt");
    
    string line;
    
    while(file){
    getline(file,line);
    cout<<line<<endl;
    }file.close();

    //Initialized Variables
    cout<<"Before we begin, what is your name?"<<endl;
    cin>>name;
    do{
    newbet=0;
    bet=0;
    card1=(rand()%11)+1;                 //Player's Randomized Cards
    card2=(rand()%11)+1;
    card3=(rand()%11)+1;
    card4=(rand()%11)+1;
    Dealt(dealer,SIZE);                  //Dealer's Randomized
    while(card1==11&&card1==card2){       
        card2=(rand()%11)+1;
    }
    do{                                    //Enter Player name
        cout<<"Mr./Mrs. "<<name<<" please enter a bet of at least $15 and at"
        <<" most $500"<<endl;
        cin>>bet;
    }while(bet>500||bet<15);
    cout<<"Your first two cards are:"<<endl;
    cout<<card1<<" and "<<card2<<endl;    //Deal The Cards
    if(card1==1||card1==11){              //Choosing what happens if you get  
        card1=ace();                      //1 or an 11
    }if(card2==1||card2==11){
        card2=ace();
    }
    cout<<"Your hand is now "<<card1<<" and "<<card2<<endl;
    total=Dealt(card1, card2);
    //Record Largest Card's Value
    if(card1>card2){
        rng1=card1;
    }else rng1=card2;
    win=total>21?true:false;
    if(win){                              //If it is 21
        cout<<"Your payout is:"<<endl;
        cout<<"$"<<fixed<<setprecision(2)<<showpoint<<static_cast<float>(bet)
                 <<endl;
    }else cout<<endl;
    if(win){
        exit(0);
    }
    cout<<"The dealer drew:"<<endl;        //Dealer's Turn
    cout<<dealer[0]<<endl;
    if(card1==card2){                      //Choices when you are able to split
        cout<<"If you wish to Hit type H"<<endl;
        cout<<"If you wish to Stand type S"<<endl;
        cout<<"If you wish to Split type T"<<endl;
        cout<<"If you wish to Double type D"<<endl;
    }if(card1!=card2){                   //Choices when  you are unable to split
        cout<<"If you wish to Hit type H"<<endl;
        cout<<"If you wish to Stand type S"<<endl;
        cout<<"If you wish to Double type D"<<endl;
    }
    cin>>choice;
    while(choice!='H'&&choice!='S'&&choice!='T'&&choice!='D'){//Validating user input
        cout<<"You have entered an invalid choice please try again"<<endl;
        cin>>choice;
    }if(choice=='T'&&card1!=card2){ //Inability to split when cards don't =
        while(choice=='T')
        cout<<"You cannot split because your cards are not the same. Please"
            <<" enter a valid response"<<endl;
        cin>>choice;
    }
    switch(choice){                       //Begin switch based on input
        case 'H':do{                      //Choosing to hit
                    card3=(rand()%11)+1;
                    cout<<"You have chosen to hit and your card is:"<<endl;
                    cout<<card3<<endl;
                    if(card3==1||card3==11){  //Choosing what happens if you get  
                        card3=ace();          //1 or an 11
                    }
                    total+=card3;           //Incrementing total value of cards
                    if(card3>card2){
                        rng2=card3;
                    }else rng2=card1;
                    cout<<"Bringing your total to:"<<endl;
                    cout<<total<<endl;
                    if(total<=21){         //Choosing to hit again
                    cout<<"Would you like to hit again? If yes type"
                           <<" H and if not type any other character"<<endl; 
                    cin>>hitagn;
                    }else cout<<"You cannot hit again"<<endl;
                }while(hitagn=='H'&&total<=21);
                cout<<endl;break;

        case 'S':cout<<endl;break;          //Choosing to stay
        
        case 'D':bet+=bet;             //Choosing to double and incrementing bet
                 cout<<"You have doubled your initial bet to"<<endl;
                 cout<<fixed<<setprecision(2)<<showpoint
                 <<static_cast<float>(bet)<<endl;
                 cout<<"You will be given another card and cannot hit again"
                     <<endl;
                 cout<<"Your card is"<<endl;
                 cout<<card3<<endl;
                 if(card3==1||card3==11){  //Choosing what happens if you get  
                        card3=ace();          //1 or an 11
                 }
                 cout<<"And your total is"<<endl;
                 total+=card3;           //Incrementing total value of cards
                 if(card3>card2){        //Saving input to determine max value 
                        rng2=card3;      //of single card in a hand
                 }else rng2=card1;
                 cout<<total<<endl;break;
        case 'T':split1=card1;            //Splitting the hand
                 split2=card2;
                 cout<<"You have doubled your initial bet and split it into "
                     <<"two hands."<<endl;
                 bet+=bet;                 //Incrementing the bet
                 cout<<"The dealer will now add a card to both hands."<<endl;
                 cout<<"To the first hand the dealer added"<<endl;
                 cout<<card3<<endl;         //Card added to the first hand
                 if(card3==1||card3==11){  //Choosing what happens if you get  
                        card3=ace();          //1 or an 11
                 }
                 if(card3>card2){           //Saving input
                     if(card3>card4){
                         rng2=card3;
                     }
                 }else rng2=card1;
                 cout<<"To the second hand the dealer added"<<endl;
                 cout<<card4<<endl;          //card added to second hand
                 if(card4==1||card4==11){  //Choosing what happens if you get  
                        card4=ace();          //1 or an 11
                 }
                 if(card4>card2){
                     if(card4>card3){        //Saving input
                         rng2=card4;
                     }
                 }else rng2=card1;
                 total1=card1+card3;          //Total value of each hand
                 total2=card2+card4;
                 cout<<"The total of the first pile is"<<endl;
                 cout<<total1<<endl;
                 cout<<"The total of the second pile is"<<endl;
                 cout<<total2<<endl;
                 if(total1>total2){             //Determine which hand is
                     total=total1;              //Favorable
                 }else total=total2;
                 cout<<endl;break;
    }if(total>21){                              //It's a bust if > 21
        cout<<"Sorry, your total of "<<total<<" is greater than 21. It's a "
            <<"bust, thanks for your cash!"<<endl;
    }else{
        dealtot=dealer[0]+dealer[1];             //If it's not an immediate bust
        cout<<"The dealer will now reveal their second card and choose whether "
             <<"or not to hit"<<endl;
        cout<<"The dealer's second card is:"<<endl;
        cout<<dealer[1]<<endl;
        int count=0;
        while(dealtot<=total){      //Determine whether dealer hits
            dealtot+=dealer[count+2];
            cout<<"The dealer chose to hit and the card drawn was:"<<endl;
            cout<<dealer[count+2]<<endl;
            count++;
        }
        cout<<"The dealer's total is:"<<endl;
        cout<<dealtot<<endl;
        if(dealtot>21){                        // If Dealer Busts
            cout<<"Congratulations, the dealer busts meaning you won!"<<endl;
            cout<<"Your payout is $"<<fixed<<setprecision(2)<<showpoint
                <<static_cast<float>(bet)<<endl;
            cout<<"And your largest card was "
                <<static_cast<int>(fmax(rng1,rng2))<<endl;
        }
        else if(total<=21&&total>dealtot){      //If you win
            cout<<"Congratulations you beat the dealer! Your payout is $"
                <<fixed<<setprecision(2)<<showpoint
                <<static_cast<float>(bet)<<endl;
            cout<<"And your largest card was "
                <<static_cast<int>(fmax(rng1,rng2))<<endl;
        }else if(dealtot>total){                 //If the dealer busts
            cout<<"Sorry, but the dealer beat you and you lost $"<<fixed
                <<setprecision(2)<<showpoint<<static_cast<float>(bet)<<endl;
        }else if(dealtot==total){                //If you tie
            cout<<"You and the dealer tied so you get to keep your $"<<fixed
                <<setprecision(2)<<showpoint<<static_cast<float>(bet)<<endl;
        }
    }
    cout<<"If you would like to play again type A and if not type in"
         <<" any other character."<<endl;
    cin>>playagn;                                 //Would you like to replay?
    
    }while(playagn=='A'||playagn=='a');           //Choose to replay
   
    //Exit stage right!
    return 0;

}

void Dealt(int array[], int size){
    int deal;
    for(int i=0;i<=size;i++){
        array[i]=(rand()%11)+1;
    }
}

int Dealt(int &card1,int &card2){
    int T;
    T=card1+card2;
    cout<<"Your total is "<<T<<endl;
    return T;
}

int ace(){
    int n;
    cout<<"You have an ace! Would you like the card to be a 1 or an 11?"<<endl;
    cin>>n;
    while(n!=1&&n!=11){
        cout<<"You have not entered a valid number, please try again"<<endl;
        cin>>n;
    }
    return n;
}