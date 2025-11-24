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
    for(i=0;i<n;i++)
    {
        if ((a[i+1]-a[i])!=1)
        {
        cout<<"missing no. found at index "<< i+1<< " and the missing number is " <<a[i]+1<<endl;
        break;
        }
    }
    
