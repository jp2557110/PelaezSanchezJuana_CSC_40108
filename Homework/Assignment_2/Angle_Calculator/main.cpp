

/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 12, 2017, 6:58 PM
 *///Gaddis_7th Edition_Ch.3_Problem20
//Angle Calcultaor 


//System Libraries

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
//User Libraries

int main(int argc, char** argv) {
    //Declare and Initialize Variables
    double radian;
    double cosine, sine, tangent;
    
    //Input values        
    cout<<"Enter an angle in radians and I will convert it ";
    cout<<"to cosine,sine, and tangent for you: ";
    cin>>radian;
    
    //Process by mapping inputs to outputs
    sine= sin(radian);
    cosine= cos(radian);
    tangent= tan(radian);
    
    //Output Values
    cout<<setprecision(4)<<fixed;
    cout<<"The sine of the angle is= "<<sine<<endl;
    cout<<"The cosine of the angle is= "<<cosine<<endl;
    cout<<"The tangent of the angle is= "<<tangent<<endl;
    
    return 0;
}

