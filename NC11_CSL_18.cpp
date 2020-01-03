/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_18.cpp

18. Write a C++ program to find the second largest of "N" numbers.

********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
START:
    int a[50], i, n, s, l;

    cout<<"\nHow many numbers do you want to add:\n";
    cin>>n;
    
    if(n>50){
        cout<<"That's far too many numbers!\nPlease enter a value under 50.\n\n";
        goto START;
    }
    else if(n<2){
        cout<<"Can't find the Second Largest number if you enter only one number!!\n\n";
        goto START;
    }

    cout<<"\nEnter the numbers now:\n";
    for(i=0; i<n; i++){
        cin>>a[i];
        if(i==0)
            l=a[0];
        else if(i==1){
            if(a[1]>l){
                l=a[1];
                s=a[0];
            }
            else
                s=a[1];
        }
        else{
            if(a[i]>l){
                s=l;
                l=a[i];
            }
            else if(a[i]<l && a[i]>s)
                s=a[i];
        }
    }

    cout<<"\nThe Second Largest number you entered was "<<s<<"!!\n";

	getch();
    return 0;
}
