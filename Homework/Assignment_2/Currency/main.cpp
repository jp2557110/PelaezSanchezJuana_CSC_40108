
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 12, 2017, 6:56 PM
 *///Gaddis_7th Edition_Ch.3_Problem11
//Currency conversion program
//From US dollars to Japanese yen and euros

#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//conversion from US dollar to Yen 
const double YEN_PER_DOLLAR= 0.94; 
//Conversion from US dollar to Euro
const double EUROS_PER_DOLLAR= 115.03;

int main(int argc, char** argv) {
     //Declare and Initialize Variables
    double dollarAmount,yen,euro;
    //Input values
    cout<<"This is a conversion program from US Dollars ";
    cout<<"to Japanese yen and euros."<<endl;
    cout<<"Enter the amount of US Dollars: ";
    cin>>dollarAmount;
    //Process by mapping inputs to outputs
    //Currency conversion
    yen= YEN_PER_DOLLAR*dollarAmount;
    euro= EUROS_PER_DOLLAR*dollarAmount;
            
    //Output Values
    cout<<setprecision(2)<<fixed;
    cout<<"The currency exchange of "<<dollarAmount<<" to "<<endl;
    cout<<"Japanese Yen= "<<yen<<endl;
    cout<<"Japanese Euros= "<<euro<<endl;
    
    return 0;
}

