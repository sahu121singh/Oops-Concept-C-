/*
Write the following C++ program to show one of the major application of inheritance.
Assume that a bank maintains two kinds of accounts for customers, one called as savings account and the
other as current account. The savings account provides compound interest and withdrawal facilities but no
cheque book facility. The current account provides cheque book facility but no interest. Current account
holders should also maintain a minimum balance and if the balance falls below this level, a service charge is imposed.
(a)	Accept deposit from a customer and update the balance.
(b)	Display the balance.
(c)	Compute and deposit interest.
(d)	Permit withdrawal and update balance.
(e)	Check for minimum balance, impose penalty[NECESSARY], and update the balance.
Do not use any constructors. Use member functions to initialize the class members.
*/

#include <iostream>
using namespace std;

class Account {
	public:
		int Acc_no;
		int balance;
};

class Savings : public Account {
	public:
		void create(int value,int n,char *name) {
			balance=value;
			Acc_no=n;
			cout<<"\n\n NAME "<<name;
		}
		void deposit(int value) {
			balance=balance+value;
			cout<<"\nDeposited "<<value;
			cout<<"\nUpdated bal = "<<balance;
		}
		void display() {
			cout<<"\nYour Account No = "<<Acc_no;
			cout<<"\nYour bal = "<<balance;
		}
		void intrest(int rate, int time) {
			int i = (balance*rate*time)/100;
			cout<<"\nIntrest = "<<i;
			balance=balance+i;
			cout<<"\nUpdated bal = "<<balance;
		}
		void withdrawl(int value) {
			cout<<"\nWithdrawl "<<value;
			if(balance > value) {
				balance=balance-value;
				cout<<"\nUpdated bal = "<<balance;
			}
			else
				cout<<"\nINSUFFICIENT";
		}
};

class Current : public Account {
	public:
		void create(int value,int n,char *name) {
			balance=value;
			Acc_no=n;
			cout<<"\n\nSAVINGS ACC NAME "<<name;
		}
		void deposit(int value) {
			balance=balance+value;
			cout<<"\nDeposited"<<value;
			cout<<"\nUpdated bal = "<<balance;
		}
		void display() {
			cout<<"\nYour Account No = "<<Acc_no;
			cout<<"\nYour bal = "<<balance;
		}
		void withdrawl(int value) {
			cout<<"\nWithdrawl "<<value;
			if(balance > value) {
				balance=balance-value;
				cout<<"\nUpdated bal = "<<balance;
				if(balance < 2000) {
					balance=balance-500;
					cout<<"\nPENALTY TAKEN 500 Rs ";
					cout<<"\nUpdated bal = "<<balance;
				}
			}
			else
				cout<<"\nINSUFFICIENT";
		}
};

int main() {
	Current c;
	Savings s;
	
	// Current Type Account 
	c.create(3000,6546,"Sahu_Singh");
	c.display();
	c.deposit(1000);
	c.withdrawl(3000);
	
	// Savings Type Account
	s.create(4000,89765146,"Sahu_Singh");
	s.display();
	s.deposit(2000);
	s.intrest(5,10);
	s.withdrawl(8000);
	
	return 0;
}
