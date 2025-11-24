/*Write a program to convert an Infix expression into a Postfix expression.*/
#include<iostream>
#include<string>
#include<stack>

using namespace std;
string post;
int i;
int precedence(char c)
{
    if(c=='^')
    return 3;
    else if(c=='*'|| c=='/')
    return 2;
    else if(c=='+' || c=='-')
    return 1;
    else 
    return -1;
}
int main()
{
    string inf;
    stack<char> st;
    cout<<"enter infix expression: "<<endl;
    cin>>inf;

    for(i=0;i<inf.length();i++)
    {
        if(inf[i]!='^' && inf[i]!='*' && inf[i]!='/' && inf[i]!='+' && inf[i]!='-' && inf[i]!=')' && inf[i]!='(')
        {
            post=post+inf[i];
        }
        else
        {
            
                if (inf[i]=='(')
                {
                    st.push(inf[i]);
                }
                
                else if (inf[i]==')')
                {
                    while (!st.empty()&&st.top()!='(')
                    {
                        post=post+st.top();
                        st.pop();
                    }
                    if(!st.empty())
                    {st.pop();}
                }
                
                else
                {
                    while(!st.empty() && precedence(st.top()) >= precedence(inf[i]))
                    {
                        post=post+st.top();
                        st.pop();
                    }
                    st.push(inf[i]);
                    
                }
                
            
        }
    }

    while(!st.empty())
    {
        post=post+st.top();
        st.pop();
    }
    cout<<post;

}