// sum of n natural numbers
#include<iostream.h>
#include<conio.h>
void main(){
	clrscr();

	int totalNum, sum=0;
	cout<<"Enter How Mnay Natural Number You Want to Sum : ";
	cin>>totalNum;
	for(int i=1; i<=totalNum; i++){
		sum += i;
	}
	cout<< "Sum of "<< totalNum<<" Natural Numbers is : "<<sum;
	getch();



}