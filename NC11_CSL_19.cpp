/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_19.cpp

19. Write a C++ program to arrange a list of numbers in ascending order.

********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a[50], n, i, j, temp;

    cout<<"\nHow many numbers do you want to sort?\n";
    cin>>n;
    
    cout<<"\nEnter the numbers now:\n";
    for (i=0;i<n;i++)
        cin>>a[i];

    for (i=0;i<n;i++)
        for (j=0;j<n-1;j++)
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    
    cout<<"The sorted elements are:"<<endl;
    for(i=0; i<n; i++){
        if(i%10==0)
            cout<<endl;
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    
    getch();
    return 0;
}
