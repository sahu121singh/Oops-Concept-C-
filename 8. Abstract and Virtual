/*
Make a class named shape as base with two double variables and one get_data member
function Derive two classes named triangle and rectangle. Use the virtual function
display_area and redefine it in the derived according to the shape and display it.
*/

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
class Shape {		
	public:
		int height,width;
		void get_dim() {
			cout<<"Enter the height: ";
			cin>>height;
			cout<<"Enter the width: ";
			cin>>width;
		}
		virtual int get_area()=0;
};

class Rectangle : public Shape {
	public:
		int get_area() {
			return (height*width);
		}
};

class Triangle : public Shape {
	public:
		int get_area() {
			return ((0.5)*height*width);
		}
};

int main() {
	Rectangle r1;
	r1.get_dim();
	float A=r1.get_area();
	Triangle t1;
	t1.get_dim();
	float B=t1.get_area();
	cout<<"area of rectangle is: "<<A<<"\n";
	cout<<"area of Triangle is: "<<B<<"\n";
	return 0;
}
