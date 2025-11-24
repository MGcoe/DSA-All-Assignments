#include<iostream>
using namespace std;
int main()
{
    int a[100], j, c=0, i, n;
    cout<<"enter the no. of elements into the array\n";
    cin>>n;
    cout<<"enter the elements into the array\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j&&a[i]>a[j])
            {
                c=c+1;
            }

        }
    }
    cout<<"no of inversions present in the array: "<<c<<endl;
}