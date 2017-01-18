
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 16, 2017, 6:50 AM
 *///Gaddis. 7th Edition. Problem 11.Book Club Points
/*This Program asks the user to enter the number of books that he or she 
 has purchased this month and then displays the number of points awarded.*/

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int nBooks;
    
    //Input values
    cout<<"Enter the number of books purchased this month: ";
    cin>>nBooks;
    
    //Process by mapping inputs to outputs
    //Use switch statement 
    
    //Output Values
    switch(nBooks)
    {
    case 0: cout<<"You have earned 0 points! Keep book shopping!";
    break;
    case 1: cout<<"You have earned 5 points!";
    break;
    case 2: cout<<"You have earned 15 points!";
    break;
    case 3: cout<<"You have earned 30 points!";
    break;
    case 4: cout<<"Congratulations! You have earned 60 points!";
        break;
        default: cout<<"You can only enter 0-4 book purchases.";
    }  
    //Exit Stage Right!
   return 0;     
    }