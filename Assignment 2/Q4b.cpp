#include<iostream>
using namespace std;
int main()
{
    char t;
    string str;
    cout<<"enter a string:\n";
    cin>>str;
    int n=str.length();
    for(int i=0;i<n/2;i++)
    {
        t=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=t;
    }
    cout<<"the reversed string is given below:\n"<<str;
    
}