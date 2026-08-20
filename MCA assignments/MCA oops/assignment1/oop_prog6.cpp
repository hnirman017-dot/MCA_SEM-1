// Q6. Calling private member function inside public member function

#include<iostream>
using namespace std;
class Demo
{
private:
    void show1()
    {
        cout<<"Private function called"<<endl;
    }
public:
    void show2()
    {
        cout<<"Public function called"<<endl;

        show1();
    }
};
int main()
{
    Demo d;
    d.show2();
    return 0;
}