// Q1. Implement Binary Search algorithm.
// Time complexity = O(log n)

#include<iostream>
using namespace std;

int main()
{
    int a[10], n, x;
    int low, high, mid;

    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter elements in sorted order:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter element to search: ";
    cin>>x;

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==x)
        {
            cout<<"Element found at position "<<mid+1;
            return 0;
        }
        else if(x<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }

    cout<<"Element not found";

    return 0;
}