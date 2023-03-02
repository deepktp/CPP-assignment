// increment operater overloading on count data member
#include<iostream.h>
#include<conio.h>

class test{
	int count;
	public: test(){
			count=0;
		}
		void operator++(){
			count+=1;
		}
		int getCount(){
			return count;
		}
};


void main(){
	test ob;
	clrscr();
	cout<<"Inital Value of Count : "<<ob.getCount()<<endl;
	ob++;
	cout<<"After calling ob++ : "<<ob.getCount()<<endl;

	ob++;
	++ob;
	ob.operator++();
	cout<<"After some more increments : "<<ob.getCount()<<endl;


	getch();



}