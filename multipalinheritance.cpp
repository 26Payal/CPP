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

class student : public person
{
	public:
	void dis2()
	{
	 cout << "This is student\n";	
	}
};

class teacher : public person
{
	public:
	void dis3()
	{
	 cout << "This is teacher\n";	
	}
};

class it : public student, public teacher
{
	public:
	void dis4()
	{
	 cout << "This is it student\n";	
	}
};

int main()
{
student s1;
teacher t1;
it i1;

s1.dis1();
//s1.dis3();
t1.dis1();
//t1.dis2();
//i1.dis1();
i1.dis2();
i1.dis3();

return 0;
}
