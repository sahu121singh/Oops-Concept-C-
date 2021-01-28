#include<iostream>
using namespace std;
class unary_operator {
	int a,b;
	public:
		unary_operator() {
			
		}
		unary_operator(int x) {
			a=x;
		}
		void operator = (unary_operator B);
		void disp();
};

void unary_operator :: operator = (unary_operator B) {
	a=B.a;
}

void unary_operator :: disp() {
	cout<<a<<endl;
}

int main() {
	unary_operator p(10),q;
	p.disp();
	q=p;
	q.disp();
	return 0;
}
