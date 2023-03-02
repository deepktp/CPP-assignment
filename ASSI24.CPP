// binary operator overloading

#include<iostream.h>
#include<conio.h>

class test{
	private: int counter;
	public: test(){
			counter= 0;
		}
		void operator+(int x){
			counter +=x;
		}
		int getCounter(){
			return counter;
		}
};

void main(){
	test obj;
	clrscr();

	cout<<"Intial value of Counter : "<<obj.getCounter()<<endl;

	obj+10;

	cout<<"After using oberloaded addiation operator with 10 : "<<obj.getCounter()<<endl;

	obj+2;

	cout<<"After adding more 2 in counter : "<<obj.getCounter();

	getch();
}