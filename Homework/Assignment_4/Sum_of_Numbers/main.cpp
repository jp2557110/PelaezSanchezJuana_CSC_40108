
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 19, 2017, 5:44 AM
 */
/*This program asks the user to enter a positive integer value. 
 * The program uses a loop to get the sum of all the integers
 * from 1 to the number entered 
 */

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
    const int   MIN_NUMBER=1;
    int positiveInteger;
   int count=0;
    
    //Input value
    cout<<"enter any positive inter between 1 and 300: ";
    cin>>positiveInteger;
  
    for (int num= MIN_NUMBER; num<=positiveInteger; num++)
    {
        count += num;
       
        
    }
    
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"The sum of the positive integers is= "<<count<<endl;
    

    //Exit stage right!
    return 0;
}
