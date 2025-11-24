#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter an uppercase character:\n";
    cin>>ch;
    if(ch>='A'&& ch<='Z')
    {
        ch=ch+32;

    }
    cout<<"Lowercase character given: "<<ch<<endl;
}
