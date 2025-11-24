#include<iostream>
using namespace std;
int main()
{
    int a[20][20], i, j, n, m, b[20][20], e=0, k=0,t,c[20][20] ;
    cout<<"enter the number of rows into the matrix:\n";
    cin>>n;
    cout<<"enter the number of columns into the matrix:\n";
    cin>>m;
    cout<<"enter the elements into the matrix:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"the matrix is given as:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]!=0)
            {
                e=e+1;
            }
        }
    }
    cout<<"no. of elements in the sparse matrix: "<<e<<endl;
    
    cout<<"the sparse matrix is given below:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]!=0)
            {
                
                b[k][2]=a[i][j];
                b[k][0]=i;
                b[k][1]=j;
                k++;
                
            }
            
        }
        
    }
    for(i=0;i<e;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"the sparse matrix with transpose is given below:\n";
    
    for(i=0;i<e;i++)
    {
    t=b[i][0];
    b[i][0]=b[i][1];
    b[i][1]=t;
    }
    for(i=0;i<e;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }
    for(i=0;i<e;i++)
    {
        for(j=0;j<e-1;j++)
        {

            if (b[j][0]>b[j+1][0])
            {
                for(k=0;k<3;k++)
                {
                    c[j][k]=b[j][k];
                    b[j][k]=b[j+1][k];
                    b[j+1][k]=c[j][k];
                }
            }
        }
    }
    for(i=0;i<e;i++)
    {
        for(j=0;j<e;j++)
        {

            if (b[j][0]&b[j+1][0]==i&&b[j][1]>b[j+1][1])
            {
                for(k=0;k<3;k++)
                {
                    c[j][k]=b[j][k];
                    b[j][k]=b[j+1][k];
                    b[j+1][k]=c[j][k];
                }
            }
        }
    }
    cout<<"the transpose in row major order: \n";
    for(i=0;i<e;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }
    

}