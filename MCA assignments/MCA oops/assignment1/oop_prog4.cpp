// Q4. Create a structure for Student details
// Name, Roll No, Degree, Hostel and Current CGPA

#include<iostream>
using namespace std;

struct Student
{
    string name;
    int rollno;
    string degree;
    string hostel;
    float cgpa;

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

    void updateDetails()
    {
        cout<<"Enter new name: ";
        cin>>name;

        cout<<"Enter new roll no: ";
        cin>>rollno;

        cout<<"Enter new degree: ";
        cin>>degree;
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
        cout<<"\nStudent Details"<<endl;
        cout<<"Name = "<<name<<endl;
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