/*
Write a C++ program to have the concept of exception handling.
*/

#include <iostream>
using namespace std;

void fun() {
	double y=0,i,j;
	cout<<"ENTER DIVIDEND: ";
	cin>>i;
	cout<<"ENTER DIVISOR: ";
	cin>>j;
	try {
		if(j==0)
			throw y;
		else
			y=i/j;
			throw y;
	}
	catch(double x) {
		if(x==0)
			cout<<" Division Not Defined"<<endl;
		else
			cout<<"the answer is = "<<x;
	}
}

void arr() {
    int x;
	cout<<"\nenter the position of element to print: ";
	cin>>x;
   	int a[] = {1,2,3,4,5};
	try {
		if(x<6)
			throw a[x-1];
		else
			throw 0;
	}
	catch(int x) {
		if(x==0)
			cout<<"\nArray out of index";
		else
			cout<<"\nthe answer is = "<<x;
	}
}

int main() {
	fun();
	arr();
	return 0;
}
