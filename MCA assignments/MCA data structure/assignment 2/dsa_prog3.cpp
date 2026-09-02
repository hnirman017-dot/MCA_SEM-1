// Q3(a). Find missing number in a sorted array using linear search.
// Array contains n-1 distinct numbers from 1 to n.

#include<iostream>
using namespace std;

int main()
{
    int a[10], n;
    int sum=0, total;

    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter "<<n-1<<" elements:"<<endl;

    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }

    total=n*(n+1)/2;

    cout<<"Missing number = "<<total-sum;

    return 0;
}