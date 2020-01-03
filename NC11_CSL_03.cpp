/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_03.cpp

03. Write a C++ program to find the area of triangle given its three sides.

********************************************************************************************************/

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
    float a, b, c, s, area;/*I take float bes*/
START:
    cout<<"\nEnter the three sides of the triangle:\n";
    cin>>a>>b>>c;
    
    if(a>b+c || b>a+c ||c>a+b)
    {
        cout<<"\nYou lengths you entered doesn't form a triangle!!\nPlease check and enter the correct lengths...\n";
        goto START;
    }
    
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    
    cout<<"\nArea of triangle with lengths "<<a<<", "<<b<<" & "<<c<<" units is "<<area<<" sq.units\n";

	getch();
    return 0;
}

