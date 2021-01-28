#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class M
{	private:
		int a;
	public:
		void get(int x)
		{
			cout<<"Enter any number"<<"\t";
			cin>>x;
			a=x;
		}
		void display()
		{
			cout<<"\n"<<"Value of entered number of Class M is"<<"\t"<<a<<"\n";
		}
};

class N 
{
	private:
	int b;
	public:
		void get(int x)
		{
			cout<<"Enter any number"<<"\t";
			cin>>x;	
			b=x;
		}	
		void display()
		{
			cout<<"\n"<<"Value of entered number of Class N is"<<"\t"<<b<<"\n";	
		}
};

class P : public M,public N
{
	public:
		int choice;
		void Manage(P p2)
		{	cout<<"Enter the choice to select which get function is executed 1/0: "<<"\t"<<choice<<"\n";
			cin>>choice;
			if(choice==1)
			{
				p2.M :: get(0);
				p2.M :: display();
			}
			else if(choice==0)
			{
				p2.N :: get(0);
				p2.N :: display();	
			}
			
		}
};

int main()
{
	P p1,p2;
	p1.Manage(p2);
	return 0;
}





