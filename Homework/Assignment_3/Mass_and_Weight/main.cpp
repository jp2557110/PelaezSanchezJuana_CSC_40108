
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 16, 2017, 6:49 AM
 *///Gaddis. 7th Edition. Problem6: Mass and Weight.
/*This program asks the user to enter an object's mass
 and then calculates and displays its weight in Newtons.
 * The weight formula is Weight= mass X 9.8 */


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
    int mass; //calculated in kilograms
    int weight; //calculated in Newtons
    //Input values
    cout<<"If you know the amount of mass an object has, I can ";
    cout<<"calculate its weight in Newtons."<<endl;
    cout<<"Enter the object's mass in kilograms: ";
    cin>>mass;
            
    //Process by mapping inputs to outputs
    weight=mass*9.8;
    
    //Output values
    if (weight>=10 && weight<=1000)
        cout<<"The object's mass is= "<<weight<<"Newtons.";
    if (weight<10)
        cout<<"This object is too light.";
    if (weight>1000)
        cout<<"This object is too heavy.";

    //Exit stage right!
    return 0;
}