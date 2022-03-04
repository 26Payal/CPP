#include<iostream>
using namespace std;
class calculator
{
public;
int Input 1;
int Input 2;

void setInput(int a, int b)
{
Input1=a;
Input2=b;
}
int add()
{
return Input1+Input2;
}
};

int main()
{
calculator obj1;
obj1.setInput(10,2);
cout<<" The input"<<obj1.Input1 <<" "<<obj1.Input2 <<endl;
cout<<"sum of input is"<<obj1.add();
return 0;
}

