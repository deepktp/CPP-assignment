// template to swap values of int, float, charactors
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

template <class swp>
void swap(swp x, swp y){
	swp temp= y;
	y= x;
	x= temp;
	cout<<setw(30)<<x<<setw(30)<<y<<endl;
}


void main(){
	clrscr();
	int num1, num2;
	float flt1, flt2;
	char ch1[30], ch2[30];

	cout<<"Enter Any Two Integers to Swap : "<<endl;
	cin>>num1>>num2;
	cout<<"Enter Any Two float to Swap : "<<endl;
	cin>>flt1>>flt2;
	cout<<"Enter Any to Strings to Swap : "<<endl;
	cin>>ch1>>ch2;

	cout.setf(ios::left);
	cout<<"\n\n\n";
	cout<<"Before Swap : "<<endl;
	cout<<setw(30)<<num1<<setw(30)<<num2<<endl;
	cout<<setw(30)<<flt1<<setw(30)<<flt2<<endl;
	cout<<setw(30)<<ch1<<setw(30)<<ch2<<endl;

	cout<<"\n\n\n";
	cout<<"After Swap : "<<endl;

	swap(num1, num2);
	swap(flt1, flt2);
	swap(ch1, ch2);
	getch();
}
