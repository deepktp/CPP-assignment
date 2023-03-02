// calculating factorial of a given number
#include<iostream.h>
#include<conio.h>

void main(){
	clrscr();
	int num;
	double fact= 1; //just for huge factorial values
	cout<<"Enter a Number to Calculate Factorial  : ";
	cin>>num;
	for(int i=1; i<=num; i++){
		fact= fact*i;
	}
	cout<< "Factorial is " << fact;
	getch();


}