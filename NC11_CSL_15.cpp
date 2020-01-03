/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_15.cpp

15. Write a C++ program to find the factorial of a number using for
statement. (Hint: 5! = 5 * 4 * 3 * 2 * 1 = 120)

********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, f=1, i;

    cout<<"\nEnter the number:\n";
    cin>>n;
    
    for(i=1;i<=n;i++)
        f=f*i;
    
    cout<<"\n"<<n<<"! = "<<f<<"\n";

	getch();
    return 0;
}

