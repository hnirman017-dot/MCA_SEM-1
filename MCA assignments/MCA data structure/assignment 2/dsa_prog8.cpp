// Q8. Write a program to count the total number
// of distinct elements in an array.

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
        int flag=0;

        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            count++;
        }
    }

    cout<<"Total distinct elements = "<<count;

    return 0;
}