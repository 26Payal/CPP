#include<iostream>
#include<exception>
using namespace std;
int main()
{
try{
int*myarray=new int[10000000000000000];
}
catch(exception &e)
{
cout<<"std exceptione"<<e.what()<<endl;
}
return 0;
}
