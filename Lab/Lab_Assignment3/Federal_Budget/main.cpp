
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 13, 2017, 4:08 PM
 */
//*This Program calculates the percentage of federal budget that 
/*the Military and NASA are funded*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
//User Libraries

int main(int argc, char** argv) {
    //Declare Variables
    float totalSpending= 3.54E15; //Total US Spending
    float militaryBdgt,nasaBdgt,nasaFund,militaryFund;
   
    militaryBdgt= 5.80E14; //Military Budget
    nasaBdgt= 1.85E13; //NASA Budget
    
    //Input values
    
    //Process by mapping inputs to outputs
    //Calculate federal funds to each program
    nasaFund= (nasaBdgt/totalSpending)*100;
    militaryFund=(militaryBdgt/totalSpending)*100;
    
    //Output Values
    cout<<"This program calculates the percentage of federal budget";
    cout<<" the Military and NASA are funded."<<endl;
    cout<<setprecision(1)<<fixed;
    cout<<"Military federal budget= "<<militaryFund<<"%"<<endl;
    cout<<"NASA federal budget= "<<nasaFund<<"%"<<endl;
            
    return 0;
}

