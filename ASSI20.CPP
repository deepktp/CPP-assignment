// read employ id, name, salary and print using class
// private data mambers and public member functions
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>

class employee{
	unsigned int id, salary;
	char empName[30];
	public: void getInput(){
			cout<<"Enter Employee Id: ";
			cin>>id;
			cout<<"Enter Employee Name: ";
			cin>>empName;
			cout<<"Enter Employee Salary: ";
			cin>>salary;

		}
		void printEmp(){

			cout<<"Employee Information : \n"<<endl;
			cout.setf(ios::left);
			cout<<setw(15)<<"Employee Id"<<setw(30)<<"Employee Name"<<setw(15)<<"Employee Salary"<<endl;
			cout<<setw(15)<<id<<setw(30)<<empName<<setw(15)<<salary;
		}


};


void main(){
	clrscr();
	employee emp;
	emp.getInput();
	emp.printEmp();
	getch();
}