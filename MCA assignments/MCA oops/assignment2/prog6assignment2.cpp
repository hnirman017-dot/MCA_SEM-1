#include <iostream>
using namespace std;

class Complex
{
    float real;
    float imaginary;

public:

    Complex()
    {
        real = 0;
        imaginary = 0;
    }

    Complex(float r, float i)
    {
        real = r;
        imaginary = i;
    }

    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    Complex c1;
    Complex c2(5, 3);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    return 0;
}
