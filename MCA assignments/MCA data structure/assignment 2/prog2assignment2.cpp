#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length,breadth,a;
   
     rectangle( int l,int b)
   {
    length=l;
    breadth=b;
   }
     void display()
   {
    
    cout<<"area "<<endl;
    cout<<length*breadth;
   }
};
int main()
{
   rectangle r1(10,20);
   r1.display();
}


