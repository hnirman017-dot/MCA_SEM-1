// Q6(b). Addition of two Sparse Matrices using triplet representation.

#include<iostream>
using namespace std;

int main()
{
    int a[20][3], b[20][3], c[40][3];
    int n,m,k=0;

    cout<<"Enter number of non-zero elements in first matrix: ";
    cin>>n;

    cout<<"Enter row, column and value:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }

    cout<<"Enter number of non-zero elements in second matrix: ";
    cin>>m;

    cout<<"Enter row, column and value:"<<endl;

    for(int i=0;i<m;i++)
    {
        cin>>b[i][0]>>b[i][1]>>b[i][2];
    }

    int i=0,j=0;

    while(i<n && j<m)
    {
        if(a[i][0]==b[j][0] && a[i][1]==b[j][1])
        {
            c[k][0]=a[i][0];
            c[k][1]=a[i][1];
            c[k][2]=a[i][2]+b[j][2];
            i++;
            j++;
            k++;
        }
        else if(a[i][0]<b[j][0] ||
               (a[i][0]==b[j][0] && a[i][1]<b[j][1]))
        {
            c[k][0]=a[i][0];
            c[k][1]=a[i][1];
            c[k][2]=a[i][2];
            i++;
            k++;
        }
        else
        {
            c[k][0]=b[j][0];
            c[k][1]=b[j][1];
            c[k][2]=b[j][2];
            j++;
            k++;
        }
    }

    while(i<n)
    {
        c[k][0]=a[i][0];
        c[k][1]=a[i][1];
        c[k][2]=a[i][2];
        i++;
        k++;
    }

    while(j<m)
    {
        c[k][0]=b[j][0];
        c[k][1]=b[j][1];
        c[k][2]=b[j][2];
        j++;
        k++;
    }

    cout<<"Addition:"<<endl;

    for(i=0;i<k;i++)
    {
        cout<<c[i][0]<<" "
            <<c[i][1]<<" "
            <<c[i][2]<<endl;
    }

    return 0;
}
