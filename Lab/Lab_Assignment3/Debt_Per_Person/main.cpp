
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 13, 2017, 5:01 PM
 *///This Program calculates the debt per person
//for the year 2008 and 2016

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
//User Libraries

int main(int argc, char** argv) {
    //Declare Variables
    float population08,population16,fedDebt08,fedDebt16;
    float debtppers08,debtppers16;
    
    population08= 3.04E11; //Population for 2008
    population16= 3.22E11; //Population for 2016
    fedDebt08= 9.7E15;  //Federal Debt for 2008
    fedDebt16= 2.0E16; //Federal Debt for 2016
     //Input values
    
    //Process by mapping inputs to outputs
    //calculate debt per person 
    debtppers08= fedDebt08/population08;
    debtppers16= fedDebt16/population16;
    
   
//Output values
    cout<<"This Program calculates the debt per person";
    cout<<" for the following years:"<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"For 2008 the debt per person was: $ "<<debtppers08<<endl;
    cout<<"For 2016 the debt per person was: $ "<<debtppers16<<endl;
   

    return 0;
}

