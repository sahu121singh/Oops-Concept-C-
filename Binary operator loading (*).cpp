#include<iostream>
using namespace std;

class complex
{
	int x, y;
	public:
		complex(){
		}
		complex(int a,int b) {
			x=a;
			y=b;
		}
		complex operator * (complex c) {
			complex c3;
			
			c3.x= x*(c.x) - y*(c.y);
			c3.y= y*(c.x) + x*(c.y);
			
			return c3;
		}
		void display() {
			cout<<x<<" + i("<<y<<")"<<endl;
		}
};

int main() {
	complex c1(2,3),c2(4,5);
	c1.display();
	c2.display();
	complex c3;
	c3=c1*c2;
	c3.display();
	return 0;
}
