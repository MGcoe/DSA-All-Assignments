#include<iostream>
using namespace std;
int main()
{
    int a[20][20],b[20][20],e,f,r,c,n,m,c[20][20];
    cout<<"enter the no. of elements in the 1st sparse matrix: "<<endl;
    cin>>n;
    cout<<"enter the no. of elements in the 2nd sparse matrix: "<<endl;
    cin>>m;
    cout<<"enter the elements in the first sparse matrix: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the elements in the 2nd sparse matrix: "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"the first matrix is given as: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"the second matrix is given as: "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
//taking transpose of b matrix:
cout<<"the transpose of second sparse matrix is given as: "<<endl;
for(i=0;i<m;i++)
    {
            int temp;
            temp=b[i][0];
            b[i][0]=b[i][1];
            b[i][1]=temp;
    }
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-i-1;j++)
        {
            if((b[j][0]>b[j+1][0])||(b[j][0]==b[j+1][0]&&b[j][1]>b[j+1][1]))
            {
                for(int k=0;k<3;k++)
                {
                    temp=b[j][k];
                    b[j][k]=b[j+1][k];
                    b[j+1][k]=temp;
                }
            }
        }
    }
//multiplication:
int k=0;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        if(a[j][1]==b[j][1])
        {
            c[k][3]=a[j][3]*b[j][3];
        }
    }
}

}