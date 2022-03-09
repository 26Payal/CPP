#include<iostream>
using namespace std;
class location 
{
 int loc,lat;

public:
location()
{
cout<<"Inside the default constant\n";
loc=0;
lat=0;
}
location(int x,int y)
{
cout<<"inside constant";
loc=x;
lat=y;
}
void display()
{
cout<<"The location is==> long :"<<loc<<" lat:"<<lat<<endl;
}
//overloading new operator
void * operator new(size_t size)
{
cout<<"inside overloaded new\n";
void *ptr;
ptr=malloc(size);
if(ptr=NULL)
cout<<"No memory allocation\n";
return ptr;

}
//overloading delete operator
void operator delete(void *ptr)
{
cout<<"inside the overloaded delete\n";
free(ptr);
}
};

int main()
{
location loc1,loc2(20,20);
loc1.display();
loc2.display();
location loc = new location;
loc->display();
delete loc;
return 0;
}

