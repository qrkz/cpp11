/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_07.cpp

07. Write a C++ program to check whether a given year is a leap year not, use if - else statement.

********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int y;
    
    cout<<"\nEnter the year you want to check:\n";
    cin>>y;
    
    if( y%4==0 && y%100!=0 || y%400==0 )
        cout<<y<<" is a leap year!!\n";
    else
        cout<<y<<" is not leap year.\n";

	getch();
    return 0;
}

