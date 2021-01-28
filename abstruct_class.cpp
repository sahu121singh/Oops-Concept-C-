#include<iostream>
using namespace std;

class A
{
	public:
		int x,y;
		void get_data(int a, int b)
		{
			cout<<"enter first value: ";
			cin>>a;
			cout<<"enter second value: ";
			cin>>b;
			x=a;
			y=b;
		}
		virtual float get_product()=0;
};
class B : public A
{
	public:
		float get_product()
		{
			return (x*y);
		}
};
class C : public A
{
	public:
		float get_product()
		{
			return ((0.5)*x*y);
		}
};
int main()
{
	B b;
	b.get_data(0,0);
	float prod1=b.get_product();
	C c;
	c.get_data(0,0);
	float prod2=c.get_product();
	cout<<"product of class B: "<<prod1<<"\n";
	cout<<"product of class C: "<<prod2<<"\n";
	return 0;
}
