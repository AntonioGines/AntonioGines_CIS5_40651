/* 
 * File:   main.cpp
 * Author: Antonio Gines
 * Created on Ferbuary, 4, 2018 12:00
 * Purpose:  SelectionSort
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
int compare(int [], int, int);
void Sort(int[],int);
void Show(int[],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=18;
    int n,valid;
    int number[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,8080152,
                      4562555,5552012,5050551,7825877,1250255,1005231,6545231,
                      3852085,7576651,7881200,4581002};
    
    //Initialize Variables
    
    //Input
    cout<<"This program is designed to compare an input number to "<<endl;
    cout<<"numbers in an array and display any larger numbers."<<endl;
    cout<<"Please enter a number"<<endl;
    cin>>n;
    //Process
    Sort(number,SIZE);
    valid=compare(number, SIZE, n);
    Show(number,SIZE);
    

    //Output
    if(valid==-1){
        cout<<"You did not enter a valid account number."<<endl;
    }else{
    cout<<n<<" is a valid account number"<<endl;
    }

    return 0;
}

void Show(int array[],int size){
    for(int count=0;count<size;count++){
        cout<<array[count]<<endl;
        cout<<endl;
    }
}

void Sort(int array[],int size){
    int Scan,MinIndx,MinVal;
    for(Scan=0;Scan<(size-1);Scan++){
        MinIndx=Scan;
        MinVal=array[Scan];
        for(int index=Scan+1;index<size;index++){
            if(array[index]<MinVal){
                MinVal=array[index];
                MinIndx=index;
            }
        }array[MinIndx]=array[Scan];
        array[Scan]=MinVal;
    }
}

int compare(int nums[], int size, int input){
    int first=0,
        last=size-1,
            middle,
          place=-1;
    bool found=false;
    while(first<=last&&!found){
        middle=(first+last)/2;
        if(nums[middle]==input){
            found=true;
            place=middle;
        }else if(nums[middle]>input){
            last=middle-1;
        }else{
            first=middle+1;
        }
    }return place;
}