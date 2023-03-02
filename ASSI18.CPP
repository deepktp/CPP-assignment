// class to generate report of student
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>


class student{
	public: int maxMarks;
	private: int rollNum, sub1, sub2, sub3, totalMarks;
		 char studentName[30];
		 float per;
	public: student(int mrks = 300){
			maxMarks= mrks;
		}
		void getInput(){
			cout<<"Enter Roll Number of Student : ";
			cin>>rollNum;
			cout<<"Enter Name of Student : ";
			cin>>studentName;
			cout<<"Enter Number in Three Subjects : "<<endl;
			cin>>sub1>>sub2>>sub3;
		}
		void generateReport(){
			totalMarks= sub1+sub2+sub3;
			per= (totalMarks*100.0)/maxMarks;
			cout<<"Student Report : "<<endl;
			cout.setf(ios::left);
			cout<<setw(15)<<"Roll No."<<setw(35)<<"Student Name"<<setw(15)<<"Total Marks"<<setw(15)<<"Percent"<<endl;
			cout<<setw(15)<<rollNum<<setw(35)<<studentName<<setw(15)<<totalMarks<<setw(15)<<per<<endl;
		}
};


void main(){

	clrscr();
	student rep;
	rep.getInput();
	rep.generateReport();
	getch();
}