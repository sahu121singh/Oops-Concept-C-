#include<iostream>
using namespace std;

class B
{
	public:
		virtual void display()
		{
			cout<<"Base class"<<endl;
		}
};
class D: public B
{
	public:
		void display()
		{
			cout<<"Drive class";
		}
};
int main()
{
	B b;
	B *p;
	p=&b;
	D d;
	p->display();
	p=&d;
	p->display();
	return 0;
}
