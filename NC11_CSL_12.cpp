/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_12.cpp

12. Write a C++ program to  input principal amount, rate of interest and time period.
    Calculate compound interest using while statement.
    ( Hint: CI=P*(1+R/100)^T )

********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    float P, R, T, CI, newR=1;

    cout<<"\nEnter Principal Amount:\n";
    cin>>P;
    cout<<"\nEnter Rate of Interest:\n";
    cin>>R;
    cout<<"\nEnter Time Period:\n";
    cin>>T;
    
    while(T>0)
    {
        newR=newR*( 1+(R/100) );
        T--;
    }
    
    CI=P*newR;
    
    cout<<"\nPrincipal\t= Rs."<<P;
    cout<<"\nCompound Interest = Rs."<<CI-P;
    cout<<"\nCompound Interest = Rs."<<CI;

	getch();
    return 0;
}

