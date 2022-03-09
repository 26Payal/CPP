#include<iostream>
using namespace std;

class person
{
	public:
	void dis1()
	{
	 cout << "This is person\n";	
	}
};

class student
{
	public:
	void dis2()
	{
	 cout << "This is student\n";	
	}
};

class it : public person, public student
{
	public:
	void dis3()
	{
	 cout << "This is it student\n";	
	}
};

int main()
{
person p1;
student s1;
it i1;

i1.dis1();
i1.dis2();

return 0;
}
