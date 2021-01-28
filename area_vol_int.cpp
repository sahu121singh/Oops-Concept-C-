#include<iostream>
using namespace std;
class area
{
	private:
		int a,b,c;
	public:
		void square(int a)
		{
			cout<<"area of square is: "<<a*a<<endl;
		}
		void rectangle(int b, int c)
		{
			cout<<"area of rectangle is: "<<b*c<<endl;
		}
};
class volume
{
	private:
		int a,r;
	public:
		void cube(int a)
		{
			cout<<"volume of cube is: "<<a*a*a<<endl;
		}
		void sphere(int r)
		{
			cout<<"volume of sphere is: "<<(4/3)*3.14*r*r*r<<endl;
		}
};
class bank
{
	public:
		void Interest_bank(int p, int t)
		{
			cout<<"bank interest I is: "<<p*t;
		}
};
int main()
{
	area a;
	volume v;
	bank b;
	a.square(5);
	a.rectangle(4,5);
	v.cube(3);
	v.sphere(4);
	b.Interest_bank(2000,5);
}
