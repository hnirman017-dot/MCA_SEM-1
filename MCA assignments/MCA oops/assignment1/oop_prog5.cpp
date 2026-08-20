// Q5. Use class instead of structure.
// Data members should be private and functions public/private.

#include<iostream>
using namespace std;
class Student
{
private:
    string name;
    int rollno;
    string degree;
    string hostel;
    float cgpa;
    void privatefun()
    {
        cout<<"Private function"<<endl;
    }
public:
    void addDetails()
    {
        cout<<"Enter name: ";
        cin>>name;

        cout<<"Enter roll no: ";
        cin>>rollno;

        cout<<"Enter degree: ";
        cin>>degree;

        cout<<"Enter hostel: ";
        cin>>hostel;

        cout<<"Enter CGPA: ";
        cin>>cgpa;
    }
    void updateCGPA()
    {
        cout<<"Enter new CGPA: ";
        cin>>cgpa;
    }
    void updateHostel()
    {
        cout<<"Enter new hostel: ";
        cin>>hostel;
    }
    void displaydetails()
    {
        privatefun();
        cout<<"\nName = "<<name<<endl;
        cout<<"Roll No = "<<rollno<<endl;
        cout<<"Degree = "<<degree<<endl;
        cout<<"Hostel = "<<hostel<<endl;
        cout<<"CGPA = "<<cgpa<<endl;
    }
};
int main()
{
    Student s;
    s.addDetails();
    s.displaydetails();
    return 0;
}