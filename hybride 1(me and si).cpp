#include <iostream>
using namespace std;

class engine
{
	public:
		void smartengine()
		  {
		  	cout<<"engine started\n";
		  }
};
class electronic
{
	public:
	  void system()
	   {
	   	cout<<"system on\n";
	   }
};

class car:public engine,public electronic
{
	public:
		void drive()
		 {
		 	cout<<"car is driving\n";
		 }
};

class vehicle:public car
{
	public:
		void name()
		{
			cout<<"vehicle is there\n";
		}
};

int main()
{
	vehicle d1;
	d1.smartengine();
	d1.system();
	d1.drive();
	d1.name();
}
