#include<iostream>
using namespace std;
class add
{
	int yrs;
	int mts;
	int days;
	public:
		void insert(int y,int m,int d)
		{
			yrs=y;
			mts=m;
			days=d;
		}
		void display()
		{
			cout<<"years: "<<yrs<<"\t";
			cout<<"months: "<<mts<<"\t";
			cout<<"days: "<<days<<endl;
		}
		void sum(add a1,add a2)
		{
			days=a1.days+a2.days;
			mts=days/30;
			days=days%30;
			mts=mts+a1.mts+a2.mts;
			yrs=mts/12;
			mts=mts%12;
			yrs=yrs+a1.yrs+a2.yrs;
		}
};
int main()
{
	add A1,A2,A3;
	A1.insert(5,8,26);
	A2.insert(13,6,20);
	A3.sum(A1,A2);
	A1.display();
	A2.display();
	A3.display();
	return 0;
}
