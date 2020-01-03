/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_13.cpp

13. Write a C++ program to check whether the given number is power of 2.

********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, m;

    cout<<"\nEnter the number you want to check:\n";
    cin>>n;
    m=n;
    
    while(m>2)
    {
        if(m%2!=1)
            m=m/2;
        else
        {
            cout<<"\n"<<n<<" is not a power of 2\n";
            goto END;
        }
    }
    cout<<"\n"<<n<<" is a power of 2\n";

END:
	getch();
    return 0;
}

