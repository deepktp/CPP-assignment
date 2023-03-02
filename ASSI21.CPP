// creating a class rectangle in creating it's object and calling member functions

#include<iostream.h>
#include<conio.h>

class rectangle{
    private: float width, height, area, perimeter;
    public: void getInput(){

		cout<<"Enter Width of Rectangle : ";
		cin>>width;
		cout<<"Enter Height of Rectangle : ";
		cin>>height;
		calc();
	    }
	    void calc(){
		area= height*width;
		perimeter= (height+width)*2;
	    }
	    float getArea(){
		return area;
	    }
	    float getPerimeter(){
		return perimeter;
	    }
};

void main(){

    clrscr();

    rectangle rect1, rect2;

    cout<<"Enter info About First Rectangle : "<<endl;
    rect1.getInput();
    cout<<"Enter Info About Second Rectangle : "<<endl;
    rect2.getInput();

    cout<<"\n\n"<<endl;
    cout<<"Area of First Rectangle :  "<< rect1.getArea()<<endl;
    cout<<"Area of Second Rectangle : "<< rect2.getArea()<<endl;
    cout<<"Perimeter of First Rectangle :  "<< rect1.getPerimeter()<<endl;
    cout<<"Perimeter of Second Rectangle : "<< rect2.getPerimeter()<<endl;

	getch();

}