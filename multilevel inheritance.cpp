#include <iostream>
using namespace std;

class animal 
{
	public:
		void eat()
		  {
		  	cout<<"animal is eating\n";
		  }
};
class mammal:public animal
{
	public:
	  void walking()
	   {
	   	cout<<"mammal  is walking\n";
	   }
};

class dog:public mammal
{
	public:
		void bark()
		 {
		 	cout<<"dog is barking\n";
		 }
};

int main()
{
	dog d1;
	mammal s1;
	d1.bark();
	d1.eat();
	d1.sleep();
	d1.walking();
	s1.eat();
}
