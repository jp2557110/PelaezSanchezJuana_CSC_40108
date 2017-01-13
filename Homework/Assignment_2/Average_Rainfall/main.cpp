

/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 12, 2017, 4:25 PM
 *///Gaddis_7th Edition_Ch.3_Problem4
//This Program calculates the average rainfall 
//input three months

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
//User Libraries


int main(int argc, char** argv) {
    //Declare and Initialize Variables
    string month1, month2, month3;
    double rain1,rain2,rain3,avgRain;
    
     //Input values       
    cout<<"This Program calculates the average rainfall in inches."<<endl;
    cout<<"Please include the name of the first month: ";
    cin>>month1;
    cout<<"Enter the amount of rainfall for this month: ";
    cin>>rain1;
    cout<<"Enter the name of the second month: ";
    cin>>month2;
    cout<<"Enter the amount of rainfall for second month: ";
    cin>>rain2;
    cout<<"Enter the name of the third month: ";
    cin>>month3;
    cout<<"Enter the amount of rainfall for the third month: ";
    cin>>rain3;
    
      //Process by mapping inputs to outputs
    //Calculate the average 
      avgRain= (rain1+rain2+rain3)/3;      
            
    //Output values
      cout<<setprecision(2)<<fixed;
   cout<<"The average rain fall for "<<month1<<","<<month2<<",and "
           <<month3<<" is "<<avgRain<<"inches."<<endl;           

    return 0;
}

