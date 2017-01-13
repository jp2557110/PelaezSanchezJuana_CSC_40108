
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 12, 2017, 6:41 PM
 *///Gaddis_7th Edition_Ch.3_Problem10
//This Program converts celsius temperatures
//to Fahrenheit

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    double C,F; //C=Celsius temperature
                      
   
    //Input values
    cout<<"This is a conversion program ";
    cout<<"from temperature celsius to fehrenheit"<<endl;
    cout<<"Enter temperature in celsius: ";
    cin>>C;
    //Process by mapping inputs to outputs
    //Conversion Formula F=((9/5)*C)+32
    //using 9/5=1.8
    F= ((1.8)*C)+32;
    //Output Values
    
    cout<<"Temperature in Celsius is= "<<C<<" degrees."<<endl;
    cout<<"Temperature in Fehrenheit is= "<<F<<" degrees."<<endl;
    
            
    return 0;
}

