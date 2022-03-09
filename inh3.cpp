#include<iostream>
using namespace std;

class person
{
	private:
	int h=160;
	
	protected:
	int w = 60;

	public:
	int a = 20;
};

class student : public person
{
	public:
	void dis3()
	{
	 //cout << "Height is: " << h << endl;
	 cout << "Weight is: " << w << endl;
	 cout << "Age is: " << a << endl;
	}
};

int main()
{
student s1;
s1.dis3();
return 0;
}
