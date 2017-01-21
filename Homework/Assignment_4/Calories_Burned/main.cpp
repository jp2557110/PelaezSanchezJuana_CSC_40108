
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 19, 2017, 5:43 AM
 *///Gaddis. 7th Edition.Problem4
/*Running on a particular treadmill you burn 3.9 calories per minute. 
 This program uses a loop to display the number of calories burned
 after 10,15,20,25,30 minutes*/

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
    const int CAL_PERMINUTE=3.9; //Calories burned per minute
    float calBurned; //Calories Burned
    
    //Input values
    cout<<"This program calculates the calories burned in 10,15, ";
    cout<<"20,25,30 minutes while running on a treadmill."<<endl;
    //Process by mapping inputs to outputs
    //Use for loop
    
    for (int time=10; time<=30; time+=5)
    {
        calBurned= time*CAL_PERMINUTE;
        cout<<"Running for "<<time<<" minutes you burn ";
        cout<<calBurned<<" calories."<<endl;
    }
            
    //Output values

    //Exit stage right!
    return 0;
}