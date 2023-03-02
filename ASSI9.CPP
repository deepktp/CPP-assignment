// finding average of three given numbers using global variables

#include<iostream.h>
#include<conio.h>

int num1;
int num2;
int num3;

void main(){
	 clrscr();
	 cout<<"Enter 3 Numbers for there averge : "<< endl;
	 cin>>num1;
	 cin>>num2;
	 cin>>num3;

	 cout<<"Average is " << ((num1+num2+num3)/3.0)<<endl;
	 getch();



}