/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_04.cpp

04. Write a C++ program o convert days into years, months and days.
    (Hint: Assume all months have 30 days)

********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int totDays, years, months, days;
    
    cout<<"\nEnter the total day count:\n";
    cin>>totDays;
    
    cout<<"\n"<<totDays<<" days equals ";

    years=totDays/360;
    totDays=totDays%360;
    months=totDays/30;
    days=totDays%30;
    
    cout<<years<<" years, "<<months<<" months & "<<days<<" days.\n";

	getch();
    return 0;
}

