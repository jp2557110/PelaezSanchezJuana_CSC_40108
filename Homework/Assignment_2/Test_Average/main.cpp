

/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 12, 2017, 4:24 PM
 * //Gaddis_7th Edition_Ch.3_Problem3
 *///This program calculates the average test score
//using five exam scores

#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, char** argv) {
    double test1,test2,test3,test4,test5;
    double avgScore;
    
    //Get the five test scores.
    cout<<"Enter the first test score: ";
    cin>>test1;
    cout<<"Enter the second test score: ";
    cin>>test2;
    cout<<"Enter the third test score: ";
    cin>>test3;
    cout<<"Enter the fourth test score: ";
    cin>>test4;
    cout<<"Enter the fifth test score: ";
    cin>>test5;
    
    //Calculate the Average score
    avgScore= (test1+test2+test3+test4+test5)/5;
    
    //Display Average test score
    cout<<"The average score is: "<<avgScore<<endl;
    
            
    
            
    return 0;
}

