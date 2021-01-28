#include<iostream>
using namespace std;
class area
{
	private:
		int a,b,c,d;
	public:
		void square(int a)
		{
			cout<<"square area is: "<<a*a<<endl;
		}
		void rectangle(int b, int c)
		{
			cout<<"rectangle area is: "<<b*c<<endl;
		}
		void circle(int d)
		{
			cout<<"circle area is: "<<3.14*d*d;
		}
};
int main()
{
	area A;
	A.square(5);
	A.rectangle(4,5);
	A.circle(3);
}
