
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 12, 2017, 6:57 PM
 * //Gaddis_7th Edition_Ch.3_Problem15
 *///This is a program that can be used as a math tutor
//The program displays two random numbers to be added

#include <iostream>
#include <cstdlib> //for rand and srand
#include <ctime> //for the time function

using namespace std;

int main(int argc, char** argv) {
    //system time
    double nOne, nTwo,sum;
    unsigned seed= time(0);
    srand(seed);
    char ch;
    
    //Input Values
    cout<<"Math Tutor: This program adds two random numbers."<<endl;
    cout<<"Enter your first number: ";
    cin>>nOne;
    cout<<"Enter your second number: ";
    cin>>nTwo;
     cout<<nOne<<" + "<<nTwo<<" =?"<<endl;
    //Calculate Sum
    sum= nOne+nTwo;
    
    //Output Values
   
    cout<<"This program has paused.When ready press Enter to continue."<<endl;
    cin.get(ch);
    cout<<nOne<<" + "<<nTwo<<" = "<<sum<<endl;
    
    return 0;
}

