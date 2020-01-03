/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_06.cpp

06. Write a C++ program to input the total amount in a bill.
    If the amount is greater than 1000, a discount of 8% is given. Otherwise, no discount is given.
    Output the total amount, discount and the final amount.
    Use simple if statement.

********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    float totAmt, discount, rate=0, finalAmt;
    
    cout<<"\nEnter the Total Bill Amount:\n";
    cin>>totAmt;
    
    if(totAmt>1000)
        rate=0.08;

    discount=totAmt*rate;
    finalAmt=totAmt-discount;
    
    cout<<"\nTotal Amount\t= Rs."<<totAmt;
    cout<<"\nDiscount\t= Rs."<<discount;
    cout<<"\nFinal Amount\t= Rs."<<finalAmt<<endl;

	getch();
    return 0;
}

