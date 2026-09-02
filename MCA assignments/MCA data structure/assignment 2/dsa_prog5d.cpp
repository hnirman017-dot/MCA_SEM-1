// Q5(d). Efficient storage of an Upper Triangular Matrix.

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter size of matrix: ";
    cin>>n;

    int a[n*(n+1)/2];

    cout<<"Enter elements:"<<endl;

    for(int i=0;i<n*(n+1)/2;i++)
    {
        cin>>a[i];
    }

    int k=0;

    cout<<"Upper triangular matrix:"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=i)
            {
                cout<<a[k]<<" ";
                k++;
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }

    return 0;
}