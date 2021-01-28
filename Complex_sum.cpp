#include<iostream>
using namespace std;
class complex
{
	float x,y;
	public:
		complex()
		{
			
		}
		complex(float a)
		{
			x=y=a;
		}
		complex(float real,float imag)
		{
			x=real;
			y=imag;
		}
		friend complex sum(complex,complex);
		friend void display(complex);
};
complex sum(complex c1,complex c2)
{
	complex c3;
	c3.x=c1.x+c2.x;
	c3.y=c1.y+c2.y;
	return c3;
}
void display(complex c)
{
	cout<<c.x<<"+j"<<c.y<<endl;
}
int main()
{
	complex A(2,5);
	complex B(4,6);
	complex C;
	C=sum(A,B);
	display(A);
	display(B);
	display(C);
	return 0;
}
