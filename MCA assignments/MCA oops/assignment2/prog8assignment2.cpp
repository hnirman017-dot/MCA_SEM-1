#include <iostream>
using namespace std;

class Demo
{
    int num;

public:

    Demo(int n)
    {
        num = n;
        cout << "Constructor called for object " << num << endl;
    }

    ~Demo()
    {
        cout << "Destructor called for object " << num << endl;
    }
};

void test()
{
    cout << "\nInside function:" << endl;

    Demo obj3(3);
    Demo obj4(4);

    cout << "Function is ending..." << endl;
}

int main()
{
    cout << "Inside main:" << endl;

    Demo obj1(1);
    Demo obj2(2);

    test();

    cout << "\nBack to main." << endl;

    return 0;
}
