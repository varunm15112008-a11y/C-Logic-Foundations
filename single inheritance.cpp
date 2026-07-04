#include <iostream>
using namespace std;

class animal 
{
	public:
		void eat()
		  {
		  	cout<<"animal is eating\n";
		  }
		void sleep()
		  {
		  	cout<<"animal is sleeping\n";
		  }
};
class dog:public animal
{
	public:
	  void bark()
	   {
	   	cout<<"animal is barking\n";
	   }
};

int main()
{
	dog d1;
	d1.bark();
	d1.eat();
	d1.sleep();
}
