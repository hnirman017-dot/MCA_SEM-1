// Q7. Create a class Complex with real and imaginary parts.
// Use set(), display() and sum() functions.

#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:

    void set()
    {
        cout<<"Enter real part: ";
        cin>>real;

        cout<<"Enter imaginary part: ";
        cin>>img;
    }

    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    Complex sum(Complex c)
    {
        Complex temp;

        temp.real=real+c.real;
        temp.img=img+c.img;

        return temp;
    }
};

int main()
{
    Complex c1,c2,c3;

    cout<<"Enter first complex number"<<endl;
    c1.set();

    cout<<"\nEnter second complex number"<<endl;
    c2.set();

    c3=c1.sum(c2);

    cout<<"\nFirst number = ";
    c1.display();

    cout<<"Second number = ";
    c2.display();

    cout<<"Sum = ";
    c3.display();

    return 0;
}