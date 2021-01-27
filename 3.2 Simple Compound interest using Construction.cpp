/*
Write a C++ program to calculate Simple Interest of different
customers using constructor and destructors and count the number
of times the constructor and destructor is called.
*/
#include<iostream>
using namespace std;
int count=0;
class inst {
	int p,t;
	float i;
	public:
		inst() {
			float I;
			cout<<"enter details:\n";
			cout<<"principle amount: ";
			cin>>p;
			cout<<"       time take: ";
			cin>>t;
			cout<<"rate of interest: ";
			cin>>i;
			cout<<"      Interest I= ";
			cout<<p+(p*t*i)/100<<endl;
			count++;
			cout<<"           count: ";
			cout<<count<<endl;
			cout<<"\n";
		}
		~inst() {
			cout<<"           count: ";
			cout<<count<<endl;
			count--;
		}
};

int main() {
	inst a1,a2,a3;
	return 0;
}
