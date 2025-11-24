/*You have an array A of integers of size N, an array B (initially empty) and a stack S (initially
empty). You are allowed to do the following operations:
a) Take the first element of array A and push it into S and remove it from A.
b) Take the top element from stack S, append it to the end of array B and remove it from S.
You have to tell if it possible to move all the elements of array A to array B using the above
operations such that finally the array B is sorted in ascending order.*/
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    cout<<"enter elements no. in A: "<<endl;
    int n,m,i,j;
    cin>>n;
    cout<<"enter elements in A: "<<endl;
    int a[n],b[n];
    stack<int> st;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<n;i++)
    {
        st.push(a[i]);
        if(a[i+1]>st.top())
        {
            int k=n-1;
            b[k]=st.top();
            st.pop();
            k--;
        }
        else
        {
            st.push(a[i+1]);
            i++;
            b[k]=st.top();
            st.pop();
            k--;
        }
        
        
    }
}