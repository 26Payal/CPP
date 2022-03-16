#include <iostream>
using namespace std;

void xtest(int test)
{
cout<<"insisde xtest, test is:"<<test<<"\n";
if(test)throw test;
}
int main()
{
cout<<"start\n";
try{
cout<<"inside try block\n";
xtest(0);
xtest(1);
xtest(2);
}
catch(int i){
cout<<"caught an exception--valueis:";
cout<<i<<"\n";
return 0;
}
}
