#include<iostream>
using namespace std;
int main()
{
float *pt = new float;
*pt = 55;
cout<<"\nValue="<<*pt;
cout<<"\naddress="<<pt;
cout<<"\nsize="<<sizeof(pt)<<endl;
cout<<"\nsize ptr="<<sizeof(pt)<<endl;
return 0;
}
