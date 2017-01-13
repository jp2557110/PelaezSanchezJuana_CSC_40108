

/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 12, 2017, 2:47 PM
 *///Gaddis_7th Edition_Ch.3_Problem2
//This Program calculates the income generated from 
//ticket sales at a stadium


#include <iostream>
#include <iomanip>
//System Libraries
using namespace std;

//User Libraries

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    double classA, classB, classC, nTicketsA,nTicketsB,nTicketsC;
    
    double ticketSales;
    classA=15; //The three seating categories at a stadium
    classB=12; //Each category has its own seating cost
    classC=9;
    
      cout<<"Enter the number of tickets sold for class A seats: \n";
      cin>>nTicketsA;
       cout<<"Enter the number of tickets sold for class B seats: \n";
       cin>>nTicketsB;
        cout<<"Enter the number of tickets sold for class C seats: \n";
       cin>>nTicketsC;
//Display ticket sales from each class
       cout<<setprecision(2)<<fixed;
       cout<<"Class A Sales = $"<<classA*nTicketsA<<endl;
       cout<<"Class B Sales = $"<<classB*nTicketsB<<endl;
       cout<<"Class C Sales = $"<<classC*nTicketsC<<endl;
//Display the income generated from ticket sales
       ticketSales= (classA*nTicketsA) +(classB*nTicketsB) +(classC*nTicketsC);
       
       cout<<"The total income from ticket sales is \n";
       cout<<"Ticket Sales= $"<<ticketSales<<endl;
       
               
    return 0;
}

