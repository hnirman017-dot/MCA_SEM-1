// Q7. Write a program to count the number of inversions in an array.
// A[i] > A[j] and i < j is called an inversion.

#include<iostream>
using namespace std;

int main()
{
    int a[20], n;
    int count=0;

    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter elements:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                count++;
            }
        }
    }

    cout<<"Number of inversions = "<<count;

    return 0;
}