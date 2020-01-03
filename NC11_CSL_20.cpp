/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_20.cpp

20. Write a C++ program to o find position of a given number in the array.

********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a[50], n, query, i, count=0;

    cout<<"\nHow many number do you want to enter into the array?\n";
    cin>>n;

    cout<<"\nEnter the numbers now:\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"\nEnter the number you want to find:\n";
    cin>>query;

    cout<<"\n\nOutput:\n";
    for(i=0;i<n;i++){
        if(a[i]==query){
            cout<<i+1<<", ";
            count++;
        }
    }
    if(count==0)
        cout<<"No Match Found!!"<<endl;
    else
        cout<<"\b\b are the positions where \'"<<query<<"\' exists.\n"<<count<<" Matches Found!!\n";

    getch();
    return 0;
}