/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 21, 2019
File:   NC_CSL11_01A.cpp

1A. Write a C++ program to interchange the values of two variables using a third variable.

*********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a, b, temp;
    
    cout<<"\nEnter the two numbers you want to interchange:\n";
    cin>>a>>b;
    
    cout<<"\nBefore Interchanging:\na = "<<a<<"\tb = "<<b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"After Interchanging:\na = "<<a<<"\tb = "<<b<<endl;

    getch();
    return 0;
}
