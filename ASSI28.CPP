//Making Copy of a File (#backup)

#include<iostream.h>
#include<fstream.h>
#include<conio.h>

void main(){

	char ch;
	clrscr();
	fstream source, dest;
	source.open("STUDENTS.CSV", ios::in);
	dest.open("BACKUP.CSV", ios::out);
	cout<<"Coping File from STUDENTS.CSV to BACKUP.CSV"<<endl;
	while(!source.eof()){
		source.get(ch);
		dest.put(ch);
	}
	source.close();
	dest.close();
	cout<<"File Copied !!"<<endl;
	getch();

}