// swaping to integers using function call by address

#include<iostream.h>
#include<conio.h>

void swap( int* , int*);

void main(){
	int num1, num2;
	clrscr();
	cout<<"Enter Two Numbers for Swaping : "<<endl;
	cin>>num1>>num2;

	cout<<"Before Swap :  "<<num1<<"   "<<num2<<endl;

	swap(&num1, &num2);
	cout<<"After Swap :  "<<num1<<"    "<<num2<<endl;

	getch();

}

void swap( int* x, int* y){
	int temp= *x;
	*x= *y;
	*y= temp;

}