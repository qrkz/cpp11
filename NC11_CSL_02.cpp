/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 21, 2019
File:   NC_CSL11_02.cpp

02. Write a C++ program find the area and circumference of a circle.

********************************************************************************************************/

#include<iostream>
#include<conio.h>
#define PI 3.1416
using namespace std;

int main()
{
    float r, area, circum;
    
    cout<<"\nEnter the radius:\n";
    cin>>r;
    
    area=PI*r*r;
    circum=2*PI*r;
    
    cout<<"\nFor r = "<<r<<" units";
    cout<<"\nArea is "<<area<<" sq.units &\nCircumference is "<<circum<<" units\n";
    
	getch();
    return 0;
}



