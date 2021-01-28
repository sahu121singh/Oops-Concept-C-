#include<iostream>
using namespace std;
class student
{
	private:
	    char name[20];
		int age;
	public:
		void get_data()
		{
			cin>>name;
			cin>>age;
		}
		void show_data()
		{
			cout<<"name="<<name<<'\n'<<"age="<<age;
		}
};
int main()
{
	student s;
	s.get_data();
	s.show_data();
	return 0;
}
