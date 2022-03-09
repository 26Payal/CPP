#include<iostream>
using namespace std;
class student{
public:
int roll_no;
string name;
void setData(string n,int r)
{
roll_no=r;
name=n;
}
};
class test
{
public:
int marks[5];
void setMarks(int m1,int m2, int m3, int m4, int m5)
{
marks[0] = m1;
marks[1] = m2;
marks[2] = m3;
marks[3] = m4;
marks[4] = m5;
}
};
class result : public student, public test
{
public:
float totalmarks()
{
float total = 0;
for(int i = 0;i<5;i++)
{
total = total +marks [i];
}
return total;
}
float percentage()
{
float perc = (totalmarks() *100 / 500);
return perc;
}
void display()
{
cout<<"Student Name:"<<name<<endl<<"Roll No:"<<roll_no<<endl<<"Total:"<<totalmarks()<<endl<<"Percentage:"<<percentage()<<endl;
}
};
int main()
{
student s;
test t;
result r;
r.setData("Pallavi", 37);
r.setMarks(90, 60, 50, 80, 95);
r.display();
}



