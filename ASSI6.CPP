// check if a number is prime or not
#include<iostream.h>
#include<conio.h>

void main(){
	clrscr();
	int isPrime=1, num;
	cout<<"Enter a Number to Check if it is Prime or Not : " ;
	cin>>num;
	if(num == 0 || num == 1){
		cout<<"Cannot Determine for 0 and 1";
	}else if(num == 2){
		cout<<"Given Number 2 is a Prime Number"<<endl;
	}else{
		for(int i=2; i<num; i++){
			if(num%i == 0){
				isPrime= 0;
				break;
			}

		}

		if(isPrime ==1){
			cout<<"Given Number "<<num<<" is a Prime Number"<<endl;

		}else{
			cout<<"Given Number "<<num<<" is Not a Prime Number" <<endl;
		}

	}
	getch();


}