#include<iostream.h>
#include<conio.h>

void main(){

	clrscr();
	int totalNum=0, sum=0, tempNum=0;
	float avg=0;
	cout<<"Enter How Many Numbers You want to enter : ";
	cin>>totalNum;
	for(int i=0; i<totalNum; i++){
		cout<<"Enter Number "<< i+1 << " : ";
		cin>>tempNum;
		sum += tempNum;
	}
	avg= sum/totalNum;
	cout<<"Total Given Numbers Are : "<< totalNum<<endl;
	cout<<"Sum of Given Numbers is : "<< sum<<endl;
	cout<<"Average of Numbers is :   "<< avg<<endl;

	getch();

}