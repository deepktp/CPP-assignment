// maximum of three number using function with argument and return

#include<iostream.h>
#include<conio.h>

int findMax( int, int, int);

void main(){
	clrscr();
	int num1, num2, num3, maxNum;
	cout<<"Enter 3 Number to Find Max of Them : "<<endl;
	cin>>num1>>num2>>num3;
	maxNum= findMax(num1, num2, num3);

	cout<<"Maximum of entered three number is "<<maxNum<<endl;
	getch();
}

int findMax(int x, int y, int z){

	if(x>y && x>z){
		return x;
	}else if(y>x && y>z){
		return y;
	}
	return z;
}