/*
Write a C++ program to perform all operations on complex numbers using operator overloading.
*/

#include<iostream>
using namespace std;

class complex {
	float x, y;
	public:
		complex(){}
		
		complex(float a,float b) {
			x=a;
			y=b;
		}
		complex operator + (complex C) {
			complex t;
			t.x = x + C.x;
			t.y = y + C.y;
			return t;
		}
		complex operator - (complex C) {
			complex t;
			t.x = x - C.x;
			t.y = y - C.y;
			return t;
		}
		complex operator * (complex c) {
			complex c3;
			
			c3.x= x*(c.x) - y*(c.y);
			c3.y= y*(c.x) + x*(c.y);
			
			return c3;
		}
		complex operator / (complex c) {
			complex c3;
			c3.x= ( x*(c.x) - y*(c.y) )/(x*x + y*y) ;
			c3.y= ( y*(c.x) + x*(c.y) )/(x*x + y*y) ;
			return (c3);
		}
		void display() {
			cout<<x<<" + i("<<y<<")"<<endl;
		}
};

int main() {
	complex C1(2,3),C2(4,5);
	complex C3,C4,C5,C6;
	C1.display();
	C2.display();
	C3=C1+C2;
	C3.display();
	C4=C1-C2;
	C4.display();
	C5=C1*C2;
	C5.display();
	C6=C2/C1;
	C6.display();
	return 0;
}
