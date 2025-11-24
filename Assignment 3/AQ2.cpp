/*Design a stack that supports getMin() in O(1) time and O(1) extra space.*/
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;
    int x,n,a,b,c,i;
    cout<<"enter the no. of elements to be pushed into stack: "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter element "<<i+1<< ":" <<endl;
        cin>>x;
        st.push(x);
    }
    while(!st.empty())
    {
        a=st.top();
        st.pop();
        if(st.empty())
        break;
        b=st.top();
        if(b>a)
        {
            st.pop();
            st.push(a);
        }
    }
    cout<<"min element: "<<a<<endl;


}