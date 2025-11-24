#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter number of strings:\n";
    cin>>n;
    string arr[100];
    cout<<"enter the strings:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                string temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"strings in alphabetical order:\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}