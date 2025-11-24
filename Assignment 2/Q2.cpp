#include <iostream>
using namespace std;
int main()
{
    int i,n=7,a[7]={64,34,25,12,22,11,90},t,j,l,r,mid,k;
    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\n";
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
        
            }

        }
    }
    cout<<"the sorted array is given as:\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\n";
    }
}

