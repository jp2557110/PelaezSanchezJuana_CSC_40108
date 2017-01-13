

/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 12, 2017, 4:26 PM
 *///Gaddis_7th Edition_Ch.3_Problem6
//How many widgets? 
//This program calculates the number of widgets
//stacked on a pallet

//System Libraries

#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

int main(int argc, char** argv) {
    //Declare and Initialize Variables
    double widgetWeight= 9.2; //Weight for Each individual widget in pounds
    double palletWeight,fullWeight,nWidgets;
    
    //Input values
    cout<<"This Program calculates the number of widgets ";
    cout<<"stacked on a pallet."<<endl;
    cout<<"Please enter the weight of the pallet only: ";
    cin>>palletWeight;
    cout<<"Enter the weight of the pallet with the widgets stacked on it: ";
    cin>>fullWeight;
   
//Process by mapping inputs to outputs
//Calculate the number of widgets stacked on the pallet
    nWidgets= (fullWeight-palletWeight)/widgetWeight;
    
    
 //Output values   
    cout<<setprecision(1)<<fixed;
    cout<<"The number of widgets= "<<nWidgets<<endl;
    
    return 0;
}

