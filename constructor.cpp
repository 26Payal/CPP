//Demo code for constructor
#include<iostream>
using namespace std;
class constructor
{
private:int i=10;
public:
void setval()
{
cout<<"inside setvalue(),i="<< i <<endl;
}
constructor()
{
cout<<"inside constructor\n"<<endl;
}

};

int main()
{
constructor demo1,demo2;
demo1.setval();
demo2.setval();
return 0;

}
