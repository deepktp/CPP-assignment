// program to print squre series

#include<iostream.h>
#include<conio.h>

void main(){

        int num;
        clrscr();
        cout<<"Enter Length of Series : ";
        cin>>num;
        cout<<"Series : "<<endl;
        for(int i=1; i<=num; i++){
	    cout<<i*i<<"  ";
        }
        getch();
}
