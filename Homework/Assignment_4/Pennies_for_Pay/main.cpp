
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 19, 2017, 5:43 AM
 *///Gaddis. 7th Edition. problem7
/*This program calculates how much a person would earn over a period 
 * of time if his or her salary is one penny the first day and two 
 * pennies the second day, and continues to double each day. The 
 * program asks the user for the number of days. It displays a table 
 * showing how much the salary was for each day and the total pay 
 * at the end of the period. The output is displayed in dollar amount.*/

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
    int numDays=1; //Initial number of days, no days less than 1
    float pennyAmount=1.0; //This is 1 penny
    float dollarAmount,
            totalPay;
    
    //Input values
    cout<<"Enter the number of days worked: ";
    cin>>numDays;
            
    //Process by mapping inputs to outputs
    //Do not accept a number day less than one use while loop
    while(numDays<1)
    {
        cout<<"Please enter a valid work day: ";
        cin>>numDays;
    }
    //Display table heading
    cout<<"Work Days\t\Salary\n";
    cout<<"----------------------\n";
    //Use loop to double penny salary
    
    for (int day=1; day<=numDays; day++)
    {
        pennyAmount *= 2; //To double pennies
        //convert penny amount into dollar amount
        dollarAmount= pennyAmount/100;
        //Calculate the total pay
        totalPay += dollarAmount;
      
        //Output Values
        cout<<day<<"\t\t"<<"$= "<<dollarAmount<<endl;
        
    } //End of for loop
    
    //Output values
//Display total pay at the end of the period
    cout<<"Your total salary for this work period is $= "<<totalPay<<endl;
    //Exit stage right!
    return 0;
}