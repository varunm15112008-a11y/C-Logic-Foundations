#include <iostream>
using namespace std;

class student
{
	private:
		int marks;
		
    public:
    	void setmarks(int m)
    	{
    		marks = m;
		}
		int getmarks()
		{
			return marks;
		}
};

int main()
{
	student s1;
	s1.setmarks(90);
	cout<<s1.getmarks();
}
