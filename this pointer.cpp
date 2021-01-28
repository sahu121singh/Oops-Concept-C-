#include<iostream>
using namespace std;

class B
{
	int a,b,c;
	public:
		void get_vol(int x, int y, int z)
		{
			a=x;
			b=y;
			c=z;
		}
		int show()
		{
			return a*b*c;
		}
		int compare(B b1)
		{
			return this->show() > b1.show();
		}
};
int main()
{
	B b1,b2;
	b1.get_vol(2,4,6);
	b2.get_vol(1,3,5);
	if(b1.compare(b2))
	    cout<<"b1 is greater than b2";
	else
	    cout<<"b1 is smaller than b2";
	    
	return 0;
}
