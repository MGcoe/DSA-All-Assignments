/*String Split Challenge
You are given a string consisting of lowercase English alphabets. Your task is to determine
if it's possible to split this string into three non-empty parts (substrings) where one of
these parts is a substring of both remaining parts*/
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"enter input string: "<<endl;
    cin>>str;
    int a[str.length()], count=0;
    for(int i=0;i<str.length();i++)
    {
        count=0;
        for(int j=i;j<str.length();j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        a[i]=count;
    }
    bool subset=false;
    for(int i=0;i<str.length();i++)
    {
    if(a[i]==3)
     {
        cout<<"YES";
        subset=true;
        break;
     }
    }
    if(!subset)
    {
        cout<<"No";
    }
} 