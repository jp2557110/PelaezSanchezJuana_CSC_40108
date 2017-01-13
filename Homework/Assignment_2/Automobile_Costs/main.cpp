
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 12, 2017, 11:00 PM
 * //Gaddis_7th Edition_Ch.3_Problem9
 *///This program calculates monthly and annual 
//automobile expenses

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    double loanPymnt,insurance,gas,oil,tires,maintenance;
    double monthlyCost,annualCost;
    
    //Input Values
    cout<<"Enter the monthly cost for the following Automobile expenses:"<<endl;
    cout<<"Loan Payment: ";
    cin>>loanPymnt;
    cout<<"Insurance: ";
    cin>>insurance;
    cout<<"Gas: ";
    cin>>gas;
    cout<<"Oil: ";
    cin>>oil;
    cout<<"Tires: ";
    cin>>tires;
    cout<<"Maintenance: ";
    cin>>maintenance;
    
    //Process by mapping inputs to outputs
    //Calculate Monthly cost
    //Calculate Annual Cost
    monthlyCost= loanPymnt+insurance+gas+oil+tires+maintenance;
    annualCost= monthlyCost*12;
    
    //Output Values

    cout<<"Monthly Cost: "<<monthlyCost<<endl;
    cout<<"Annual Cost: "<<annualCost<<endl;
    
            

    return 0;
}

