/*
Write a C++ program to add two complex numbers using constructor
and destructor and count the number of objects created and
destroyed.
*/
#include<iostream>
using namespace std;
int count;
class comp
{
	int x, y;
	public:
		comp() {}
		comp(int a, int b) {
			x = a;
			y = b;
			count++;
			cout<<"count "<<count<<"\n\n";
		}
	    comp (comp &c1, comp &c2) {
        	cout<<"sum is: ";
         	x = c1.x + c2.x;
         	y = c1.y + c2.y;
        }
        
		void display() {
	        cout<<x<<" + j "<<y<<endl<<"\n";
        }
        ~comp() {
			cout<<"count "<<count<<endl;
			count--;
		}
};

int main() {
	comp C1(3,2);
	C1.display();
	comp C2(4,5);
	C2.display();
	comp C3(C1,C2);
	C3.display();
	return 0;
}
