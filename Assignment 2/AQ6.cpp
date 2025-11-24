/*Given a fixed-length integer array arr, duplicate each occurrence of two (2), shifting the
remaining elements to the right.
Note that elements beyond the length of the original array are not written. Do the above
modifications to the input array in place and do not return anything.*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter no. of elements into the array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements into array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]==2)
        {
            
            for(j=n;j>i;j--)
            {
                a[j]=a[j-1];
            }
        a[j-1]=2;
        }

    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}