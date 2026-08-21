#include<iostream>
using namespace std;
class student
{
    public:
    int roll;
    string name;
    float marks;

     student(string n, int r, float m)
   {
    name=n;
    roll=r;
    marks=m;
   }
     void display()
   {
    cout<<"name: "<<name<<endl;
    cout<<"roll: "<<roll<<endl;
    cout<<"marks: "<<marks<<endl;
   }
};
int main()
{
    student s1("harry", 1, 85.5), s2("john", 2, 90.0), s3("jane", 3, 88.5);
    cout<<"---student1---"<<endl;
    s1.display();
    cout<<"---student2---"<<endl;
    s2.display();
    cout<<"---student3---"<<endl;
    s3.display();
}

