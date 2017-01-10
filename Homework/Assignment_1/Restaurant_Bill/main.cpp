/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 9, 2017, 8:56 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double mealcharge=44.50,
            taxPercent= 0.0675,
            tipPercent= 0.15,
            taxAmount,
            tipAmount,
            totalBill,
            mealCost;
    
    //Calculate tax amount
    taxAmount= mealcharge*taxPercent;
    
    //Display meal cost
    mealCost=mealcharge+taxAmount;
    
    //Calculate the total tip amount
    tipAmount= mealCost*tipPercent;
    
    //Display the total bill amount
    totalBill=mealCost+tipAmount;
    
    cout<<"Meal Charge= $"<<mealcharge<<endl;
    cout<<"Tax Amount= $"<<taxAmount<<endl;
    cout<<"Tip Amount= $"<<tipAmount<<endl;
    cout<<" Your Total Bill= $"<<totalBill<<endl;
            
    
    return 0;
}

