/*
Write a C++ program to display area of circle, rectangle, square,
triangle using function overloading.
*/

#include<iostream>
using namespace std;
class area {
	public:
		void Area(int l, int b);
		void Area(int r);
		void Area();
};
void area::Area(int r) {
	cout<<"          area of circle: "<<3.14*r*r<<endl;
}
void area::Area(int l, int b) {
	cout<<"       area of rectangle: "<<l*b<<endl;
}
void area::Area() {
	int b,h;
	cout<<"enter height of triangle: ";
	cin>>h;
	cout<<"  enter base of triangle: ";
	cin>>b;
	cout<<"        area of triangle: "<<0.5*h*b<<endl;
}

int main() {
	area A1,A2,A3;
	A1.Area(5);
	A2.Area(4,5);
	A3.Area();
	return 0;
}
