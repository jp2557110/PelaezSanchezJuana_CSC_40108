
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 15, 2017, 8:38 PM
 *///Gaddis.7th Edition.Problem 2
//This is a Roman Numeral Converter


#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int number;
    
    //Input value number form user.
    cout<<"This is a conversion program."<<endl;
    cout<<" Enter any number between 1 and 10";
    cout<<" and I can convert it to a Roman numeral: ";
    cin>>number;
    
    //Use switch statement
    //Map input to output and Display conversion
    if (number<1||number>10)
        cout<<"Invalid number. Run again and enter a number between 1 and 10.";
    else
    {
    switch(number)
    {
    case 1: cout<<"1 is numeral I";
        break;
    case 2: cout<<"2 is numeral II";
        break;
    case 3: cout<<"3 is numeral III";
        break;
    case 4: cout<<"4 is numeral IV";
        break;
    case 5: cout<<"5 is numeral V";
        break;
    case 6: cout<<"6 is numeral VI";
        break;
    case 7: cout<<"7 is numeral VII";
        break;
    case 8: cout<<"8 is numeral VIII";
        break;
    case 9: cout<<"9 is numeral IX";
        break;
    case 10:cout<<"10 is numeral x";
        break;
                
    }
    }
    return 0;
    
}

