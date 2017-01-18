
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 17, 2017, 7:40 PM
 *///Gaddis.7th Edition. Problem14. Running the Race
/*This program asks for the names of three runners
 and the time it took each of them to finish
 a race. The program displays who came in first, second, and third.*/

//System Libraries
#include <iostream>
#include <string> //To enter namesjon
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
    string name1,name2,name3;
    int time1,time2,time3;
    
    //Input values
    cout<<"First runner enter your name: ";
    cin>>name1;
    cout<<"Now enter your time: ";
    cin>>time1;
    cout<<"Second runner enter your name: ";
    cin>>name2;
    cout<<"now enter your time: ";
    cin>>time2;
    cout<<"Third runner enter your name: ";
    cin>>name3;
    cout<<"Now enter your time: ";
    cin>>time3;
            
    
    //Process by mapping inputs to outputs
    
    //Output values
    //Use IF statement
    if (time1<time2 && time2<time3)
        cout<<name1<<" came first, "<<name2<<" second, "<<name3<<" last.";
    if (time2<time1 && time1<time3)
        cout<<name2<<" came first, "<<name1<<" second, "<<name3<<" last.";
    if (time3<time1 && time1<time2)
        cout<<name3<<" came first, "<<name1<<" second, "<<name2<<" last.";
    if (time3<time2 && time2<time1)
        cout<<name3<<" came first, "<<name2<<" second, "<<name1<<" last.";

    //Exit stage right!
    return 0;
}