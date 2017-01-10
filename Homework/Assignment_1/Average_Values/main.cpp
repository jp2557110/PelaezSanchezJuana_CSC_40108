/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 8, 2017, 10:56 PM
 * /This is a program that calculates
 * average values
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double nOne= 28,
            nTwo= 32,
            nThree=37,
            nFour=24,
            nFive=33,
            sum,
            avg;
    //First calculate the sum 
    sum= nOne+nTwo+nThree+nFour+nFive;
    
    //Calculate average
    avg= sum/5;
    
    cout<<"The sum of the five variables is"<<endl;
    cout<<"Sum="<<sum<<endl;
    cout<<"The average value is ="<<avg<<endl;
    
    return 0;
}

