/*
Write a program to store the record of five students in a file.
*/

#include<iostream>
#include<fstream>
using namespace std;
#define N 2
class stud {
	public:
		int roll;
		string name;
		float marks;
		stud()  {}
		
		void get_info() {
			cout<<"\nRoll_no. -> ";
			cin>>roll;
			cout<<"Name       -> ";
			cin>>name;
			cout<<"marks      -> ";
			cin>>marks;
			cout<<"\n";
		}
		void show_info() {
			cout<<"Roll_no. -> "<<roll<<"\n";
			cout<<"Name     -> "<<name<<"\n";
			cout<<"marks    -> "<<marks<<"\n\n";
		}
};

int main() {
	stud s[N];
	ofstream file;
	file.open("C:..................Path name..........\\sahu.txt",ios::app | ios::out);
	for(int i=0; i<N; i++) {
		s[i].get_info();	
		file<<"\n"<<s[i].roll;
		file<<"\n"<<s[i].name;
		file<<"\n"<<s[i].marks;
	}
	file.close();
	return 0;
}
