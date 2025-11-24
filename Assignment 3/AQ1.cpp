/*Given an array A, find the nearest smaller element for every element A[i] in the array such that the
element has an index smaller than i.*/
#include<iostream>
#include<stack>
using namespace std;
stack<int> s;
int main()
{
    int i, j, n,k=0;
    cout<<"enter no. of elements into the array: "<<endl;
    cin>>n;
    int a[n],b[n];
    cout<<"enter the elements into the array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=n-1;i>=0;i--)
    {
        bool found = false;
        for(j=i-1;j>=0;j--)
        {
            if(a[i]<a[j])
            {
                s.push(a[j]);
            }
            else
            {
                found=true;
                break;
            }

        }
        if(!found)
        {
            b[i]=-1;
        }
        else 
        {
            b[i]=a[j];
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }
    
    
}