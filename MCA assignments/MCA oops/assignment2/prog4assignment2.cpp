#include<iostream>
using namespace std;
class box
{
    public:
    int length,breadth,height,volume;
   
     box( int l,int b,int h)
   {
    length=l;
    breadth=b;
    height=h; 
   }
     void display()
   {
    cout<<" "<<length*breadth*height;
   }
  };
  int main()
  {
    box b1(10,20,30);
    b1.display();
  }  