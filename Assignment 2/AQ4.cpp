/*Given an array arr[] consisting of only 0s, 1s, and 2s. The objective is to sort the array, i.e.,
put all 0s first, then all 1s and all 2s in last.*/
#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"enter the total elements of the array: "<<endl;
    cin>>n;
    cout<<"enter elements into the array: "<<endl;
    int a[n], b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j=0;
    for(i=0;i<n;i++)
    {
        int temp;
        if(a[i]==0)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
    for(i=j;i<n;i++)
    {
        int temp;
        if(a[i]==1)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
    
    cout<<"sorted array: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}