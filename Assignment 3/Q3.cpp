/*Write a program that checks if an expression has balanced parentheses.*/
#include<iostream>
#include<stack>
#include<string>
using namespace std;
void input()
{
    int i;
    stack<char> p;
    string bracket;
    cout<<"enter the input parenthesis"<<endl;
    cin>>bracket;
    for(i=0;i<bracket.length();i++)
    {
        char ch=bracket[i];
        if(bracket[i]=='('||bracket[i]=='{'||bracket[i]=='[')
        {
        p.push(bracket[i]);
        }
    
        else if (p.empty() && (ch == ')' || ch == '}' || ch == ']')) 
            {
                cout << "Not Balanced" << endl;
            }
    }   
    for(i=0;i<bracket.length();i++)
    {
        char ch=bracket[i];
        
    char top=p.top();
    if(top=='(' && ch==')' || top=='{' && ch=='}' || top=='[' && ch==']')
    {
        p.pop();
    }
    
}
    if (p.empty())
    {
        cout<<"parenthesis is balanced."<<endl;
    }
    else 
    {
        cout<<"parenthesis aren't balanced."<<endl;
    }
}
int main()
{
    input();
    return 0;
}