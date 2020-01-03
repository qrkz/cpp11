/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_08.cpp

08. Write a C++ program to accept a character.
    Determine whether the character is a lower-case or upper-case letter.

********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char c;
    
    cout<<"\nEnter any character:\n";
    cin>>c;
    
    if(c>='A' && c<='Z')
        cout<<c<<" is an Upper-Case letter!";
    else if(c>='a' && c<='z')
        cout<<c<<" is a Lower-Case letter!";
    else
        cout<<c<<" is not a letter.";

	getch();
    return 0;
}


