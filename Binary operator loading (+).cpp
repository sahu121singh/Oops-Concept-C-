#include<iostream>
using namespace std;

class complex {
	int x, y;
	public:
		complex(){}
		
		complex(int a,int b) {
			x=a;
			y=b;
		}
		complex operator + (complex C) {
			complex t;
			t.x = x + C.x;
			t.y = y + C.y;
			return t;
		}
		void display() {
			cout<<x<<" + i"<<y<<endl;
		}
};

int main() {
	complex C1(2,3),C2(4,5);
	complex C3;
	C1.display();
	C2.display();
	C3=C1+C2;
	C3.display();
	return 0;
}
