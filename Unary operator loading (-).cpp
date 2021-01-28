#include<iostream>
using namespace std;
class unary_operator {
	int a;
	public:
		unary_operator() {
			
		}
		unary_operator(int x) {
			a=x;
		}
		void operator - ();
		void disp();
};

void unary_operator :: operator - () {
	a=-a;
}

void unary_operator :: disp() {
	cout<<a<<endl;
}

int main() {
	unary_operator p(10);
	p.disp();
	-p;
	p.disp();
	return 0;
}
