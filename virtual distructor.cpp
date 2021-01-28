#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<"BASE constructor"<<"\n";
		}
		virtual ~A()
		{
			cout<<"BASE distructor"<<"\n";
		}
};
class B : public A
{	
	public:
		B()
		{
			cout<<"DERIVED constructor"<<"\n";
		}
		~B()
		{
			cout<<"DERIVED distructor"<<"\n";
		}
};
int main()
{
	A *a1= new A();
	A *a2= new B();
	delete a1;
	delete a2;
}
