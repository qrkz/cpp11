/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_11.cpp

11. Write a C++ program to find sum of all the digits of a number using while statement.

********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, s=0, r;

    cout<<"\nEnter the number:\n";
    cin>>n;

    cout<<"\nSum of all digits of number "<<n<<" is ";
    
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }

    cout<<s<<endl;

	getch();
    return 0;
}

