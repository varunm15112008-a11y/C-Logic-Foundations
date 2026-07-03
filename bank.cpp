#include <iostream>
using namespace std;

class bank
{
	public:
	int password;
	int bal;
	
	void deposit(int amount)
	{
		bal = bal + amount;
		cout<<bal;
	}
	
	void withdraw(int amount)
	{
		bal = bal - amount;
		cout<<bal;
	}
	
	void display_balance()
	{
		cout<<bal;
	}
};

int main()
{   
    bank b1;
	cout<<"enter your password: ";
	cin>>b1.password;
	b1.bal=5000;
	int amount;
	if (b1.password==123)
	{
		char user;
		cout<<"deposit(d) or withdraw(w) or display_balance(a): ";
		cin>>user;
		if (user=='d')
		{
			cout<<"enter your amount to deposit: ";
			cin>>amount;
			b1.deposit(amount);
		}
		else if (user=='w')
		{
			cout<<"enter your amount to withdraw: ";
			cin>>amount;
			b1.withdraw(amount);
		}
		else if (user=='a')
		{
			b1.display_balance();
		}
	}
	else
	{
		cout<<"incorrect password";
	}
	
}
