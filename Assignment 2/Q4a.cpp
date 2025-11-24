#include<iostream>
#include<string>
using namespace std;
int main()
{
    //part (a) concatenate one string into another
    string name;
    string surname;
    string full_name;
    string space;
    space=" ";
    cout<<"enter first name:\n";
    cin>>name;
    cout<<"enter surname:\n";
    cin>>surname;
    full_name=name+space+surname;
    cout<<"The complete name is "<<full_name<<endl;
}