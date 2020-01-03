/********************************************************************************************************
[      YourPalNurav     ]
[ Learn | Build | Teach ]

Author: @NiftyNurav
Date:   Sep 12, 2019
File:   NC_CSL11_10.cpp

10. Write a C++ program to input the marks of four subjects.
    Calculate the total percentage.
    Output the result as either “First Class” or “Second Class” or “Pass Class” or “Fail”
    using switch statement.
    +--------------+---------------------+
    | Class Range  |         (%)         |
    +--------------+---------------------+
    | First Class  | Between 60% to 100% |
    | Second Class | Between 50% to 59%  |
    | Pass Class   | Between 40% to 49%  |
    | Fail         | Less than 40%       |
    +--------------+---------------------+
********************************************************************************************************/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int range;
    float max=100, a, b, c, d, per;

    cout<<"\nEnter the marks scored by the student in four subjects:\n";
    cin>>a>>b>>c>>d;
    cout<<"\nEnter the maximum marks that could be scored in the test:\n";
    cin>>max;
    
    per=( (a+b+c+d)/(max*4) )*100;
    range=(int)per/10;

    switch(range)
    {
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
            cout<<"\nStudent scored \'First Class\'\n";
            break;
        case 5:
            cout<<"\nStudent scored \'Second Class\'\n";
            break;
        case 4:
            cout<<"\nStudent scored \'Pass Class\'\n";
            break;
        default:
            cout<<"\nStudent has \'Failed\'\n";
            break;
    }

	getch();
    return 0;
}

