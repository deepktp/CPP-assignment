// reading content of a file in reverse order
#include<iostream.h>
#include<fstream.h>
#include<conio.h>

void main(){
	int len, x=1;
	char ch;
	clrscr();
	fstream source;
	source.open("BACKUP.CSV", ios::in);

	while(!source.eof()){
	       source.get(ch);
	       cout<<ch;
	}
	source.clear();
	source.seekg(0, ios::end);
	len= source.tellg();
	cout<<endl;

	cout<<"Number of Character in file : "<<len<<endl;

	cout<<"Content of File from Reverse : "<<endl;

	while(x<=len){
		source.seekg(-x, ios::end);
		source.get(ch);
		cout<<ch;
		x++;
	}
	source.close();
	getch();
}