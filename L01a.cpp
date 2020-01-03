#include<iostream>	//Linker Statements
using namespace std;	//Preprocessor Statements

int l1a(){	//Program Main Function
	int a, b, temp;	//Variable Declaration
	cout<<"\nEnter the value of a >> ";
	cin>>a;
	cout<<"Enter the value of b >> ";
	cin>>b;

	cout<<"\nBefore Interchanging:\ta = "<<a<<"\tb = "<<b;
	temp = a;
	a = b;
	b = temp;
	cout<<"\nAfter Interchanging:\ta = "<<a<<"\tb = "<<b<<endl;
	
	return 0;
}
