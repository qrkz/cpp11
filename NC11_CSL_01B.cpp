/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 21, 2019
File:   NC_CSL11_01B.cpp

01B. Write a C++ program to interchange the values of two variables without using third variable.

********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a, b;
    
    cout<<"Enter the two numbers:\n";
    cin>>a>>b;
    
    
    cout<<endl<<"Before interchanging:\na = "<<a<<"\tb = "<<b<<endl;
    
    b=a+b;
    a=b-a;
    b=b-a;
    
    cout<<"After interchanging:\na = "<<a<<"\tb = "<<b<<endl;

	getch();
    return 0;
}

