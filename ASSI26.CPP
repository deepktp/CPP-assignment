// number of objcts created and deleted
#include<iostream.h>
#include<conio.h>


class count{

	public: static int creation;
		static int deletion;
		count(){
			creation++;
			cout<<"Object Created"<<endl;
		}
		~count(){
			deletion++;
			cout<<"Object deleted"<<endl;

		}

};

int count::creation =0;
int count::deletion= 0;


void obfn1(){
	count ob1, ob2, ob3;
}
void obfn2(){
	count ob11, ob12, ob13, ob144;
}


void main(){
	clrscr();
	cout<<"Total object Created Until Now: "<<count::creation<<endl;
	cout<<"Total Objects Deleted Until Now: "<<count::deletion<<endl;
	obfn1();
	cout<<"Total object Created Until Now: "<<count::creation<<endl;
	cout<<"Total Objects Deleted Until Now: "<<count::deletion<<endl;
	obfn2();
	cout<<"Total object Created Until Now: "<<count::creation<<endl;
	cout<<"Total Objects Deleted Until Now: "<<count::deletion<<endl;
	getch();


}