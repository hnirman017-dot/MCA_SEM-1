#include<iostream>
using namespace std;
class employee
{
    public:
    int id;
    string name;
    float salary;

     employee(int i, string n, float s)
   {
    id=i;
    name=n;
    salary=s;
   }
     void display()
   {
    cout<<"id: "<<id<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"salary: "<<salary<<endl;
   }
};
int main()
{
    employee e1(1, "harry", 50000.0), e2(2, "john", 60000.0), e3(3, "jane", 55000.0);
    cout<<"---employee1---"<<endl;
    e1.display();
    cout<<"---employee2---"<<endl;
    e2.display();
    cout<<"---employee3---"<<endl;
    e3.display();
}

