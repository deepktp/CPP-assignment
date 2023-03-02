// class student rollno, name and class exam marks in three subject
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>

class student{
	protected: unsigned int rollno;
		   char studentName[30];

		   void getStudentInfo(){
			cout<<"Enter Student Information : "<<endl;
			cout<<"Enter Roll No. : ";
			cin>>rollno;
			cout<<"Enter Name : ";
			cin>>studentName;
		   }
};

class exam: public student{

	private: int sub1, sub2, sub3, totalMarks;

	public: void getInfo(){
			getStudentInfo();
			cout<<"Enter Marks In Three Subjects : "<<endl;
			cin>>sub1>>sub2>>sub3;
			totalMarks= sub1+sub2+sub3;
		 }
		 void printInfo(){
			cout.setf(ios::left);
			cout<<setw(15)<<"Roll No." << setw(30)<<"Name"<<setw(15)<<"Total Marks"<<endl;
			cout<<setw(15)<<rollno<<setw(30)<<studentName<<setw(15)<<totalMarks<<endl;
		 }


};


void main(){

	clrscr();
	exam ex;
	ex.getInfo();
	ex.printInfo();
	getch();
}