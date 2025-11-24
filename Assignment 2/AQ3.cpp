/*String Anagrams
Given two strings str1 and str2, determine if they form an anagram pair.
Note: Two strings are considered anagrams if one string can be rearranged to form the other
string.*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str, str1;
    int i,j;
    bool found=false;
    cout<<"enter string 1: "<<endl;
    cin>>str;
    cout<<"enter string 2: "<<endl;
    cin>>str1;
    for(i=0;i<str.length();i++)
    {
        for(j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j])
            {
                for(int k=i;k<str.length();k++)
                {
                    str[k]=str[k+1];
                }
            }
        }
    }
    for(i=0;i<str1.length();i++)
    {
        for(j=i+1;j<str1.length();j++)
        {
            if(str1[i]==str1[j])
            {
                for(int k=i;k<str.length();k++)
                {
                    str1[k]=str1[k+1];
                }
            }
        }
    }
    for(i=0;i<str.length();i++)
    {
        found=false;
        for(j=0;j<str1.length();j++)
        {

            if(str[i]==str1[j])
            {
                found=true;
            }
        }
        if(!found)
        {
            cout<<"strings aren't anagram"<<endl;
            break;
        }
    }
    if(found)
    {
        cout<<"strings are anagram"<<endl;
    }

}