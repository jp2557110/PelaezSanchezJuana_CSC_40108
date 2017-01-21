
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 19, 2017, 5:43 AM
 *///Gaddis. 7th Edition.Problem5
/*A country club, which currently charges $2500 per year for membership,
 has announced it will increase its membership fees by 4% each year
 for the next six years. 
 This program uses a loop to display the projected rates for the next 
 * six years.*/
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
    const float FEE=0.04;
    int years=6;
       float membership= 2500;
                
    //Input values
    cout<<"This program calculates the projected membership rates, of a";
    cout<<" 4 percent increase,for the next six years."<<endl;
    
    //Process by mapping inputs to outputs
    //Display table heading.
    cout<<"Year\tProjected Rates $: \n";
    //Using for loop
    for (int numYear=1; numYear<=years; numYear++)
    {
        //Calculate new membership fees
        membership= membership+(membership*FEE);
        //Output Values
        cout<<numYear<<"\t"<<membership<<endl;
    }

    //Exit stage right!
    return 0;
}