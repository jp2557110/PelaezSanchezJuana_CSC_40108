
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 19, 2017, 5:43 AM
 *///Gaddis. 7th Edition.Problem 6
/*This program asks the user for the speed of a vehicle and the hours
 it has traveled.The program uses a loop to display the distance 
 the vehicle has traveled for each hour of that time period.*/
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
    float speed,//Speed in miles per hour
            distance;
    int time;//time in hours
    
    //Input values
    cout<<"Enter the speed of a vehicle in miles per hour: ";
    cin>>speed;
    
    //Process by mapping inputs to outputs
    //Evaluate the Input Validation using while loop
    while (speed<=0)
    {
        cout<<"Please enter a positive number for speed: ";
        cin>>speed;
        
    }
    
    cout<<"Enter how many hours the vehicle has traveled: ";
    cin>>time;
    
    while (time<=1)
    {
        cout<<"Please enter a positive value for time: ";
        cin>>time;
    }
    
     //Display table heading
    cout<<"Hour\t\Distance Traveled (miles)\n";
    cout<<"---------------------------------\n"<<endl;
    for (int nTime=1;nTime<=time;nTime++)
    {
        distance= speed*nTime;
        //Output values
      cout<<nTime<<"\t"<<distance<<endl;
      
     
    }
    

    //Exit stage right!
    return 0;
}
