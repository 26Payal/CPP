#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream fin;
string str;
fin.open("data.txt");
int count =0;
char word[30];
if (!fin)
cout<<"file did not open"<<endl;
else{
while(fin>>word){
count++;
}
}
cout<<"total words:"<< count<<endl;
fin.close();
}

