#include<iostream>
using namespace std;
int main()
{
    int i,n,k,a[100],l,r,mid, suml, sumr;
    cout<<"enter the number of elements in the array:\n";
    cin>>n;
    cout<<"enter the elements into the array with a missing no.:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"the array is given as\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\n";
    }
    l=0;
        r=n-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            
                if(a[mid]!=mid+1)
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }


        }
        cout<<"missing element found having value "<<mid+1<<" at index "<<mid;
    
}