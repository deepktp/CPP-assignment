// Showing day of week from number using switch case
#include<iostream.h>
#include<conio.h>

void main(){
	int day;
	clrscr();
	cout<<"Enter Number for name of day : ";
	cin>>day;

	switch(day){
		case 1: cout<<"Sunday";
			break;
		case 2: cout<<"Monday";
			break;
		case 3: cout<<"Tuesday";
			break;
		case 4: cout<<"Wednesday";
			break;
		case 5: cout<<"Thrusday";
			break;
		case 6: cout<<"Friday";
			break;
		case 7: cout<<"Satday";
			break;
		default: cout<<"Number Should be in Between 1 to 7";
			break;
	}
	getch();


}