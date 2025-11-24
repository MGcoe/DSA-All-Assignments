#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i;
    char t;
    string str;
    cout<<"enter the string:\n";
    cin>>str;
    int n=str.length();
    for(i=0;i<n;i++)
    {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            str[i]=str[i+1];
        }
    }
    cout<<"string with deleted vowels is given as: "<<str<<endl;
}