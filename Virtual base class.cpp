#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		void get_A()
		{
			cout<<"enter class A: ";
			cin>>a;
		}
		void show_A()
		{
			cout<<"class A data: "<<a<<endl;
		}
};
class B: virtual public A
{
	int b;
	public:
		void get_B()
		{
			cout<<"enter class B: ";
			cin>>b;
		}
		void show_B()
		{
			cout<<"class B data: "<<b<<endl;
		}
};
class C: virtual public A
{
	int c;
	public:
		void get_C()
		{
			cout<<"enter class C: ";
			cin>>c;
		}
		void show_C()
		{
			cout<<"class C data: "<<c<<endl;
		}
};
class D: public B, public C
{
	public:
		show_A();
		show_B();
		show_C();
};
int main()
{
	D d;
	d.get_A();
	d.get_B();
	d.get_C();
	d.show_A();
	d.show_B();
	d.show_C();
	return 0;
}
