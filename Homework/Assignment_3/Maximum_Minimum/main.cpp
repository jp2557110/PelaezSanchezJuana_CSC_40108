
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 15, 2017, 8:39 PM
 *///Gaddis_7th Edition_Problem1

//System Libraries
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int nOne, nTwo,minimum,maximum;
    
    //Input values
    cout<<"Enter two numbers and I can determine ";
    cout<<"which is maximum and minimum."<<endl;
    cout<<"Enter your first number: ";
    cin>>nOne;
    cout<<"Enter your second number: ";
    cin>>nTwo;
    
    //use conditional operator if/else statement
    //Display which number is min. and max.
    if (nOne>nTwo)
        cout<<nOne<<" is the maximum and "<<nTwo<<" the minimum"<<endl;
    else
        cout<<nTwo<<" is the maximum and "<<nOne<<" the minimum."<<endl;
    
            

    return 0; 
}

