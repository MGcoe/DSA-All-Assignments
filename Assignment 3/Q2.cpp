/*Given a string, reverse it using STACK. For example “DataStructure” should be output as 
“erutcurtSataD.”*/
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    int i;
    string str;
    cout<<"enter the string: "<<endl;
    cin>>str;

    stack<char> rev;
    for(i=0;i<str.length();i++)
    {
        rev.push(str[i]);
    }

    string reverse;
    for(i=0;i<str.length();i++)
    {
        reverse=reverse+rev.top();
        rev.pop();
    }
    cout<<"the reversed string is given as: "<<reverse<<endl;
}