

/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 16, 2017, 6:49 AM
 *///gaddis. 7th Edition. Problem 5.
/*This Program calculates and displays a person's 
 * body mass index (BMI)*/


//System Libraries
#include <iostream>
#include <cmath> //for exponent
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int weight,//measured in pounds
        height; //measured in inches
    int bodyMassI; //Body Mass Index
    //Input values
    
    cout<<"This Program calculates your Body Mass Index (BMI).";
    cout<<"Enter your weight,in pounds: ";
    cin>>weight;
    cout<<"Enter your height,in inches: ";
    cin>>height;
   
    //Process by mapping inputs to outputs
    //Calculate BMI
    bodyMassI= (weight*703)/(pow(height,2.0));
    
    //Output values
   
    if (bodyMassI>=18.5 && bodyMassI<=25)
        cout<<"Your BMI= "<<bodyMassI<<" indicates optimal weight.\n";
    if (bodyMassI<18.5)
        cout<<"Your BMI= "<<bodyMassI<<" indicates your underweight.\n";
    if (bodyMassI>25)
        cout<<"Your BMI= "<<bodyMassI<<" indicates your overweight.\n";
    
    

    //Exit stage right!
    return 0;
}


