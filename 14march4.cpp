#include<iostream>
//#include<exception>
using namespace std;

class base{};
class derived:public base{};
int main(){
try{
throw derived();
}
catch(base b){
cout<<"base object caught";
}
catch(derived d){
cout<<"derived object caught";
}
return 0;
}
