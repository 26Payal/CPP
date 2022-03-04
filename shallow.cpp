#include<iostream>
using namespace std;

class demo
{
int data1,data2,*p;
public:
demo() //defalut constructor
{
p=new int;
}

void setval(int i, int j,int k)
{
data1=i;
data2=j;
*p=k;
}

void display()
{
cout<<"value of data1: "<<data1 "data2: "<<data2<<"pointer: "<<*p<<endl;
}
};

int main()
{
demo d1;
d1.setvalue(10,20,30);
d1.display();
return 0;
}


