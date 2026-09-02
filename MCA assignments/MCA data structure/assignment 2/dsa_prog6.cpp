// Q6(a). Find transpose of a Sparse Matrix using triplet representation.

#include<iostream>
using namespace std;

int main()
{
    int a[20][3], t[20][3];
    int n;

    cout<<"Enter number of non-zero elements: ";
    cin>>n;

    cout<<"Enter row, column and value:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }

    for(int i=0;i<n;i++)
    {
        t[i][0]=a[i][1];
        t[i][1]=a[i][0];
        t[i][2]=a[i][2];
    }

    cout<<"Transpose:"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<t[i][0]<<" "
            <<t[i][1]<<" "
            <<t[i][2]<<endl;
    }

    return 0;
}