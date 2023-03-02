// Reading an array and sorting it using a function
#include<iostream.h>
#include<conio.h>

void sort( int, int* &);

void main(){
	int* arr;
	int len;

	clrscr();
	cout<<"Enter How many Number You want to Enter : ";
	cin>>len;
	arr= new int[len];
	cout<<"Enter "<<len<<" Numbers one by one below : "<<endl;

	for(int j= 0; j<len; cin>>arr[j++]);

	sort( len, arr);

	for(int i= 0; i<len; cout<<arr[i++]<<" ");
	getch();
}

void sort( int x, int* &ar){
	for(int i=0; i<x; i++){
		for(int j=i; j<x; j++){
			if(ar[i]>ar[j]){
				int temp= ar[j];
				ar[j]= ar[i];
				ar[i]= temp;
			}
		}
	}

}
