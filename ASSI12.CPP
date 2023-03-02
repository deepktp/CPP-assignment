// Reading an array and searching a number in it

#include<iostream.h>
#include<conio.h>

void main(){
	int* arr;
	int len, searchNum, numPosition= -1;

	clrscr();
	cout<<"Enter How many Number You want to Enter : ";
	cin>>len;
	arr= new int[len];
	cout<<"Enter "<<len<<" Numbers one by one below : "<<endl;

	for(int j= 0; j<len; cin>>arr[j++]);

	cout<<"Enter which Number You want to Search : ";
	cin>>searchNum;

	for(int i=0; i<len; i++){
		if(arr[i] == searchNum){
			numPosition= i;
			break;
		}
	}

	if(numPosition == -1){
		cout<<"Cannot Find Your Nummber"<<endl;

	}else{
		cout<<"Your Number is at Positon " <<numPosition +1<<endl;
       }
       getch();

}