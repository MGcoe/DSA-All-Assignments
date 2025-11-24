#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;
    int n,i,j;
    cout<<"enter no. of elements into the array: "<<endl;
    cin>>n;
    cout<<"enter elements into the array: "<<endl;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<endl;
    int count;
    for(i=n-1;i>=0;i++)
    {
        count=1;
        while(!st.empty()&&a[i]>st.top())
        {
            st.pop();
            count++;
        }
        if(st.empty())
        {
            b[i]=0;
        }
        else
        {
            b[i]=count;
        }
        st.push(a[i]);
    }
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }
}