
#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream input;
string str;
input.open("data.txt");
if (!input)
cout<<"file did not open"<<endl;
else{
while(input>>str){
cout<<str<<"";
}
}
input.close();
}

