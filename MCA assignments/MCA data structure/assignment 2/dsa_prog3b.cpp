// Q3(b). Find missing number in a sorted array using Binary Search.

#include<iostream>
using namespace std;

int main()
{
    int a[10], n;
    int low, high, mid;

    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter "<<n-1<<" elements in sorted order:"<<endl;

    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }

    low=0;
    high=n-2;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==mid+1)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    cout<<"Missing number = "<<low+1;

    return 0;
}