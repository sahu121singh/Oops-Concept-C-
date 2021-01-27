/*
Write a C++ program to add two private data members of a class using
friend function.
*/
#include<iostream>
using namespace std;
class sum {
	int a, b;
	public:
		int c;
		sum() {}
		
		void get_value(int x, int y) {
			cout<<"  enter two integers:\n";
			cout<<" enter first element: ";
			cin>>x;
			cout<<"enter second element: ";
			cin>>y;
		    a=x;
			b=y;
		}
		friend sum add(sum s);
       	void show_data() {
        	cout<<"              sum is: "<<c;
        }
};

sum add(sum s) {
	s.c= s.a+s.b;
	return s;
}

int main() {
    sum S1;
	S1.get_value(0,0);
	S1=add(S1);
	S1.show_data();
	return 0;
}
