#include<iostream>
using namespace std;
class complex
{
int real,img;
public:
complex()
{
real=0;
img=0;
}
complex(int x, int y)
{
real=x;
img=y;
}
void display()
{
cout<<"The real part:" <<real<<"and img part:" << img<<endl<<endl;
}
complex operator + (complex ob)
{
complex temp;

temp.real=real+ob.real;
temp.img=img+ob.img;
return temp;
}
};

int main()
{
complex c1(1,1),c2(5,5);
c1.display();
c2.display();
complex c3;

c3=c1+c2;
c3=c1.operator + (c2);
c3.display();

return 0;
}


