// Q4(a). Write a program to concatenate one string to another string.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b;

    cout<<"Enter first string: ";
    cin>>a;

    cout<<"Enter second string: ";
    cin>>b;

    a=a+b;

    cout<<"Concatenated string = "<<a;

    return 0;
}