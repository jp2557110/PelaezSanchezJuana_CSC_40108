/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 9, 2017, 9:01 PM
 */

#include<iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int nGallons,nMiles,MPG;
    
        cout<<"This program calculates miles per gallon a car gets"<<endl;
    
    cout<<"Input Number of miles driven"<<endl;
cin>>nMiles;

cout<<"Input number of gallons of gas used";
cin>>nGallons;
        
 //Calculate MPG
        MPG= nMiles/nGallons;

        cout<<"MPG ="<<MPG<<endl;
    return 0;
}

