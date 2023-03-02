//Show day of week useing if elseif

#include<iostream.h>
#include<conio.h>

void main(){
	clrscr();
	int day;
	cout<<"Enter Day Number  : ";
	cin>>day;

	if(day == 1){
		cout<<"Sunday";
	}else if( day == 2){
		cout<<"Monday";
	}else if( day == 3){
		cout<<"Tuesday";
	}else if( day == 4){
		cout<<"Wednesday";
	}else if( day == 5){
		cout<<"Thrusday";
	}else if( day == 6){
		cout<<"Friday";
	}else if( day == 7){
		cout<<"Saturday";
	}else{
		cout<<"Number should be in Between 1 to 7";
	}

	 getch();
}