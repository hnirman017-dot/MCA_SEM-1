// Q3. WAP to demonstrate for, while and do while loop
// Also show different variations of for loop

#include<iostream>
using namespace std;

int main()
{
    int i;

    cout<<"Normal for loop:"<<endl;

    for(i=0;i<10;i++)
    {
        cout<<i<<" ";
    }

    cout<<"\nFor loop without initialization:"<<endl;

    i=0;
    for(;i<10;i++)
    {
        cout<<i<<" ";
    }

    cout<<"\nFor loop without increment:"<<endl;

    for(i=0;i<10;)
    {
        cout<<i<<" ";
        i++;
    }

    cout<<"\nFor loop without initialization and increment:"<<endl;

    i=0;
    for(;i<10;)
    {
        cout<<i<<" ";
        i++;
    }

    cout<<"\nWhile loop:"<<endl;

    i=0;
    while(i<10)
    {
        cout<<i<<" ";
        i++;
    }

    cout<<"\nDo while loop:"<<endl;

    i=0;
    do
    {
        cout<<i<<" ";
        i++;
    }while(i<10);

    return 0;
}