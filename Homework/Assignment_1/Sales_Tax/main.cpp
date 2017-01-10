/* 
 * File:   main.cpp
 * Author: jpela_000
 *
 * Created on January 8, 2017, 10:39 PM
 *///This program calculates the
//Sales Tax on a $52 purchase

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double regularPrice= 52,
            countySale= 0.02,
            stateSale=0.04,
            totalSale,
            totalTax;
    
    //Calculate the Total sale
    totalSale= countySale+stateSale;
    
    //Calculate the total tax on the regular price
    totalTax= 52*totalSale;
    
    cout<<"The total sale tax on a $52 purchase is"<<endl;
    cout<<"Total tax =$ "<<totalTax<<endl;
    
    
    return 0;
}

