// Q5(e). Efficient storage of a Symmetric Matrix.

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter size of matrix: ";
    cin>>n;

    int a[n*(n+1)/2];

    cout<<"Enter lower triangular elements:"<<endl;

    for(int i=0;i<n*(n+1)/2;i++)
    {
        cin>>a[i];
    }

    int k=0;

    cout<<"Symmetric matrix:"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=j)
            {
                int pos=i*(i+1)/2+j;
                cout<<a[pos]<<" ";
            }
            else
            {
                int pos=j*(j+1)/2+i;
                cout<<a[pos]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}