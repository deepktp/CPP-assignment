// check if given year is leap year or not
#include<iostream.h>
#include<conio.h>

void main(){

	int year;
	clrscr();
	cout<<"Enter a Year : ";
	cin>>year;

	if(year %4 == 0){
		cout<<year<<" is a Leap Year";
	}else{
		cout<<year<<" is Not a Leap Year" ;
	}
	getch();

}