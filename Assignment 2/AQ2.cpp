/*Find two numbers in an array whose difference equals K. Given an array arr[] and a
positive integer k, the task is to count all pairs (i, j) such that i < j and absolute value of
(arr[i] - arr[j]) is equal to k.*/
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,k;
    cout<<"enter no.of elements into the array: "<<endl;
    cin>>n;
    cout<<"enter k: "<<endl;
    cin>>k;
    cout<<"enter input array: "<<endl;
    int a[10],i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (abs(a[i]-a[j])==k)
            cout<<a[i]<<"\t"<<a[j]<<endl;
        }
    }
    

}