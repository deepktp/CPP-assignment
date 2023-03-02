// power overloaded function for both int, float
#include<iostream.h>
#include<conio.h>

int power(int, int);
float power(float, int);

void main(){
	int num, pwr;
	float flt;
	clrscr();
	cout<<"Enter a Integer Number : ";
	cin>>num;
	cout<<"Enter a Float Number :  ";
	cin>>flt;
	cout<<"Enter Power you want to calculate : ";
	cin>>pwr;

	cout<<pwr <<" Power of "<<num<<" is " << power(num, pwr)<<endl;
	cout<<pwr <<" Power of "<<flt<<" is " << power(flt, pwr)<<endl;
	getch();

}

int power( int x, int pwr){
	int rslt= x;
	for(int i=1; i<pwr; i++){
		rslt *= x;
	}
	return rslt;
}
float power( float x, int pwr){
	float rslt= x;
	for(int i=1; i<pwr; i++){
		rslt *= x;
	}
	return rslt;
}
