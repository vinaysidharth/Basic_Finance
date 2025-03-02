//
// Created by Vinay Sidharth on 2/3/25.
//

#include <iostream>
#include "fin_funct.h"  // Include the header file

using namespace std;
double simple_interest()
{
    double p;
    double n;
    double r;
    cout<<"Enter the value of p : ";
    cin>>p;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;
    double SI;
    SI=(p*n*r)/100;
    return SI;
};