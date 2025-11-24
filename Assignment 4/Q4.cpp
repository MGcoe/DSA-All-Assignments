/*Write a program to find first non-repeating character in a string using Queue. Sample I/P: a a 
b c Sample O/P: a -1 b b*/
#include<iostream>
#include<queue>
#include<string>
using namespace std;
queue<char> q;

void display(queue<char> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
        cout<<endl;
    }
}
int main()
{
    string st, st1;
    cout<<"input string: "<<endl;
    cin>>st;
    st1=st[0];
    for(int i=0;i<st.length()-1;i++)
    {
        if(st[i]!=st[i+1])
        st1=st1+st[i+1];
    }
    for(int i=0;i<st.length();i++)
    {
        q.push(st[i]);
    }

    for(int i=0;i<st1.length();i++)
    {   
        int count=0,let=0;
        char fr=q.front();
        cout<<q.front();
        q.pop();
        while(fr!=st1[i])
        {
            let++;
            q.pop();
            
        }
        if(!q.empty())
        {
        for(int k=0;k<let;k++)
        {
            cout<<st1[i];
        }
        }  
        else{
            break;
        } 
        cout<<-1;
        q.pop();
        count++;
        if(count==0)
        {
            cout<<st1[i];
            break;
        }
        while(!q.empty())
        {
            q.pop();
        }
        for(int j=0;j<st.length();j++)
        {
            if(st[j]!=st1[i])
            {
                q.push(st[j]);
            }
        }
        
    }
    
}

