#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll;
    float cgpa;

public:

    Student()
    {
        name = "Unknown";
        roll = 0;
        cgpa = 0;
    }

    Student(string n, int r)
    {
        name = n;
        roll = r;
        cgpa = 0;
    }

    Student(string n, int r, float c)
    {
        name = n;
        roll = r;
        cgpa = c;
    }

    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Roll Number = " << roll << endl;
        cout << "CGPA = " << cgpa << endl;
        cout << endl;
    }
};

int main()
{
    Student s1;
    Student s2("Rahul", 101);
    Student s3("Aman", 102, 8.5);

    cout << "Student 1:" << endl;
    s1.display();

    cout << "Student 2:" << endl;
    s2.display();

    cout << "Student 3:" << endl;
    s3.display();

    return 0;
}
