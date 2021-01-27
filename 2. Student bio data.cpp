/*
Write a C++ program to display the student bio-data using class and object. The bio-data consists of
(i) Name of the student.
(ii) MIS of the student.
(iii) Age of the student.
(iv) Department of the student.
(v) Marks obtained by the student.
The program should also display information of the students who have obtained
the highest marks and should also display the student information according to
their department name.
*/
#include<iostream>
#define MAX 3
using namespace std;
class student {
	char name[10], mis[10], mob[10];
	public:
		char dept[3];
		int t_marks;
		void Insertion() {
			cout<<"enter student 1.name 2.mis 3.mob 4.dep 5.t_marks\n";
			cin>>name   ;
			cin>>mis    ;
			cin>>mob    ;
			cin>>dept   ;
			cin>>t_marks;
		}
		void display_record() {
			cout<<"name    : "<<name<<endl;
			cout<<"mis     : "<<mis<<endl;
			cout<<"dept    : "<<dept<<endl;
			cout<<"mob     : "<<mob<<endl;
			cout<<"t_marks : "<<t_marks;
		}
}s[MAX];

int main() {
	int i;
	string x;
	int c,d;
	for(i = 0; i < MAX; i++) {
		cout<<"student no.:- "<<i<<"\n";
		s[i].Insertion();
		cout<<"\n";
	}
	while(1) {
		cout<<"choice 1.display_record\t 2.exit()\t 3.h_marks\t 4.dept : ";
		cin>>c;
		cout<<"\n";
		switch(c) {
			case 1:
				int n;
				cout<<"enter a no. for which student info you want: ";
				cin>>n;
				s[n].display_record();
				cout<<endl;
				cout<<"\n";
				break;
			case 2:
				exit(0);
			case 3:
				int maxmarks,k;
                maxmarks=s[0].t_marks;
                for( k = 1; k < MAX; k++) {
                    if(s[k].t_marks > maxmarks) {
                        maxmarks = s[k].t_marks;
                    }
                }
                for(k = 1; k < MAX; k++) {
                    if(maxmarks==s[k].t_marks) {
                        s[k].display_record();
                    }
                }
                cout<<"\n\n";
                break;
            case 4:
            	cout<<"enter dept:";
            	cin>>x;
            	for(i = 0; i < MAX; i++) {
            		if(s[i].dept == x) {
            			s[i].display_record();
					}
				}
				cout<<"\n\n";
            	break;
			case 5:
			    default:
                cout<<"Invalid"<<endl;
                break;
		}
	}
    return 0;
}
