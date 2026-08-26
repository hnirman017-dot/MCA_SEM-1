#include <iostream>
using namespace std;

class Demo
{
public:

    Demo()
    {
        cout << "Constructor is called" << endl;
    }

    ~Demo()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    cout << "Creating objects..." << endl;

    Demo obj1;
    Demo obj2;
    Demo obj3;

    cout << "All objects are created." << endl;

    return 0;
}
