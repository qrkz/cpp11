/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_16.cpp

16. Write a C++ program to o generate the Fibonacci sequence up to a limit using for statement.
    (Hint: 5 = 0 1 1 2 3)

********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, a=0, b=1, c, i;

    cout<<"\nEnter the limit:\n";
    cin>>n;

    cout<<"\nFibonaci Series upto "<<n<<" is:\n";
    if(n<0)
        cout<<"\nNo Fibbonaci numbers exist below 0\n";
    else if(n==0)
        cout<<a<<"\n";
    else if(n==1)
        cout<<a<<", "<<b<<"\n";
    else{
        c=a+b;
        cout<<a<<", "<<b;
        for(i=2;c<=n;i++){
            cout<<", "<<c;
            a=b;
            b=c;
            c=a+b;
        }
    }
    cout<<endl;

	getch();
    return 0;
}

