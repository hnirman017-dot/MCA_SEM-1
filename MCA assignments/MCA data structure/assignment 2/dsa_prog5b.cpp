// Q5(b). Efficient storage of a Tri-Diagonal Matrix.

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter size of matrix: ";
    cin>>n;

    int a[3*n-2];

    cout<<"Enter "<<3*n-2<<" non-zero elements:"<<endl;

    for(int i=0;i<3*n-2;i++)
    {
        cin>>a[i];
    }

    int k=0;

    cout<<"Tri-diagonal matrix:"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-j==1 || i-j==0 || j-i==1)
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