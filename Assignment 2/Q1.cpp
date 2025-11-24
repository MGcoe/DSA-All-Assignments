#include <iostream>
using namespace std;
int main()
{
    int i,n,a[100],t,j,l,r,mid,k;
    cout<<"enter the number of elements:\n";
    cin>>n;
    cout<<"enter elements of the array:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    k=n;
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
    for(i=0;i<k;i++)
    {
        cout<<a[i]<<"\n";
    }

    cout<<"enter the value of the element to be searched:\n";
    cin>>k;
    
    l=0;
    r=n-1;

    while(l<=r)
{
    mid=(l+r)/2;
    if(a[mid]==k)
    {
        cout<<"element found at "<<mid<<" index";
        break;
    }
    else if(a[mid]>k)
    {
        r=mid-1;
    }
    else if (a[mid]<k)
    {
        l=mid+1;
    }
}
    if(l>r)
    cout<<"element not found";


}