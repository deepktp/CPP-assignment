// writing user input to file
#include<iostream.h>
#include<fstream.h>
#include<conio.h>

void main(){

	clrscr();

	fstream dest;
	int rollno, totalMarks, maxMarks= 300;
	float per;
	char studentName[30];

	dest.open("STUDENTS.CSV", ios::app);

	cout<<"Enter Student Details : "<<endl;
	cout<<"Roll No. : ";
	cin>>rollno;
	cout<<"Name : ";
	cin>>studentName;
	cout<<"Total Marks (Out of 300) : ";
	cin>>totalMarks;
	per= (totalMarks*100)/maxMarks;

	dest<<"\n\""<<rollno<<"\",\""<<studentName<<"\",\""<<totalMarks<<"\",\""<<per<<"\"";

	dest.close();
	cout<<"Your Details Has Been Submitted, ThankYou!!!"<<endl;
	getch();
}