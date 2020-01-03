/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_05.cpp

05. Write a C++ program to find the largest, smallest and second largest of three numbers
    using simple if statement.

********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a, b, c, largest, smallest, secondLargest;
    
    cout<<"\nEnter the three numbers:\n";
    cin>>a>>b>>c;
    
    largest=a;
    if(b>largest)
        largest=b;
    if(c>largest)
        largest=c;

    smallest=a;
    if(b<smallest)
        smallest=b;
    if(c<smallest)
        smallest=c;

    secondLargest=(a+b+c)-(largest+smallest);

    cout<<"\nSmallest\t= "<<smallest;
    cout<<"\nSecond Largest\t= "<<secondLargest;
    cout<<"\nLargest\t\t= "<<largest<<endl;
    
	getch();
    return 0;
}

