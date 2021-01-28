#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		void get_data()
		{
			cin>>a;
		}
		void show_data()
		{
			cout<<"class A data: "<<a<<endl;
		}
};
class B
{
	int b;
	public:
		void get_data1()
		{
			cin>>b;
		}
		void show_data()
		{
			cout<<"class B data: "<<b;
		}
};
class C: public A, public B
{
	public:
		
};
int main()
{
	C c;
	c.A::get_data();
	c.get_data1();
	
	c.A::show_data();
	c.B::show_data();
	return 0;
}
