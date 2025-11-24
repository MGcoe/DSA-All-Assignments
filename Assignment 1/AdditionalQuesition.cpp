/*Write a program to find a saddle point in a two-dimensional array. A saddle point in a 
numerical array is a number that is larger than or equal to every number in its column, 
and smaller than or equal to every number in its row.*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the no. of rows of matrix: "<<endl;
    int r, c;
    cin>>r;
    cout<<"enter no of columns of the matrix: "<<endl;
    cin>>c;
    cout<<"enter the elements of the matrix: "<<endl;
    int i,j, a[r][c];
    bool found=false;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    int max, min, mr;
    for(j=0;j<c;j++)
    {   
        max=a[0][j];
        for(i=0;i<r-1;i++)
        {
            if(max<a[i+1][j])
            {
                max=a[i+1][j];
                mr=i+1;
            }
        }
        min=max;
        for(i=0;i<c-1;i++)
        {
            if(min>a[mr][i+1])
            {
                min=a[mr][i+1];
            }
            
        }
        if(min==max)
        {
            cout<<"saddle found: "<<min;
            found=true;
            break;
        }
    }
    if(!found)
    {
        cout<<"no saddle found"<<endl;
    }
    

}