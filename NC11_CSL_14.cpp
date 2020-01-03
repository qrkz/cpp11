/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_14.cpp

14. Write a C++ program to check whether the given number is an Armstrong Number
    using do-while statement.
    (Hint: 153 = 1^3 + 5^3 + 3^3)

********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, m, r, sum=0;

    cout<<"\nEnter the number you want to check:\n";
    cin>>n;
    m=n;

    do{
        r=n%10;
        sum+=(r*r*r);
        n=n/10;
    }while(n!=0);
    
    if(sum==m)
        cout<<"\n"<<m<<" is an Armstrong number!!\n";
    else
        cout<<"\n"<<m<<" is not an Armstrong number.\n";

	getch();
    return 0;
}

