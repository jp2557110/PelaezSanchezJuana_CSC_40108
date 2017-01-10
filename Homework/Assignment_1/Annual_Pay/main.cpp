/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 9, 2017, 8:41 PM
 */
/*This program calculates the annual pay 
 of an employee who earns $1700 biweekly*/


#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double payAmount,payPeriods,annualPay;
    
    payAmount= 1700.0;//Amount paid each pay period
    payPeriods= 26; //Pay periods in a year
    
    //Calculate the annual pay
    annualPay= payAmount*payPeriods;
    
    cout<<"the total annual pay is:"<<endl;
    cout<<"Annual Pay= $"<<annualPay<<endl;

    return 0;
}

