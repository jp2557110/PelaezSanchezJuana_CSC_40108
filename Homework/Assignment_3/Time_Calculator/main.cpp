
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 16, 2017, 6:50 AM
 *///Gaddis. 7th Edition. Problem 7.Time Calculator
/*This Program asks the user to enter a number of seconds. 
 * Depending on the number of seconds entered the program then
 *  converts it to either minutes, hours, or days*/
//System Libraries
#include <iostream>
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
    int seconds, minute;
     int hour,day;
     
     
    //Input values
    cout<<"Enter a number of seconds: ";
    cin>>seconds;
    
    //Process by mapping inputs to outputs
    minute= seconds/60; //calculates minutes
    hour= seconds/3600; //calculates hours
    day= seconds/86400; //calculates days 
   
    //Output values
    //If the number of seconds entered is greater then 60 seconds
    if (seconds>=60)
        cout<<seconds<<"= "<<minute<<" minute(s).";
    if (seconds>=3600)
        cout<<seconds<<"= "<<hour<<" hour(s).";
    if (seconds>=86400)
        cout<<seconds<<"= "<<day<<" day(s).";

    //Exit stage right!
    return 0;
}