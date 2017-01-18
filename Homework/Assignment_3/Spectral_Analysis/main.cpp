
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 17, 2017, 7:40 PM
 *///Gaddis.7th Edition.Problem 17.Spectral Analysis.
/*This program asks for the wavelength of an electromagnetic wave
 in meters and then displays what the wave is according to a given chart*/

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
    float waveLength;
    //Input values
    cout<<"enter the wavelength of an electromagnetic wave in meter: ";
    cin>>waveLength;
    
    //Process by mapping inputs to outputs
    
    //Output values
    //use If statement
    
    if ( waveLength>1e-2)
        cout<<"This is a Radio Wave";
    if (waveLength<1e-2 && waveLength>1e-3)
        cout<<"This is a microwave";
    if (waveLength<1e-3 && waveLength>7e-7)
        cout<<"This is an Infrared wave";
    if (waveLength<7e-7 && waveLength>4e-7)
        cout<<"This is Visible Light";
    if (waveLength<4e-7 && waveLength>1e-8)
        cout<<"This are Ultraviolet waves";
    if (waveLength<1e-8 && waveLength>1e-11)
        cout<<"These are X-rays.";
    if (waveLength<1e-11)
        cout<<"These are Gamma rays";
    

    //Exit stage right!
    return 0;
}
