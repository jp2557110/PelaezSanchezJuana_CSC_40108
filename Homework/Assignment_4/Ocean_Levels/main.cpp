
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 19, 2017, 5:44 AM
 *///Gaddis.7th Edition.Problem3
/*In this program,assume the ocean level is currently rising at about
 1.5 millimeters per year. The output should display a table showing
 the number of millimeters that the ocean will have risen each
 year for the next 25 years*/
//System Libraries
#include <iostream>
#include <iomanip>
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
    float oceanRise= 0; 
    int year=25; //25 years
 
    //Input values
    cout<<"This table displays the ocean level rise in millimeters, ";
    cout<<"for the next 25 years."<<endl;
    
    //Process by mapping inputs to outputs
    //using for loop
    for (int num=1; num<=year; num++)
    {
        oceanRise += 1.5; //level rise of 1.5 millimeters per year
       cout<<"Year: "<<num<<"\t\t"<<oceanRise<<"mm"<<endl;
    }
    
    //Output values
    
   

    //Exit stage right!
    return 0;
}
