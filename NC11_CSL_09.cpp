/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_09.cpp

09. Write a C++ program to input the number of units of electricity consumed in a house.
    And calculate the final amount using nested-if statement.
    Use the following data for calculation.

    -------------------------------------
    ¦ Units consumed  ¦      Cost       ¦
    ¦-----------------+-----------------¦
    ¦      < 30       ¦ Rs. 3.50 / Unit ¦
    ¦ >= 30 and < 50  ¦ Rs. 4.25 / Unit ¦
    ¦ >= 50 and < 100 ¦ Rs. 5.25 / Unit ¦
    ¦     >= 100      ¦ Rs. 5.85 / Unit ¦
    -------------------------------------

********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int u;
    float r, amt;
    
    cout<<"\nEnter the number of units consumed:\n";
    cin>>u;
    
    if(u<30)
        r=3.50;
    if(u>=30)
    {
        if(u<50)
            r=4.25;
        if(u>=50)
        {
            if(u<100)
                r=5.25;
            if(u>=100)
                r=5.85;
        }
    }

    amt=u*r;
    
    cout<<"\nFor "<<u<<" units the bill is Rs."<<amt<<endl;

	getch();
    return 0;
}

