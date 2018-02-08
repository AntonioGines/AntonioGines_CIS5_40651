/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on February,4 , 2018, 10:00 AM
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
#include <vector>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int PEOPLE=2;                          //The amount of people in the match

//Function Prototypes
int ace();                                    //Choose Whether an Ace=1 or 11
int Dealt(int &,int &);                       //Player's Total Cards Dealt
void Dealt(int [][PEOPLE]);                        //Cards Dealt to the Dealer
void Names(vector<string> &,int);             //Player's and Dealer's Name
void Dsort1(int [][PEOPLE], int = 5);         //Bubble Sort Dealer's Cards
void Dsort2(int [][PEOPLE], int = 5);         //Select Sort Dealer's Card
int  Largest(int [][PEOPLE], int);                 //Dealer's Largest Card
bool AutoWin(int, int);                   //Determine if Automatic Win  by 21
void ShowAry(int [][PEOPLE], int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE=10;
    int PPL=1;          
    int bet,newbet,total,rng1,rng2,card1,card2,card3,card4,payout,ptntial;
    int total1,total2,split1,split2,dealer1,dealer2,dealer3,dealtot;
    int dealer[10][2];
    char choice, hitagn, playagn;
    bool win;
    vector<string> name(2);           //Vector To be Used for Names
    ifstream file;
    
    //Seed Random Number Generator
    srand(static_cast<int>(time(0)));
    
    //Initialize Variables    
    ptntial=0;                           //Will be used later on as temp

    //Rules of the Game
    file.open("Blackjack.txt");         //Open The file that gives instructions
    
    string line;
    
    while(file){
    getline(file,line);
    cout<<line<<endl;
    }file.close();                       //Close the file

    //Begin Game
    cout<<"Before we begin, what is your name and what is the "
        <<"dealer's name?"<<endl;
    Names( name, PPL);                       //Call FillAry
    do{ 
    int count1=0;
    newbet=0;
    bet=0;
    Dealt(dealer);                 //Dealer's and Player's Randomized Cards
    while(card1==11&&card1==card2){       
        card2=(rand()%11)+1;
    }
    do{                                    //Enter Player name
        cout<<"Mr./Mrs. "<<name[0]<<" please enter a bet of at least $15 and at"
        <<" most $500"<<endl;
        cin>>bet;
    }while(bet>500||bet<15);
    card1=dealer[0][0];
    card2=dealer[0][1];
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
    //Determine Auto Win
    win=AutoWin(card1, card2);
    win?cout<<"Congratulations! It's a Blackjack,you win"<<endl:cout<<endl;
    if(win){                              //If it is 21
        cout<<"Your payout is:"<<endl;
        cout<<"$"<<fixed<<setprecision(2)<<showpoint<<static_cast<float>(bet)
                 <<endl;
    }else cout<<endl;
    if(win){
        exit(0);
    }
    cout<<"The dealer drew:"<<endl;        //Dealer's Turn
    cout<<dealer[1][0]<<endl;
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
                    card3=dealer[0][count1+2];
                    count1++;
                    cout<<"You have chosen to hit and your card is:"<<endl;
                    cout<<card3<<endl;
                    if(card3==1||card3==11){  //Choosing what happens if you get  
                        card3=ace();          //1 or an 11
                    }
                    total+=card3;           //Incrementing total value of cards
                    if(card3>card2){
                        rng2=card3;
                    }else if(ptntial>card3&&ptntial>card2){
                        rng2=ptntial;
                    }else rng2=card1;
                    ptntial=card3;
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
                 card3=dealer[0][2];
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
                 card3=dealer[0][2];
                 card4=dealer[0][3];
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
        dealtot=dealer[1][0]+dealer[1][1];       //If it's not an immediate bust
        cout<<"The dealer will now reveal their second card and choose whether "
             <<"or not to hit"<<endl;
        cout<<"The dealer's second card is:"<<endl;
        cout<<dealer[1][1]<<endl;
        int count=0;
        while(dealtot<=total){      //Determine whether dealer hits
            dealtot+=dealer[1][count+2];
            cout<<"The dealer chose to hit and the card drawn was:"<<endl;
            cout<<dealer[1][count+2]<<endl;
            count++;
        }if (count<=1){
            count=1;
        }
        cout<<"The dealer's total is:"<<endl;
        cout<<dealtot<<endl;
        if(dealtot>21){                        // If Dealer Busts
            cout<<"Congratulations! "<<name[1]
            <<" the dealer busts meaning you won!"<<endl;
            cout<<"Your payout is $"<<fixed<<setprecision(2)<<showpoint
                <<static_cast<float>(bet)<<endl;
            cout<<"And your largest card was "
                <<static_cast<int>(fmax(rng1,rng2))<<endl;
        }
        else if(total<=21&&total>dealtot){      //If you win
            cout<<"Congratulations! You beat "<<name[1]<<" the dealer! "<<endl;
            cout<<"Your payout is $"
                <<fixed<<setprecision(2)<<showpoint
                <<static_cast<float>(bet)<<endl;
            cout<<"And your largest card was "
                <<static_cast<int>(fmax(rng1,rng2))<<endl;
        }else if(dealtot>total){                 //If the dealer busts
            int large=Largest(dealer, count);
            Dsort1(dealer, count);               //Bubble Sorts
            cout<<name[1]<<"'s cards organized using bubble sort were:"<<endl;
            ShowAry(dealer, count);
            Dsort2(dealer, count);               //Selection Sorts
            cout<<name[1]<<"'s cards organized using selection sort were:"
                <<endl;
            ShowAry(dealer, count);
            cout<<endl;
            cout<<"Sorry, but "<<name[1]
                <<" the dealer beat you and you lost $"<<fixed
                <<setprecision(2)<<showpoint<<static_cast<float>(bet)<<endl;
            cout<<"The dealer's largest card was "<<large<<endl;
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

void ShowAry(int Array[][2], int number){           //Display Both Sorted Arrays
    for(int i=0;i<=number+1;i++){
        cout<<Array[1][i]<<" ";
    }cout<<endl;
}

bool AutoWin(int num1, int num2){                    //If first hand is 21
    bool Val;
    if(num1+num2==21){
        Val=true;
    }else Val=false;
    return Val;
}

int Largest(int Array[][2], int nums){               //Largest Card in hand
    int large=0;
    for(int i=0;i<=nums+1;i++){
        if(Array[1][i]>large){
            large=Array[1][i];
        }
    }return large;
    
}

void Dsort2(int Array[][2], int nums){               //Selection Sort
    int Scan, MinIndx, MinVal;
    for(Scan=0;Scan<=nums-1;Scan++){
        MinIndx=Scan;
        MinVal=Array[1][Scan];
        for(int index=Scan+1;index<=nums;index++){
            if (Array[1][index]<MinVal){
                MinVal=Array[1][index];                 
                MinIndx=index;
            }
        }
        Array[1][MinIndx]=Array[1][Scan];
        Array[1][Scan]=MinVal;
    }
}

void Dsort1(int SortAry[][2], int num){                 //Bubble Sort
    for(int i=0;i<=num;i++){
        for(int j=i+1;j<=num+1;j++){
            if(SortAry[1][i]>SortAry[1][j]){
                int temp=SortAry[1][i];               //Pass By Reference
                SortAry[1][i]=SortAry[1][j];
                SortAry[1][j]=temp;
            }
        }
    }
}

void Names(vector<string> &name, int people){          //Input Names
    for(int i=0;i<=people;i++){
        cin>>name[i];
    }
}

void Dealt(int array[][2]){                          //Fill An Array
    int deal;
    for(int j=0;j<=1;j++){
        for(int i=0;i<=10;i++){
            array[i][j]=(rand()%11)+1;
        }
    }
}

int Dealt(int &card1,int &card2){                  //Display Total
    int T;
    T=card1+card2;
    cout<<"Your total is "<<T<<endl;
    return T;
}

int ace(){                                           //Determine if it is an Ace
    int n;
    cout<<"You have an ace! Would you like the card to be a 1 or an 11?"<<endl;
    cin>>n;
    while(n!=1&&n!=11){
        cout<<"You have not entered a valid number, please try again"<<endl;
        cin>>n;
    }
    return n;
}