// copy data members from an object to other using copy constructor

#include<iostream.h>
#include<conio.h>

class demo{
	private: int count;
	public: demo(){
			count= 12;
			cout<<"Normal Constructor is Called"<<endl;		}
		demo (demo &d){
			cout<<"Copy Constructor is Called "<<endl;
			count= d.count;
		}
		void inc(){
			count++;
		}
		int getCount(){
			return count;
		}
};

void main(){
	clrscr();
	demo ob1;
	cout<<"Inital Value of Count in First Object : "<<ob1.getCount()<<endl;
	ob1.inc();
	ob1.inc();
	cout<<"Changed Value of Count in First Object : "<<ob1.getCount()<<endl;

	demo ob2= ob1;
	cout<<"Inital Value of Count in second Object after coping it from first object : "<<ob2.getCount()<<endl;
	getch();
}