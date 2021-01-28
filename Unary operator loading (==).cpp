#include<iostream>
using namespace std;
class Oper {
	int a,b;
	public:
		Oper() {
			
		}
		Oper(int x) {
			a=x;
		}
		void operator == ( Oper B);
		void disp();
};

void Oper :: operator == ( Oper B) {
	if (a==B.a)
		cout<<"equal";
	else
		cout<<"uequal";
}
void Oper :: disp() {
	cout<<a<<endl;
}

int main() {
	Oper p(10),q(5);
	p.disp();
	q==p;
	return 0;
}
