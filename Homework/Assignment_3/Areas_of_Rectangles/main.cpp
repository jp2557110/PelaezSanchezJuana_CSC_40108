
/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 15, 2017, 8:37 PM
 *///Gaddis. 7th Edition. Problem4. Areas of Rectangles

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    double length1,width1,length2,width2;
    double area1,area2;
    
    cout<<"This program calculates the area of two triangles.\n";
    cout<<"and compares the greater area.\n";
    cout<<"Enter the length of the first triangle: ";
    cin>>length1;
    cout<<"Now enter the width: ";
    cin>>width1;
    cout<<"Enter the length of the second triangle: ";
    cin>>length2;
    cout<<"Now enter the width of the second triangle: ";
    cin>>width2;
    
area1= length1*width1;
area2=length2*width2;
   
    
    if (area1>area2)
        cout<<"The first triangle has the greater area: "<<area1<<endl;
    if (area2>area1)
        cout<<"The second triangle has the greater area"<<area2<<endl;
    if (area1==area2)
        cout<<"Both areas are the same.";
    
    return 0;
}

