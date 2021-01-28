#include<iostream>
using namespace std;
int count=0;
class A
{
	public:
	 A()
	{
		cout<< "constructor ";
		count++;
		cout<<count<<endl;
	}
	
	~A()
	{
		cout<<"distructor ";
		cout<<count<<endl;
		count--;
	}
};
int main()
{
	A a1,a2,a3,a4,a5;
}
