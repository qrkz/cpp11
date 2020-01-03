/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_17.cpp

17. Write a C++ program to find the sum and average of 'N' numbers.

********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
START:
    int a[50], i, n, sum=0;
    float avg;

    cout<<"\nHow many numbers do you want to add:\n";
    cin>>n;
    
    if(n>50){
        cout<<"That's far too many numbers!\nPlease enter a value under 50.\n\n";
        goto START;
    }
    cout<<"\nEnter the numbers now:\n";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }

    avg=(float)sum/n;

    cout<<"\nSum of the "<<n<<" numbers you entered is "<<sum;
    cout<<"\nAverage of the "<<n<<" numbers you entered is "<<avg<<"\n";
    
	getch();
    return 0;
}