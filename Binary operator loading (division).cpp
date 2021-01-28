#include<iostream>
using namespace std;

class complex {
	float x, y;
	public:
		complex(){
		}
		complex(float a,float b) {
			x=a;
			y=b;
		}
		complex operator / (complex c) {
			complex c3;
		//	complex c3,c4;
		//	int z;
			
		//	z= x*x + y*y;
			
			c3.x= ( x*(c.x) - y*(c.y) )/(x*x + y*y) ;
			c3.y= ( y*(c.x) + x*(c.y) )/(x*x + y*y) ;
		//	c4.x= (c3.x)/z;
		//	c4.y= (c4.y)/z;
			return (c3);
		}
		void display() {
			cout<<x<<" + i("<<y<<")"<<endl;
		}
};

int main() {
	complex c1(2,3),c2(4,5);
	complex c3;
	c3=c2/c1;
	c3.display();
	return 0;
}
