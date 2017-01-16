
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 15, 2017, 8:39 PM
 *///Gaddis_7th Edition.Problem3/Magic Dates

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int day,month,year;
    
    cout<<"This program determines if the month times the day ";
    cout<<"is equal to the year entered."<<endl;
    cout<<"Enter a month in numeric form: ";
    cin>>month;
    cout<<"Enter a day: ";
    cin>>day;
    cout<<"Now enter a two digit year: ";
    cin>>year;
    
    //Map Inputs to Outputs
    //Determine whether the date is magic
    //Display Result
    if (month*year != year)
        cout<<"You must be a wizard sir/m'am. This date is magic!"<<endl;
    else
        cout<<"This date is not magic."<<endl;
    

    return 0;
}

