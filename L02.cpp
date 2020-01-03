#include<iostream>	//Linker Statements
#include<iomanip>
using namespace std;	//Preprocessor Statements

int l02(){		//Program Main Function
	cout<<fixed<<setprecision(4);
	float r, area, circumference;	//Variable Declaration
	
	cout<<"\nEnter the radius of circle (in cm) >> ";		//Gathering User Input
	cin>>r;

	area = 3.14159*r*r;		//Main Processing
	circumference = 2*3.14159*r;
	cout<<"\nFor Radius: "<<r<<" units";
	cout<<"\nArea is "<<area<<" sq.units";
	cout<<"\nCircumference is "<<circumference<<" units\n";		//Displaying Result
	
	return 0;
}
