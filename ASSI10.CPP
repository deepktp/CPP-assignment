// function decleation defination calling

#include<iostream.h>
#include<conio.h>

int squre(int);


void main(){

    clrscr();

    int n;

    cout<<"Enter Number to get it's Squre : ";
    cin>>n;

    cout<<"Squre of Enterd Number is : "<<squre(n);
    getch();

}

int squre(int x){

        return x*x;

}
