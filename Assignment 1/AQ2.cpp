/*String Split Challenge
You are given a string consisting of lowercase English alphabets. Your task is to determine
if it's possible to split this string into three non-empty parts (substrings) where one of
these parts is a substring of both remaining parts*/
#include<iostream>
using namespace std;
int main()
{
    string str, st, st1, st2;
    cout<<"enter input string"<<endl;
    cin>>str;
    int j=0;
    if(str.length()%3==0)
    {
        for(i=0;i<str.length()/3;i++)
        {
            st[i]=str[i];
            j++
        }
        for(i=j;i<str.length()/3;i++)
        {
            st1[i]=str[i];
            j++
        }
        or(i=j;i<str.length()/3;i++)
        {
            st2[i]=str[i];
            j++
        }
    }
}