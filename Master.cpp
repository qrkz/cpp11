#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <math.h>
#include <conio.h>
/*#include <bits/stdc++.h>*/

#include "L01a.cpp"
#include "L01b.cpp"
#include "L02.cpp"
#include "L03.cpp"
#include "L04.cpp"
#include "L05.cpp"
#include "L06.cpp"
#include "L07.cpp"
#include "L08.cpp"
#include "L09.cpp"
#include "L10.cpp"
#include "L11.cpp"
#include "L12.cpp"
#include "L13.cpp"
#include "L14.cpp"
#include "L15.cpp"
#include "L16.cpp"
#include "L17.cpp"
#include "L18.cpp"
#include "L19.cpp"
#include "L20.cpp"
#include "L21.cpp"
#include "L22.cpp"
#include "L23.cpp"
#include "L24.cpp"
#include "L25.cpp"
#include "L26.cpp"
#include "L27.cpp"
#include "L28.cpp"
#include "L29.cpp"
#include "L30.cpp"

using namespace std;

void div(){
	cout<<"\n=================================================================================\n";
}
void divIn(){
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}
void clrs(){
	system("cls");
}
void Rbg(){
	system("color C0");
}
void Nbg(){
	system("color E0");
}
void Bbg(){
	system("color B0");
}
void Gbg(){
	system("color A0");
}
void Pbg(){
	system("color DF");
}

int chooseProg(){
	int pn,i;
	clrs();Nbg();
	cout<<"\n\nLab Programs Options: (Enter '0' to Exit)";div();
	for(i=1;i<=30;i++){
		cout<<i<<"\t";
		if(i%10==0)
			cout<<"\n";	
	}
	divIn();
	cout<<"\nEnter the Lab Program number you want to execute >> ";
	REENTER:
	cin>>pn;
	
	if(pn<0||pn>30){
		Rbg();
		cout<<"\nEnter valid choice (1-30) >> ";
		goto REENTER;
	}
	else{
		clrs();Bbg();
		cout<<"Program "<<pn<<" selected!";
	}

	return pn;
}

int printProg(string prog)
{
	char ch;
	ifstream fin;
	fin.open( prog.c_str() );	//this.cpp is the name of the current file
	while( !fin.eof() )
	{
		fin.read( (char*)&ch, sizeof(ch) );
		cout << ch;
	}
	return 0;
}

void exeProgMsg(){
	clrs();Pbg();
	cout<<"You selected choice 1.\nProgram Output:";div();
}

int exeAgain(){
	int exeOP2;
	cout<<"\nWould you like to execute again?\n";
	cout<<"Options:\n";divIn();
	cout<<"1-Execute Again\t2-Display Code\t3-Goto Main Page\t0 - Exit\n";
	cout<<"\nEnter your choice >> ";
	cin>>exeOP2;
	return exeOP2;
}

int exeProg(){
	int exitOp;
	cout<<"Options:";divIn();
	cout<<"1-Execute\t2-Goto Main Page\t0-Exit\n\nEnter your choice >> ";
	REENTER:
	cin>>exitOp;
	if(exitOp<0||exitOp>3){
		Rbg();
		cout<<"\nEnter valid choice (1/2/0) >> ";
		goto REENTER;
	}
	return exitOp;
	return 0;
}

int P01(){
	int exeCH;
	string ab = "L01.cpp";
	exeCH = printProg(ab);
	return 0;
}
int main(){
	int a;
	a = P01();
	
	getch();
	return 0;
}

/*
int main(){
	int pn, exeCH, exeOP2;
	MAINSTART:
	system("color E0");
	pn = chooseProg();
	
	switch(pn){
		case 0:
			goto EXIT;

		case 1:{
			cout<<"\n\nProgram Goal:\nWrite a C++ program to interchange the values of two variables using a third variable.";
			div();
			exeCH=printProg("L02.cpp");
			if(exeCH==1){
				exeProg();
				l1a();
				goto MAINSTART;
			}
			else if(exeCH==2)
				goto MAINSTART;
			else
				goto EXIT;
		}
		
		case 2:{
			LABpr02:
			
			cout<<"\n\nProgram Goal:\nWrite a C++ program to find the area and circumference of a circle.";div();
			exeCH=printProg("L02.cpp");
			if(exeCH==1){
				exeProg();
				LAB02:
				l02();
				exeOP2=exeAgain();
				switch(exeOP2){
					case 0:
						goto EXIT;
					case 1:
						goto LAB02;
					case 2:
						goto LABpr02;
					case 3:
						goto MAINSTART;
					default:
						goto EXIT;
				}
			}
			else if(exeCH==2)
				goto MAINSTART;
			else
				goto EXIT;
		}
		
		case 3:{
			
		}
		
		case 4:{
			exeCH=printProg("L04.cpp");
			if(exeCH==1)
				l1a();
			else if(exeCH==2)
				goto MAINSTART;
			else
				goto EXIT;
		}
		
		case 5:{
			exeCH=printProg("L05.cpp");
			if(exeCH==1)
				l1a();
			else if(exeCH==2)
				goto MAINSTART;
			else
				goto EXIT;
		}
		
		case 6:{
			exeCH=printProg("L06.cpp");
			if(exeCH==1)
				l1a();
			else if(exeCH==2)
				goto MAINSTART;
			else
				goto EXIT;
		}
		
		case 7:{
			exeCH=printProg("L07.cpp");
			if(exeCH==1)
				l1a();
			else if(exeCH==2)
				goto MAINSTART;
			else
				goto EXIT;
		}
		
		default:
			goto MAINSTART;
	}
		
	EXIT:
	return 1337;
}
*/
