// Q8. Implement namespace to use same name variables
// and functions in different sections of program.

#include<iostream>
using namespace std;

namespace A
{
    int x=10;

    void show()
    {
        cout<<"Namespace A"<<endl;
        cout<<"x = "<<x<<endl;
    }
}

namespace B
{
    int x=20;

    void show()
    {
        cout<<"Namespace B"<<endl;
        cout<<"x = "<<x<<endl;
    }
}

int main()
{
    A::show();
    B::show();

    cout<<"A x = "<<A::x<<endl;
    cout<<"B x = "<<B::x<<endl;

    return 0;
}