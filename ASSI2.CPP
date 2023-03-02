#include<iostream.h>
#include<conio.h>

void main(){
	clrscr();

	int currentNum, largest;
	for(int i=0; i<4; i++){
		cout<<"Enter Number " << i+1<< " : " ;
		cin>>currentNum;
		if(i==0 || largest< currentNum){
			largest= currentNum;
		}

	}
	cout<< "Largest Number of Given 4 is : "<<largest;
	getch();

}