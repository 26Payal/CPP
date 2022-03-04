#include<iostream>
using namespace std;

int cubevolum(int l=5,int w=6,int h=10)
{
return l*w*h;
}
int main()
{
cubevolum();
cubevolum(9);
cubevolum(15,12);
cubevolum(3,4,7);
}
